//
//  allFunction.h
//  courseWork
//
//  (C) Created by Mikeost corp.
//

#ifndef allFunction_h
#define allFunction_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <locale.h>

// ����������� ��������� �����������
#define NUMBER_MAX_WORKSHOPS 10                  // ������������ ���-�� �����
#define NUMBER_WORKSHOPS 4                         // ������ ������� ��� ���-�� �����

// ����������� ��������� ����
#define NAME_WORKSHOP_LEN 50                       // ������ ������� ��� ������������ ����
#define NUMBER_WORKER 50                            // ������ ������� ��� ���-�� ����������

// ����������� ��������� ���������
#define NUMBER_MONTH 12                            // ������ ������� ��� ���-�� �������
#define SURNAME_NAME_PATRONOMYC_WORKER_LEN 100     // ������ ������� ��� ��� ���������

// �������� ����
#define MENU_SHOW_ALL 1                                 // ���������� ������
#define MENU_ADD 2                              // �������� ������
#define MENU_DELETE 3                            // ����� ���� �������
#define MENU_CREATE_BACKUP_FILE 4                  // �������� ���������� �����
#define MENU_RESTORE_BACKUP_FILE 5                 // �������������� ���� ������ �� ���������� �����
#define MENU_CORRECT_NUMBER_WORKER 6               // ������������� ���-�� ����������
#define MENU_EXIT 0                                // ����� �� ���������

// ��������� "��������"
typedef struct{
    char surnameNamePatronymic[SURNAME_NAME_PATRONOMYC_WORKER_LEN];
    int numberOfWorkDay[NUMBER_MONTH];
    float money[NUMBER_MONTH];
} workerStructure;

// ��������� "���"
typedef struct{
    char nameWorkshop[NAME_WORKSHOP_LEN];
    workerStructure numberWorker[NUMBER_WORKER];
    int countNumberWorker;
} workshopStructure;

// ��������� "�����������"
typedef struct{
    workshopStructure numberWorkshops[NUMBER_MAX_WORKSHOPS];
    int countNumberWorkshops;
} companyStructure;

companyStructure company;

//int countNewRecordWorkshops = 4;

// ��������� ��������
void titlePage(void);

// ���������� ���������
void programEnd(void);

// ������� ������
void clearStdin(void);

// ������� ������
void clearScreen(void);

// ���������� ����� ������
int addNewRecord(int countNewRecordWorkshops, companyStructure company);

// ����� ���� ���� ������
void printDataBase(int countNewRecordWorkshops, companyStructure company);

// �������� ������ �� ������������
int deleteRecords(int countNewRecordWorkshops, companyStructure company);

// �������� �����-�����
int createBackupFile(int countNewRecordWorkshops, companyStructure company);

// ������������� ������ �� �����-�����
int restoreBackupFile(int countRestore, int newRecordWorkshops);

// ������������� ���-�� ���������� �� ������������ ����
companyStructure correctCountWorker(int countNewRecordWorkshops, companyStructure company);

FILE *fileDataBase;
FILE *fileLogs;


