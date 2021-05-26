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

    // Запись и инициализация переменных;
    int i, j, action, countRestore = 0;
    float arrayFond[5];
    FILE *fileDataBase;
    FILE *fileLogs;

    company = defaultRecordArray(company);
    fileLogs = fopen("logs.txt", "a+t");

    titlePage();
    system("pause");
    system("cls");

    // Записываем данные в файл
    fileDataBase = fopen("dataBase.bin", "wb");
            fwrite(&company, sizeof(company), 1, fileDataBase);
    fclose(fileDataBase);

    fprintf(fileLogs, "\n\n%s: Запись базы данных в файл\n\n", ctime(&realTime));

    // Считываем информацию из файла
    fileDataBase = fopen("dataBase.bin", "rb");
        fread(&company, sizeof(companyStructure), 1, fileDataBase);
    fclose(fileDataBase);
    fprintf(fileLogs, "\n\n%s: Чтение базы данных по умолчанию из файла\n\n", ctime(&realTime));

    // Вывод фио, отчисления в фонд
    printf("\n\n\t\t\tВывод отчислений в фонд\n");
    for(i = 0; i < company.countNumberWorkshops; i++){
        for (j = 0; j < company.numberWorkshops[i].countNumberWorker; j++) {
        printf("\n=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=++=+=+=+=+=+=+=+=+=+=+\n");
        printf("Название цеха: %s\n", company.numberWorkshops[i].nameWorkshop);
        printf("ФИО Рабочего: %s\n", company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
        printf("Сумма перечисленная в фонд мира: %.3f грн.\n", (company.numberWorkshops[i].numberWorker[j].money[0]) / (company.numberWorkshops[i].numberWorker[j].numberOfWorkDay[0]));
        arrayFond[j] = (company.numberWorkshops[i].numberWorker[j].money[0]) / (company.numberWorkshops[i].numberWorker[j].numberOfWorkDay[0]);
        }
    }
    fprintf(fileLogs, "\n\n%s: Вывод отчислений в фонд\n\n", ctime(&realTime));

    // Записываем фио, фондовые отчисления во второй файл
    fileDataBase = fopen("twoDataBase.bin", "wb");
    for(i = 0; i < company.countNumberWorkshops; i++){
        for(j = 0; j < company.numberWorkshops[i].countNumberWorker; j++){
            fwrite(&company.numberWorkshops[i].nameWorkshop, sizeof(char), 1, fileDataBase);
            fwrite(&arrayFond[j], sizeof(float), 1, fileDataBase);
        }
    }
    fclose(fileDataBase);
    fprintf(fileLogs, "\n\n%s: Запись данных о фондовых отчислениях в файл\n\n", ctime(&realTime));

    // Считываем второй файл
    fileDataBase = fopen("twoDataBase.bin", "rb");
    for(i = 0; i < company.countNumberWorkshops; i++){
        for(j = 0; j < company.numberWorkshops[i].countNumberWorker; j++){
            fread(&company.numberWorkshops[i].nameWorkshop, sizeof(char), 1, fileDataBase);
            fread(&arrayFond[j], sizeof(float), 1, fileDataBase);
        }
    }
    fclose(fileDataBase);
    fprintf(fileLogs, "\n\n%s: Чтение данных о фондовых отчислениях из файла\n\n", ctime(&realTime));

    // Вывод второго файла
    printf("\n\t\t\tВывод считаной информации из второго файла\n");
    for(i = 0; i < company.countNumberWorkshops; i++){
        for (j = 0; j < company.numberWorkshops[i].countNumberWorker; j++) {
        printf("\n=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=++=+=+=+=+=+=+=+=+=+=+\n");
        printf("Название цеха: %s\n", company.numberWorkshops[i].nameWorkshop);
        printf("ФИО Рабочего: %s\n", company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
        printf("Сумма перечисленная в фонд мира: %.3f грн.\n", arrayFond[j]);
        }
    }

    // Меню
    do{
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("\t\tДоступные действия:\n"
               "%d - вывод всех записей на экран\n"
               "%d - добавление записи\n"
               "%d - удаление записей по наименованию цеха\n"
               "%d - создание бэкап-файла\n"
               "%d - восстановить базу данных из бэкап-файла\n"
               "%d - корректировка цеха(изменение кол-ва работников)\n"
               "%d - выход из программы\n",
               MENU_SHOW_ALL, MENU_ADD, MENU_DELETE, MENU_CREATE_BACKUP_FILE, MENU_RESTORE_BACKUP_FILE, MENU_CORRECT_NUMBER_WORKER, MENU_EXIT);
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Выберите действие: ");
        scanf("%d", &action);
        clearStdin();

        // Запуск подпрограммы
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
                fprintf(fileLogs, "\n\n%s: Завершение программы\n\n", ctime(&realTime));
                system("cls");
                programEnd();
            default:
                break;
        }
    } while(action != MENU_EXIT);

    fclose(fileLogs);
    return 0;
}
