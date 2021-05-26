//
//  main.c
//  courseWork
//
//  (C) Created by Mikeost corp.
//

#include "allFunction.h"
#include "recordDataBase.h"
#include "Windows.h"

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand((unsigned int)time(NULL));
    time_t realTime = time(NULL);

    // ������ � ������������� ����������;
    int i, j, action, countRestore = 0;
    float arrayFond[5];
    FILE *fileDataBase;
    FILE *fileLogs;

    company = defaultRecordArray(company);
    fileLogs = fopen("logs.txt", "a+t");

    titlePage();
    system("pause");
    system("cls");

    // ���������� ������ � ����
    fileDataBase = fopen("dataBase.bin", "wb");
            fwrite(&company, sizeof(company), 1, fileDataBase);
    fclose(fileDataBase);

    fprintf(fileLogs, "\n\n%s: ������ ���� ������ � ����\n\n", ctime(&realTime));

    // ��������� ���������� �� �����
    fileDataBase = fopen("dataBase.bin", "rb");
        fread(&company, sizeof(companyStructure), 1, fileDataBase);
    fclose(fileDataBase);
    fprintf(fileLogs, "\n\n%s: ������ ���� ������ �� ��������� �� �����\n\n", ctime(&realTime));

    // ����� ���, ���������� � ����
    printf("\n\n\t\t\t����� ���������� � ����\n");
    for(i = 0; i < company.countNumberWorkshops; i++){
        for (j = 0; j < company.numberWorkshops[i].countNumberWorker; j++) {
        printf("\n=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=++=+=+=+=+=+=+=+=+=+=+\n");
        printf("�������� ����: %s\n", company.numberWorkshops[i].nameWorkshop);
        printf("��� ��������: %s\n", company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
        printf("����� ������������� � ���� ����: %.3f ���.\n", (company.numberWorkshops[i].numberWorker[j].money[0]) / (company.numberWorkshops[i].numberWorker[j].numberOfWorkDay[0]));
        arrayFond[j] = (company.numberWorkshops[i].numberWorker[j].money[0]) / (company.numberWorkshops[i].numberWorker[j].numberOfWorkDay[0]);
        }
    }
    fprintf(fileLogs, "\n\n%s: ����� ���������� � ����\n\n", ctime(&realTime));

    // ���������� ���, �������� ���������� �� ������ ����
    fileDataBase = fopen("twoDataBase.bin", "wb");
    for(i = 0; i < company.countNumberWorkshops; i++){
        for(j = 0; j < company.numberWorkshops[i].countNumberWorker; j++){
            fwrite(&company.numberWorkshops[i].nameWorkshop, sizeof(char), 1, fileDataBase);
            fwrite(&arrayFond[j], sizeof(float), 1, fileDataBase);
        }
    }
    fclose(fileDataBase);
    fprintf(fileLogs, "\n\n%s: ������ ������ � �������� ����������� � ����\n\n", ctime(&realTime));

    // ��������� ������ ����
    fileDataBase = fopen("twoDataBase.bin", "rb");
    for(i = 0; i < company.countNumberWorkshops; i++){
        for(j = 0; j < company.numberWorkshops[i].countNumberWorker; j++){
            fread(&company.numberWorkshops[i].nameWorkshop, sizeof(char), 1, fileDataBase);
            fread(&arrayFond[j], sizeof(float), 1, fileDataBase);
        }
    }
    fclose(fileDataBase);
    fprintf(fileLogs, "\n\n%s: ������ ������ � �������� ����������� �� �����\n\n", ctime(&realTime));

    // ����� ������� �����
    printf("\n\t\t\t����� �������� ���������� �� ������� �����\n");
    for(i = 0; i < company.countNumberWorkshops; i++){
        for (j = 0; j < company.numberWorkshops[i].countNumberWorker; j++) {
        printf("\n=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=++=+=+=+=+=+=+=+=+=+=+\n");
        printf("�������� ����: %s\n", company.numberWorkshops[i].nameWorkshop);
        printf("��� ��������: %s\n", company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
        printf("����� ������������� � ���� ����: %.3f ���.\n", arrayFond[j]);
        }
    }

    // ����
    do{
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("\t\t��������� ��������:\n"
               "%d - ����� ���� ������� �� �����\n"
               "%d - ���������� ������\n"
               "%d - �������� ������� �� ������������ ����\n"
               "%d - �������� �����-�����\n"
               "%d - ������������ ���� ������ �� �����-�����\n"
               "%d - ������������� ����(��������� ���-�� ����������)\n"
               "%d - ����� �� ���������\n",
               MENU_SHOW_ALL, MENU_ADD, MENU_DELETE, MENU_CREATE_BACKUP_FILE, MENU_RESTORE_BACKUP_FILE, MENU_CORRECT_NUMBER_WORKER, MENU_EXIT);
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("�������� ��������: ");
        scanf("%d", &action);
        clearStdin();

        // ������ ������������
        switch(action){
            case MENU_SHOW_ALL:
                system("cls");
                printDataBase(company.countNumberWorkshops, company);
                break;
            case MENU_ADD:
                system("cls");
                company.countNumberWorkshops = addNewRecord(company.countNumberWorkshops, company);
                break;
            case MENU_DELETE:
                system("cls");
                company.countNumberWorkshops = deleteRecords(company.countNumberWorkshops, company);
                break;
            case MENU_CREATE_BACKUP_FILE:
                system("cls");
                countRestore = createBackupFile(company.countNumberWorkshops, company);
                break;
            case MENU_RESTORE_BACKUP_FILE:
                system("cls");
                company.countNumberWorkshops = restoreBackupFile(countRestore, company.countNumberWorkshops);
                break;
            case MENU_CORRECT_NUMBER_WORKER:
                system("cls");
                company = correctCountWorker(company.countNumberWorkshops, company);
                break;
            case MENU_EXIT:
                fprintf(fileLogs, "\n\n%s: ���������� ���������\n\n", ctime(&realTime));
                system("cls");
                programEnd();
            default:
                break;
        }
    } while(action != MENU_EXIT);

    fclose(fileLogs);
    return 0;
}