void titlePage(){
    printf(" *=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t\t̲Ͳ�������� ��²�� � ����� �������\t\t\t*\n");
        printf("*\t\t\t��� ����ʲ������ ������� ������ ����\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*");
        printf("*\t����� ���-19\t\t\t\t���ֲ���Ͳ��� 121 ��������� \t*\n");
        printf("*\t\t\t\t\t\t����������� �������������\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t\t\t\t�²�\t\t\t\t\t*\n");
        printf("*\t\t\t\t  � ������ί ������\t\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t     ������� ������������� �� ���������� ����\t\t*\n");
        printf("*\t\t����: ��������� ����������� ������������ ��� ���������\t\t*\n");
        printf("*\t\t\t� ������� ����� �� ������������ ����\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t������� �������: ��������� �. �.\t\t________________\t*\n");
        printf("*\t\t\t\t\t\t\t    (�����)\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*");
        printf("*\t������� ��������: ����� �. �.\t\t\t________________\t*\n");
        printf("*\t\t\t\t\t\t\t    (�����)\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t    _________________________________________________________\t\t*\n");
        printf("*\t   |\t���� �������\t|     ������\t|  ϳ���� ���������  |\t\t*\n");
        printf("*\t   |____________________|_______________|____________________|\t\t*\n");
        printf("*\t   |\t\t\t|\t\t|\t\t     |\t\t*");
        printf("*\t   |____________________|_______________|____________________|\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t\t\t  �. ��������\t\t\t\t\t*\n");
        printf("*\t\t\t\t     2021 �.\t\t\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf(" *=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
}

void programEnd(){
    printf("   ______                __   __               __\n");
    printf("  / ____/___  ____  ____/ /  / /_  __  _____  / /\n");
    printf(" / / __/ __ \\/ __ \\/ __  /  / __ \\/ / / / _ \\/ /\n");
    printf("/ /_/ / /_/ / /_/ / /_/ /  / /_/ / /_/ /  __/_/\n");
    printf("\\____/\\____/\\____/\\__,_/  /_.___/\\__, /\\___(_)\n");
    printf("                                /____/           \n");
    printf("� Mikeost corp. 2021\n");
}

void clearStdin() {
    int symb;
    while ((symb = getchar()) != '\n' && symb != EOF) { }
}

void clearScreen(){
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

int addNewRecord(int countNewRecordWorkshops, companyStructure company){
    int i, j, k;

    time_t realTime = time(NULL);
    FILE *fileLogs;
    fileLogs = fopen("logs.txt", "a+t");

    fprintf(fileLogs, "\n\n%s: ����� ������� ���������� ������ ����\n\n", ctime(&realTime));

    int action, action2;

    // ������ �����
    fileDataBase = fopen("dataBase.bin", "rb");
        fread(&company, sizeof(companyStructure), 1, fileDataBase);
    fclose(fileDataBase);

    printf("���������� �/�: \n");
    printf("1 - ������ ����������\n");
    printf("2 - �������������� ����������\n");
    printf("0 - ������ ���������� ������\n");
    scanf("%d", &action);
    clearStdin(); system("cls");

    if(action == 0){
        return countNewRecordWorkshops;
    }

    while(action != 1 && action != 2 && action != 0){
        printf("�������� ����\n");
        printf("1 - ������ ����������\n");
        printf("2 - �������������� ����������\n");
        printf("0 - ������ ���������� ������\n");
        scanf("%d", &action);
        clearStdin(); system("cls");
    }

    if(action == 0){
        return countNewRecordWorkshops;
    }

    printf("���������� ���-�� ������� ����: \n");
    printf("1 - ������ ����������\n");
    printf("2 - �������������� ����������\n");
    printf("0 - ������ ���������� ������\n");
    scanf("%d", &action2);
    clearStdin(); system("cls");

    if(action2 == 0){
        return countNewRecordWorkshops;
    }

    while(action2 != 1 && action2 != 2 && action2 != 0){
        printf("�������� ����\n");
        printf("1 - ������ ����������\n");
        printf("2 - �������������� ����������\n");
        printf("0 - ������ ���������� ������\n");
        scanf("%d", &action2);
        clearStdin(); system("cls");
    }

    if(action2 == 0){
        return countNewRecordWorkshops;
    }

    if(action == 1 && action2 == 1){
    // ���������� ����� ������
     printf("\n���� ����� ������:\n");
     for(i = countNewRecordWorkshops; i < countNewRecordWorkshops + 1; i++){
         printf("������� �������� ����: ");
            gets(company.numberWorkshops[i].nameWorkshop);
            while(strlen(company.numberWorkshops[i].nameWorkshop) < 1){
                printf("\n������� ������ ������!!! ������� �������� ����: ");
                gets(company.numberWorkshops[i].nameWorkshop);
            }
            fprintf(fileLogs, "\n\n%s: ������ ������ �������� %d-�� ����\n\n", ctime(&realTime), i+1);
         for(j = 0; j < 5; j++){
             printf("������� ��� ��������: ");
                gets(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
                while(strlen(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic) < 1){
                    printf("\n������� ������ ������!!! ������� ��� ���������: ");
                    gets(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
                }
                fprintf(fileLogs, "\n\n%s: ������ ������ ��� %d-�� ���������\n\n", ctime(&realTime), j+1);
             for(k = 0; k < NUMBER_MONTH; k++){
                 printf("������� ���-�� ������� ���� %d-�� ������: ", k+1); scanf("%d", &company.numberWorkshops[i].numberWorker[j].numberOfWorkDay[k]);
                 clearStdin();
                 fprintf(fileLogs, "\n\n%s: ������ ���������� ������� ���� %d-�� ���������\n\n", ctime(&realTime), j+1);
                 printf("������� �/� %d-�� ������: ", k+1); scanf("%f", &company.numberWorkshops[i].numberWorker[j].money[k]);
                 clearStdin();
                 fprintf(fileLogs, "\n\n%s: ������ �/� %d-�� ���������\n\n", ctime(&realTime), j+1);
             }
         }
     }
    }

    if(action == 1 && action2 == 2){
    // ���������� ����� ������
     printf("\n���� ����� ������:\n");
     for(i = countNewRecordWorkshops; i < countNewRecordWorkshops + 1; i++){
         printf("������� �������� ����: ");
            gets(company.numberWorkshops[i].nameWorkshop);
            while(strlen(company.numberWorkshops[i].nameWorkshop) < 1){
                printf("\n������� ������ ������!!! ������� �������� ����: ");
                gets(company.numberWorkshops[i].nameWorkshop);
            }
            fprintf(fileLogs, "\n\n%s: ������ ������ �������� %d-�� ����\n\n", ctime(&realTime), i+1);
         for(j = 0; j < 5; j++){
             printf("������� ��� ��������: ");
                gets(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
                while(strlen(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic) < 1){
                    printf("\n������� ������ ������!!! ������� ��� ���������: ");
                    gets(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
                }
                fprintf(fileLogs, "\n\n%s: ������ ������ ��� %d-�� ���������\n\n", ctime(&realTime), j+1);
             for(k = 0; k < NUMBER_MONTH; k++){
                 printf("���-�� ������� ���� %d-�� ������: ", k+1); company.numberWorkshops[i].numberWorker[j].numberOfWorkDay[k] = rand()%(28-1+1)+1;
                 printf("%d\n", company.numberWorkshops[i].numberWorker[j].numberOfWorkDay[k]);
                 fprintf(fileLogs, "\n\n%s: ������ ���������� ������� ���� %d-�� ���������\n\n", ctime(&realTime), j+1);
                 printf("������� �/� %d-�� ������: ", k+1); scanf("%f", &company.numberWorkshops[i].numberWorker[j].money[k]);
                 clearStdin();
                 fprintf(fileLogs, "\n\n%s: ������ �/� %d-�� ���������\n\n", ctime(&realTime), j+1);
             }
         }
     }
    }

    if(action == 2 && action2 == 1){
    // ���������� ����� ������
     printf("\n���� ����� ������:\n");
     for(i = countNewRecordWorkshops; i < countNewRecordWorkshops + 1; i++){
         printf("������� �������� ����: ");
            gets(company.numberWorkshops[i].nameWorkshop);
            while(strlen(company.numberWorkshops[i].nameWorkshop) < 1){
                printf("\n������� ������ ������!!! ������� �������� ����: ");
                gets(company.numberWorkshops[i].nameWorkshop);
            }
            fprintf(fileLogs, "\n\n%s: ������ ������ �������� %d-�� ����\n\n", ctime(&realTime), i+1);
         for(j = 0; j < 5; j++){
             printf("������� ��� ��������: ");
                gets(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
                while(strlen(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic) < 1){
                    printf("\n������� ������ ������!!! ������� ��� ���������: ");
                    gets(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
                }
                fprintf(fileLogs, "\n\n%s: ������ ������ ��� %d-�� ���������\n\n", ctime(&realTime), j+1);
             for(k = 0; k < NUMBER_MONTH; k++){
                 printf("������� ���-�� ������� ���� %d-�� ������: ", k+1); scanf("%d", &company.numberWorkshops[i].numberWorker[j].numberOfWorkDay[k]);
                 clearStdin();
                 fprintf(fileLogs, "\n\n%s: ������ ���������� ������� ���� %d-�� ���������\n\n", ctime(&realTime), j+1);
                 printf("�/� %d-�� ������: ", k+1); company.numberWorkshops[i].numberWorker[j].money[k] = rand()%(20-10+1)+10;
                 printf("%.3f\n", company.numberWorkshops[i].numberWorker[j].money[k]);
                 fprintf(fileLogs, "\n\n%s: ������ �/� %d-�� ���������\n\n", ctime(&realTime), j+1);
             }
         }
     }
    }

    if(action == 2 && action2 == 2){
        // ���������� ����� ������
        printf("\n���� ����� ������:\n");
         for(i = countNewRecordWorkshops; i < countNewRecordWorkshops + 1; i++){
             printf("������� �������� ����: ");
                gets(company.numberWorkshops[i].nameWorkshop);
                while(strlen(company.numberWorkshops[i].nameWorkshop) < 1){
                    printf("\n������� ������ ������!!! ������� �������� ����: ");
                    gets(company.numberWorkshops[i].nameWorkshop);
                }
                fprintf(fileLogs, "\n\n%s: ������ ������ �������� %d-�� ����\n\n", ctime(&realTime), i+1);
             for(j = 0; j < 5; j++){
                 printf("������� ��� ��������: ");
                    gets(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
                    while(strlen(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic) < 1){
                        printf("\n������� ������ ������!!! ������� ��� ���������: ");
                        gets(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
                    }
                    fprintf(fileLogs, "\n\n%s: ������ ������ ��� %d-�� ���������\n\n", ctime(&realTime), j+1);
                 for(k = 0; k < NUMBER_MONTH; k++){
                     printf("���-�� ������� ���� %d-�� ������: ", k+1); company.numberWorkshops[i].numberWorker[j].numberOfWorkDay[k] = rand()%(28-1+1)+1;
                     printf("%d\n", company.numberWorkshops[i].numberWorker[j].numberOfWorkDay[k]);
                     fprintf(fileLogs, "\n\n%s: ������ ���������� ������� ���� %d-�� ���������\n\n", ctime(&realTime), j+1);
                     printf("�/� %d-�� ������: ", k+1); company.numberWorkshops[i].numberWorker[j].money[k] = rand()%(20-10+1)+10;
                     printf("%.3f\n", company.numberWorkshops[i].numberWorker[j].money[k]);
                     fprintf(fileLogs, "\n\n%s: ������ �/� %d-�� ���������\n\n", ctime(&realTime), j+1);
                 }
             }
         }
    }

    company.numberWorkshops[countNewRecordWorkshops].countNumberWorker = 5;

    fileDataBase = fopen("dataBase.bin", "wb");
    fwrite(&company, sizeof(company), 1, fileDataBase);
    fclose(fileDataBase);
    fprintf(fileLogs, "\n\n%s: ������ ������ ���� � ����\n\n", ctime(&realTime));

    countNewRecordWorkshops++;
    fclose(fileLogs);
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("\t����� ������ ������� �������!\t");
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    return countNewRecordWorkshops;
}

void printDataBase(int countNewRecordWorkshops, companyStructure company){
    int i, j, k, countRecord = 1, countMonth = 0;
    const char *arrayMonth[12] = {"������", "�������", "����", "������", "���", "����", "����", "������", "��������", "�������", "������", "�������"};

    time_t realTime = time(NULL);
    FILE *fileLogs;
    fileLogs = fopen("logs.txt", "a+t");
    fprintf(fileLogs, "\n\n%s: ����� ������� ������ ���� ������\n\n", ctime(&realTime));


    // ������ �����
    fileDataBase = fopen("dataBase.bin", "rb");
        fread(&company, sizeof(companyStructure), 1, fileDataBase);
    fclose(fileDataBase);
    fprintf(fileLogs, "\n\n%s: ������ ���� ������ �� �����\n\n", ctime(&realTime));

    // ����� ���� ������
    printf("\n\t\t���� ������\n");
    for(i = 0; i < countNewRecordWorkshops; i++){
        for(j = 0; j < company.numberWorkshops[i].countNumberWorker; j++){
            for(k = 0; k < NUMBER_MONTH; k++){
            printf("\n=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=++=+=+=+=+=+=+=+=+=+=+\n");
            printf("������ %d\n", countRecord);
                printf("�������� ����: %s\n", company.numberWorkshops[i].nameWorkshop);
                printf("��� ��������: %s\n", company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
                printf("�����: %s\n", arrayMonth[countMonth]);
                printf("���-�� ������� ����: %d\n", company.numberWorkshops[i].numberWorker[j].numberOfWorkDay[k]);
                printf("�/�: %.3f ���.\n", company.numberWorkshops[i].numberWorker[j].money[k]);
            countMonth++;
            countRecord++;
            }
            countMonth = 0;
        }
    }
    fprintf(fileLogs, "\n\n%s: ����� ���� ������ �� �����\n\n", ctime(&realTime));
    fclose(fileLogs);
}

int deleteRecords(int countNewRecordWorkshops, companyStructure company){
    char searchNameWorkshop[NAME_WORKSHOP_LEN];

    bool isNameFalse = true;

    time_t realTime = time(NULL);
    FILE *fileLogs;
    fileLogs = fopen("logs.txt", "a+t");
    fprintf(fileLogs, "\n\n%s: ����� ������� �������� ����\n\n", ctime(&realTime));

    // ������ �����
    fileDataBase = fopen("dataBase.bin", "rb");
        fread(&company, sizeof(company), 1, fileDataBase);
    fclose(fileDataBase);

    if(countNewRecordWorkshops > 0){
    // ����� �� ����� ������ ������������ �����
    printf("\n������������ ����:\n");
    for(int i = 0; i < countNewRecordWorkshops; i++){
        printf("��� %d: %s\n", i+1, company.numberWorkshops[i].nameWorkshop);
    }

    // ���� ������������ ����, ��������� ����� �������
    printf("\n������� �������� ���������� ����: "); gets(searchNameWorkshop);
        while(strlen(searchNameWorkshop) < 1){
            printf("\n������� ������ ������!!! ������� �������� ���������� ����: "); gets(searchNameWorkshop);
        }
    fprintf(fileLogs, "\n\n%s: ���� �������� ���������� ����\n\n", ctime(&realTime));
    // ����� � �������� ��������� �� ������������ ����
    for(int i = 0; i < countNewRecordWorkshops; i++){
        if(strcmp(searchNameWorkshop, company.numberWorkshops[i].nameWorkshop) != 0){
            }
            else{
                isNameFalse = false;
                for(int j = i; j < countNewRecordWorkshops; j++){
                    company.numberWorkshops[j] = company.numberWorkshops[j+1];
                    }
                countNewRecordWorkshops -= 1;
                fprintf(fileLogs, "\n\n%s: �������� ��������� ����\n\n", ctime(&realTime));
                system("cls");
                printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
                printf("\t\t������ ������� �������!\t");
                printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
            }
        }

        if(isNameFalse){
            system("cls");
            printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
            printf("\t\t������� ���� �� ����������\t");
            printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        }

    // ������ ���������� ���� ������ � ����
    fileDataBase = fopen("dataBase.bin", "wb");
    for(int i = 0; i < countNewRecordWorkshops; i++){
        fwrite(&company.numberWorkshops[i], sizeof(company.numberWorkshops[i]), 1, fileDataBase);
    }
    fclose(fileDataBase);
    fprintf(fileLogs, "\n\n%s: ������ ���� ������ � ��������� ����� � ����\n\n", ctime(&realTime));
    }
    else{
        system("cls");
        printf("\n--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("\t\t\t������� ���!\t");
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    }
    fclose(fileLogs);
    return countNewRecordWorkshops;
}

int createBackupFile(int countNewRecordWorkshops, companyStructure company){
    FILE *backupFile;

    time_t realTime = time(NULL);
    FILE *fileLogs;
    fileLogs = fopen("logs.txt", "a+t");
    fprintf(fileLogs, "\n\n%s: ����� ������� ������ ���������� �����\n\n", ctime(&realTime));

    // ������ ���� ������
    fileDataBase = fopen("dataBase.bin", "rb");
        fread(&company, sizeof(companyStructure), 1, fileDataBase);
    fclose(fileDataBase);
    fprintf(fileLogs, "\n\n%s: ������ ���� ������ ��� ������ � ��������� ����\n\n", ctime(&realTime));

    // ������ ���� ������ � �����-����
    backupFile = fopen("backup.bin", "wb");
        fwrite(&company, sizeof(companyStructure), 1, backupFile);
    fclose(backupFile);
    fprintf(fileLogs, "\n\n%s: ������ ���� ������ � ��������� ����\n\n", ctime(&realTime));
    fclose(fileLogs);
    system("cls");
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("\t�������� ���������� ����� ������ �������!\t");
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    return countNewRecordWorkshops;
}

int restoreBackupFile(int countRestore, int countNewRecordWorkshops){
    FILE *backupFile;
    time_t realTime = time(NULL);
    char action[5];
    FILE *fileLogs;
    fileLogs = fopen("logs.txt", "a+t");
    fprintf(fileLogs, "\n\n%s: ����� ������� �������������� ������ �� ���������� �����\n\n", ctime(&realTime));

    printf("�� ������������� ������ ������������ ������ �� ���������� �����? (���������� ������ ����� ������!!!)\n");
    printf("�� +, ��� - : "); gets(action);
    while(strcmp(action, "+") != 0 && strcmp(action, "-") != 0){
        printf("������� + ��� - :"); gets(action);
    }

    // �������������� ���� ������
    if(strcmp(action, "+") == 0){
        backupFile = fopen("backup.bin", "rb");
        fread(&company, sizeof(company), 1, fileDataBase);
        fclose(backupFile);
    fprintf(fileLogs, "\n\n%s: ������ ���� ������ ��� �������������� �� ���������� �����\n\n", ctime(&realTime));

    fileDataBase = fopen("dataBase.bin", "wb");
        fread(&company, sizeof(company), 1, fileDataBase);
    fclose(fileDataBase);
    fprintf(fileLogs, "\n\n%s: ������ ��������������� ������ �� ���������� �����\n\n", ctime(&realTime));
    return countRestore;
    }
    else{
        system("cls");
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("\t������ �������������� ���� ������\t");
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        fprintf(fileLogs, "\n\n%s: ������ ��������������\n\n", ctime(&realTime));
        return countNewRecordWorkshops;
    }
    system("cls");
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("\t�������������� ������ ������ �������!\t");
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    fclose(fileLogs);
}

companyStructure correctCountWorker(int countNewRecordWorkshops, companyStructure company){
    time_t realTime = time(NULL);
    FILE *fileLogs;
    fileLogs = fopen("logs.txt", "a+t");
    fprintf(fileLogs, "\n\n%s: ����� ������� ������������� �� �������� ����\n\n", ctime(&realTime));
    int action; int countDelete = 0;
    bool isNameFalse = true;

    fileDataBase = fopen("dataBase.bin", "rb");
    for(int i = 0; i < countNewRecordWorkshops; i++){
        fread(&company.numberWorkshops[i], sizeof(company.numberWorkshops[i]), 1, fileDataBase);
    }
    fclose(fileDataBase);

    for(int i = 0; i < countNewRecordWorkshops; i++){
        printf("��� %d: %s\n", i+1, company.numberWorkshops[i].nameWorkshop);
    }

    char searchNameWorkshop[NAME_WORKSHOP_LEN];
    int indexEdit = 0;
    printf("\n������� �������� ����:\n"); gets(searchNameWorkshop);
    while(strlen(searchNameWorkshop) < 1){
        printf("\n������� ������ ������!!! ������� �������� ����:\n"); gets(searchNameWorkshop);
    }
    fprintf(fileLogs, "\n\n%s: ���� �������� ���� ��� �������������\n\n", ctime(&realTime));
    for(int i = 0; i < countNewRecordWorkshops; i++){
        if(strcmp(searchNameWorkshop, company.numberWorkshops[i].nameWorkshop) == 0){
            isNameFalse = false;
            printf("���: %s\n", searchNameWorkshop);
            printf("���-�� ���������� � ����: %d\n", company.numberWorkshops[i].countNumberWorker);
            indexEdit = i;
            printf("1 - �������� ���������\n");
                printf("2 - ���������� ���������\n");
                printf("0 - ������ ������������� ���-�� ���������\n\n");
                scanf("%d", &action); clearStdin();
            while(action != 1 && action != 2 && action != 0){
                printf("1 - �������� ���������\n");
                printf("2 - ���������� ���������\n");
                printf("0 - ������ ������������� ���-�� ���������\n\n");
                scanf("%d", &action);
                clearStdin(); system("cls");
            }
            }
        }

    if(action == 0){
       /* fileDataBase = fopen("dataBase.bin", "wb");
                fwrite(&company, sizeof(company), 1, fileDataBase);
        fclose(fileDataBase); */
     return company;
    }

    if(isNameFalse == true){
        system("cls");
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("\t\t������� ���� �� ����������\t");
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        fprintf(fileLogs, "\n\n%s: ���� �������� ��������������� ����\n\n", ctime(&realTime));
       /*  fileDataBase = fopen("dataBase.bin", "wb");
                fwrite(&company, sizeof(company), 1, fileDataBase);
        fclose(fileDataBase); */
        return company;
    }


    if(action == 1){
            for(int j = 0; j < company.numberWorkshops[indexEdit].countNumberWorker; j++){
                printf("�������� %d: %s\n", j+1, company.numberWorkshops[indexEdit].numberWorker[j].surnameNamePatronymic);
            }

        printf("������� ����� ���������, �������� ������ �������: "); scanf("%d", &countDelete);
        while((countDelete > company.numberWorkshops[indexEdit].countNumberWorker) && (countDelete < 1)){
            printf("������� ����� ���������, �������� ������ �������: "); scanf("%d", &countDelete);
            clearStdin();
        }

        fprintf(fileLogs, "\n\n%s: ���� ������ ���������� ���������\n\n", ctime(&realTime));

        for(int i = 0; i < countNewRecordWorkshops; i++){
               if(i == indexEdit){
               for(int j = 0; j < company.numberWorkshops[indexEdit].countNumberWorker; j++){
                   if(j == (countDelete-1)){
                       for(int k = j; k < company.numberWorkshops[i].countNumberWorker; k++){
                           company.numberWorkshops[i].numberWorker[k] = company.numberWorkshops[i].numberWorker[k+1];
                       }
                       company.numberWorkshops[i].countNumberWorker--;
                   }
               }
               }
        }
        fileDataBase = fopen("dataBase.bin", "wb");
                fwrite(&company, sizeof(company), 1, fileDataBase);
        fclose(fileDataBase);

}
    if(action == 2){
         // ���������� ����� ������
         printf("\n���� ����� ������:\n");
        fprintf(fileLogs, "\n\n%s: ���� ����� ������\n\n", ctime(&realTime));
         for(int i = indexEdit; i < indexEdit + 1; i++){
             for(int j = company.numberWorkshops[indexEdit].countNumberWorker; j < company.numberWorkshops[indexEdit].countNumberWorker + 1; j++){
                 printf("������� ��� ��������: ");
                    gets(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
                 while (strlen(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic) < 1) {
                     printf("������� ������ ������!!! ������� ��� ��������: ");
                        gets(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
                 }
                    fprintf(fileLogs, "\n\n%s: ������ ������ ��� %d-�� ���������\n\n", ctime(&realTime), j+1);
                 for(int k = 0; k < NUMBER_MONTH; k++){
                     printf("���-�� ������� ���� %d-�� ������: ", k+1); company.numberWorkshops[i].numberWorker[j].numberOfWorkDay[k] = rand()%(28-1+1)+1;
                     printf("%d\n", company.numberWorkshops[i].numberWorker[j].numberOfWorkDay[k]);
                     fprintf(fileLogs, "\n\n%s: ������ ���������� ������� ���� %d-�� ���������\n\n", ctime(&realTime), j+1);
                     printf("�/� %d-�� ������: ", k+1); company.numberWorkshops[i].numberWorker[j].money[k] = rand()%(20-10+1)+10;
                     printf("%.3f\n", company.numberWorkshops[i].numberWorker[j].money[k]);
                     fprintf(fileLogs, "\n\n%s: ������ �/� %d-�� ���������\n\n", ctime(&realTime), j+1);
                 }
             }
         }
        company.numberWorkshops[indexEdit].countNumberWorker++;
    }

    fileDataBase = fopen("dataBase.bin", "wb");
                fwrite(&company, sizeof(company), 1, fileDataBase);
        fclose(fileDataBase);
    fprintf(fileLogs, "\n\n%s: ������ � ����\n\n", ctime(&realTime));
    fclose(fileLogs);

    return company;
}

#endif /* allFunction_h */
