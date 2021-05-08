#ifndef allFunction_h
#define allFunction_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <locale.h>

// Размерность структуры предприятия
#define NUMBER_MAX_WORKSHOPS 10                  // Максимальное кол-во цехов
#define NUMBER_WORKSHOPS 4                         // Размер массива для кол-ва цехов

// Размерность структуры цеха
#define NAME_WORKSHOP_LEN 50                       // Размер массива для наименования цеха
#define NUMBER_WORKER 50                            // Размер массива для кол-ва работников

// Размерность структуры работника
#define NUMBER_MONTH 12                            // Размер массива для кол-ва месяцев
#define SURNAME_NAME_PATRONOMYC_WORKER_LEN 100     // Размер массива для ФИО работника

// Действия меню
#define MENU_SHOW_ALL 1                                 // Добавление записи
#define MENU_ADD 2                              // Удаление записи
#define MENU_DELETE 3                            // Вывод всех записей
#define MENU_CREATE_BACKUP_FILE 4                  // Создание резервного файла
#define MENU_RESTORE_BACKUP_FILE 5                 // Восстановление базы данных из резервного файла
#define MENU_CORRECT_NUMBER_WORKER 6               // Корректировка кол-ва работников
#define MENU_EXIT 0                                // Выход из программы

// Структура "Работник"
typedef struct{
    char surnameNamePatronymic[SURNAME_NAME_PATRONOMYC_WORKER_LEN];
    int numberOfWorkDay[NUMBER_MONTH];
    float money[NUMBER_MONTH];
} workerStructure;

// Структура "Цех"
typedef struct{
    char nameWorkshop[NAME_WORKSHOP_LEN];
    workerStructure numberWorker[NUMBER_WORKER];
    int countNumberWorker;
} workshopStructure;

// Структура "Предприятие"
typedef struct{
    workshopStructure numberWorkshops[NUMBER_MAX_WORKSHOPS];
    int countNumberWorkshops;
} companyStructure;

companyStructure company;

//int countNewRecordWorkshops = 4;

// Титульная страница
void titlePage(void);

// Завершение программы
void programEnd(void);

// Очистка буфера
void clearStdin(void);

// Очистка экрана
void clearScreen(void);

// Добавление новой записи
int addNewRecord(int countNewRecordWorkshops, companyStructure company);

// Вывод всей базы данных
void printDataBase(int countNewRecordWorkshops, companyStructure company);

// Удаление записи по наименованию
int deleteRecords(int countNewRecordWorkshops, companyStructure company);

// Создание бэкап-файла
int createBackupFile(int countNewRecordWorkshops, companyStructure company);

// Восстаноление данных из бэкап-файла
int restoreBackupFile(int countRestore, int newRecordWorkshops);

// Корректировка кол-ва работников по наименованию цеха
companyStructure correctCountWorker(int countNewRecordWorkshops, companyStructure company);

FILE *fileDataBase;
FILE *fileLogs;


void titlePage(){
    printf(" *=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t\tМІНІСТЕРСТВО ОСВІТИ І НАУКИ УКРАЇНИ\t\t\t*\n");
        printf("*\t\t\tВСП ДРУЖКІВСЬКИЙ ФАХОВИЙ КОЛЕДЖ ДДМА\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*");
        printf("*\tГРУПА ІПЗ-19\t\t\t\tСПЕЦІАЛЬНІСТЬ 121 «Інженерія \t*\n");
        printf("*\t\t\t\t\t\tпрограмного забезпечення»\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t\t\t\tЗВІТ\t\t\t\t\t*\n");
        printf("*\t\t\t\t  З КУРСОВОЇ РОБОТИ\t\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t     «Основи програмування та алгоритмічні мови»\t\t*\n");
        printf("*\t\tТЕМА: «Розробка програмного забезпечення для створення\t\t*\n");
        printf("*\t\t\tі обробки даних по відрахуваннях цеху»\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\tВиконав студент: Остащенко М. Д.\t\t________________\t*\n");
        printf("*\t\t\t\t\t\t\t    (підпис)\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*");
        printf("*\tКерівник практики: Багач С. Г.\t\t\t________________\t*\n");
        printf("*\t\t\t\t\t\t\t    (підпис)\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t    _________________________________________________________\t\t*\n");
        printf("*\t   |\tДата захисту\t|     Оцінка\t|  Підпис викладача  |\t\t*\n");
        printf("*\t   |____________________|_______________|____________________|\t\t*\n");
        printf("*\t   |\t\t\t|\t\t|\t\t     |\t\t*");
        printf("*\t   |____________________|_______________|____________________|\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t\t\t\t\t\t\t\t\t*\n");
        printf("*\t\t\t\t  м. Дружківка\t\t\t\t\t*\n");
        printf("*\t\t\t\t     2021 р.\t\t\t\t\t*\n");
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
    printf("© Mikeost corp. 2021\n");
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
    
    fprintf(fileLogs, "\n\n%s: Вызов функции добавления нового цеха\n\n", ctime(&realTime));
    
    int action, action2;
    
    // Чтение файла
    fileDataBase = fopen("dataBase.bin", "rb");
        fread(&company, sizeof(companyStructure), 1, fileDataBase);
    fclose(fileDataBase);
    
    printf("Заполнение З/П: \n");
    printf("1 - ручное заполнение\n");
    printf("2 - автоматическое заполнение\n");
    printf("0 - отмена добавления записи\n");
    scanf("%d", &action);
    clearStdin(); clearScreen();
    
    if(action == 0){
        return countNewRecordWorkshops;
    }
    
    while(action != 1 && action != 2 && action != 0){
        printf("НЕВЕРНЫЙ ВВОД\n");
        printf("1 - ручное заполнение\n");
        printf("2 - автоматическое заполнение\n");
        printf("0 - отмена добавления записи\n");
        scanf("%d", &action);
        clearStdin(); clearScreen();
    }

    if(action == 0){
        return countNewRecordWorkshops;
    }
    
    printf("Заполнение кол-ва рабочих дней: \n");
    printf("1 - ручное заполнение\n");
    printf("2 - автоматическое заполнение\n");
    printf("0 - отмена добавления записи\n");
    scanf("%d", &action2);
    clearStdin(); clearScreen();

    if(action2 == 0){
        return countNewRecordWorkshops;
    }
    
    while(action2 != 1 && action2 != 2 && action2 != 0){
        printf("НЕВЕРНЫЙ ВВОД\n");
        printf("1 - ручное заполнение\n");
        printf("2 - автоматическое заполнение\n");
        printf("0 - отмена добавления записи\n");
        scanf("%d", &action2);
        clearStdin(); clearScreen();
    }
    
    if(action2 == 0){
        return countNewRecordWorkshops;
    }
    
    if(action == 1 && action2 == 1){
    // Добавление новой записи
     printf("\nВвод новой записи:\n");
     for(i = countNewRecordWorkshops; i < countNewRecordWorkshops + 1; i++){
         printf("Введите название цеха: ");
            gets(company.numberWorkshops[i].nameWorkshop);
            while(strlen(company.numberWorkshops[i].nameWorkshop) < 1){
                printf("\nВведена пустая строка!!! Введите название цеха: ");
                gets(company.numberWorkshops[i].nameWorkshop);
            }
            fprintf(fileLogs, "\n\n%s: Запись нового названия %d-го цеха\n\n", ctime(&realTime), i+1);
         for(j = 0; j < 5; j++){
             printf("Введите ФИО рабочего: ");
                gets(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
                while(strlen(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic) < 1){
                    printf("\nВведена пустая строка!!! Введите ФИО работника: ");
                    gets(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
                }
                fprintf(fileLogs, "\n\n%s: Запись нового ФИО %d-го работника\n\n", ctime(&realTime), j+1);
             for(k = 0; k < NUMBER_MONTH; k++){
                 printf("Введите кол-во рабочих дней %d-го месяца: ", k+1); scanf("%d", &company.numberWorkshops[i].numberWorker[j].numberOfWorkDay[k]);
                 clearStdin();
                 fprintf(fileLogs, "\n\n%s: Запись количества рабочих дней %d-го работника\n\n", ctime(&realTime), j+1);
                 printf("Введите З/П %d-го месяца: ", k+1); scanf("%f", &company.numberWorkshops[i].numberWorker[j].money[k]);
                 clearStdin();
                 fprintf(fileLogs, "\n\n%s: Запись З/П %d-го работника\n\n", ctime(&realTime), j+1);
             }
         }
     }
    }
    
    if(action == 1 && action2 == 2){
    // Добавление новой записи
     printf("\nВвод новой записи:\n");
     for(i = countNewRecordWorkshops; i < countNewRecordWorkshops + 1; i++){
         printf("Введите название цеха: ");
            gets(company.numberWorkshops[i].nameWorkshop);
            while(strlen(company.numberWorkshops[i].nameWorkshop) < 1){
                printf("\nВведена пустая строка!!! Введите название цеха: ");
                gets(company.numberWorkshops[i].nameWorkshop);
            }
            fprintf(fileLogs, "\n\n%s: Запись нового названия %d-го цеха\n\n", ctime(&realTime), i+1);
         for(j = 0; j < 5; j++){
             printf("Введите ФИО рабочего: ");
                gets(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
                while(strlen(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic) < 1){
                    printf("\nВведена пустая строка!!! Введите ФИО работника: ");
                    gets(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
                }
                fprintf(fileLogs, "\n\n%s: Запись нового ФИО %d-го работника\n\n", ctime(&realTime), j+1);
             for(k = 0; k < NUMBER_MONTH; k++){
                 printf("Кол-во рабочих дней %d-го месяца: ", k+1); company.numberWorkshops[i].numberWorker[j].numberOfWorkDay[k] = rand()%(28-1+1)+1;
                 printf("%d\n", company.numberWorkshops[i].numberWorker[j].numberOfWorkDay[k]);
                 fprintf(fileLogs, "\n\n%s: Запись количества рабочих дней %d-го работника\n\n", ctime(&realTime), j+1);
                 printf("Введите З/П %d-го месяца: ", k+1); scanf("%f", &company.numberWorkshops[i].numberWorker[j].money[k]);
                 clearStdin();
                 fprintf(fileLogs, "\n\n%s: Запись З/П %d-го работника\n\n", ctime(&realTime), j+1);
             }
         }
     }
    }
    
    if(action == 2 && action2 == 1){
    // Добавление новой записи
     printf("\nВвод новой записи:\n");
     for(i = countNewRecordWorkshops; i < countNewRecordWorkshops + 1; i++){
         printf("Введите название цеха: ");
            gets(company.numberWorkshops[i].nameWorkshop);
            while(strlen(company.numberWorkshops[i].nameWorkshop) < 1){
                printf("\nВведена пустая строка!!! Введите название цеха: ");
                gets(company.numberWorkshops[i].nameWorkshop);
            }
            fprintf(fileLogs, "\n\n%s: Запись нового названия %d-го цеха\n\n", ctime(&realTime), i+1);
         for(j = 0; j < 5; j++){
             printf("Введите ФИО рабочего: ");
                gets(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
                while(strlen(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic) < 1){
                    printf("\nВведена пустая строка!!! Введите ФИО работника: ");
                    gets(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
                }
                fprintf(fileLogs, "\n\n%s: Запись нового ФИО %d-го работника\n\n", ctime(&realTime), j+1);
             for(k = 0; k < NUMBER_MONTH; k++){
                 printf("Введите кол-во рабочих дней %d-го месяца: ", k+1); scanf("%d", &company.numberWorkshops[i].numberWorker[j].numberOfWorkDay[k]);
                 clearStdin();
                 fprintf(fileLogs, "\n\n%s: Запись количества рабочих дней %d-го работника\n\n", ctime(&realTime), j+1);
                 printf("З/П %d-го месяца: ", k+1); company.numberWorkshops[i].numberWorker[j].money[k] = rand()%(20-10+1)+10;
                 printf("%.3f\n", company.numberWorkshops[i].numberWorker[j].money[k]);
                 fprintf(fileLogs, "\n\n%s: Запись З/П %d-го работника\n\n", ctime(&realTime), j+1);
             }
         }
     }
    }
    
    if(action == 2 && action2 == 2){
        // Добавление новой записи
        printf("\nВвод новой записи:\n");
         for(i = countNewRecordWorkshops; i < countNewRecordWorkshops + 1; i++){
             printf("Введите название цеха: ");
                gets(company.numberWorkshops[i].nameWorkshop);
                while(strlen(company.numberWorkshops[i].nameWorkshop) < 1){
                    printf("\nВведена пустая строка!!! Введите название цеха: ");
                    gets(company.numberWorkshops[i].nameWorkshop);
                }
                fprintf(fileLogs, "\n\n%s: Запись нового названия %d-го цеха\n\n", ctime(&realTime), i+1);
             for(j = 0; j < 5; j++){
                 printf("Введите ФИО рабочего: ");
                    gets(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
                    while(strlen(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic) < 1){
                        printf("\nВведена пустая строка!!! Введите ФИО работника: ");
                        gets(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
                    }
                    fprintf(fileLogs, "\n\n%s: Запись нового ФИО %d-го работника\n\n", ctime(&realTime), j+1);
                 for(k = 0; k < NUMBER_MONTH; k++){
                     printf("Кол-во рабочих дней %d-го месяца: ", k+1); company.numberWorkshops[i].numberWorker[j].numberOfWorkDay[k] = rand()%(28-1+1)+1;
                     printf("%d\n", company.numberWorkshops[i].numberWorker[j].numberOfWorkDay[k]);
                     fprintf(fileLogs, "\n\n%s: Запись количества рабочих дней %d-го работника\n\n", ctime(&realTime), j+1);
                     printf("З/П %d-го месяца: ", k+1); company.numberWorkshops[i].numberWorker[j].money[k] = rand()%(20-10+1)+10;
                     printf("%.3f\n", company.numberWorkshops[i].numberWorker[j].money[k]);
                     fprintf(fileLogs, "\n\n%s: Запись З/П %d-го работника\n\n", ctime(&realTime), j+1);
                 }
             }
         }
    }
    
    company.numberWorkshops[countNewRecordWorkshops].countNumberWorker = 5;
    
    fileDataBase = fopen("dataBase.bin", "wb");
    fwrite(&company, sizeof(company), 1, fileDataBase);
    fclose(fileDataBase);
    fprintf(fileLogs, "\n\n%s: Запись нового цеха в файл\n\n", ctime(&realTime));
    
    countNewRecordWorkshops++;
    fclose(fileLogs);
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("\tНОВАЯ ЗАПИСЬ УСПЕШНО СОЗДАНА!\t");
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    return countNewRecordWorkshops;
}

void printDataBase(int countNewRecordWorkshops, companyStructure company){
    int i, j, k, countRecord = 1, countMonth = 0;
    const char *arrayMonth[12] = {"январь", "февраль", "март", "апрель", "май", "июнь", "июль", "август", "сентябрь", "октябрь", "ноябрь", "декабрь"};
    
    time_t realTime = time(NULL);
    FILE *fileLogs;
    fileLogs = fopen("logs.txt", "a+t");
    fprintf(fileLogs, "\n\n%s: Вызов функции вывода базы данных\n\n", ctime(&realTime));
    
    
    // Чтение файла
    fileDataBase = fopen("dataBase.bin", "rb");
        fread(&company, sizeof(companyStructure), 1, fileDataBase);
    fclose(fileDataBase);
    fprintf(fileLogs, "\n\n%s: Чтение базы данных из файла\n\n", ctime(&realTime));
    
    // Вывод всех данных
    printf("\n\t\tБАЗА ДАННЫХ\n");
    for(i = 0; i < countNewRecordWorkshops; i++){
        for(j = 0; j < company.numberWorkshops[i].countNumberWorker; j++){
            for(k = 0; k < NUMBER_MONTH; k++){
            printf("\n=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=++=+=+=+=+=+=+=+=+=+=+\n");
            printf("Запись %d\n", countRecord);
                printf("Название цеха: %s\n", company.numberWorkshops[i].nameWorkshop);
                printf("ФИО Рабочего: %s\n", company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
                printf("Месяц: %s\n", arrayMonth[countMonth]);
                printf("Кол-во рабочих дней: %d\n", company.numberWorkshops[i].numberWorker[j].numberOfWorkDay[k]);
                printf("З/П: %.3f грн.\n", company.numberWorkshops[i].numberWorker[j].money[k]);
            countMonth++;
            countRecord++;
            }
            countMonth = 0;
        }
    }
    fprintf(fileLogs, "\n\n%s: Вывод базы данных на экран\n\n", ctime(&realTime));
    fclose(fileLogs);
}

int deleteRecords(int countNewRecordWorkshops, companyStructure company){
    char searchNameWorkshop[NAME_WORKSHOP_LEN];
    
    bool isNameFalse = true;
    
    time_t realTime = time(NULL);
    FILE *fileLogs;
    fileLogs = fopen("logs.txt", "a+t");
    fprintf(fileLogs, "\n\n%s: Вызов функции удаления цеха\n\n", ctime(&realTime));
    
    // Чтение файла
    fileDataBase = fopen("dataBase.bin", "rb");
        fread(&company, sizeof(company), 1, fileDataBase);
    fclose(fileDataBase);
    
    if(countNewRecordWorkshops > 0){
    // Вывод на экран список существующих цехов
    printf("\nСуществующие цеха:\n");
    for(int i = 0; i < countNewRecordWorkshops; i++){
        printf("Цех %d: %s\n", i+1, company.numberWorkshops[i].nameWorkshop);
    }
    
    // Ввод наименования цеха, кототорое нужно удалить
    printf("\nВведите название удаляемого цеха: "); gets(searchNameWorkshop);
        while(strlen(searchNameWorkshop) < 1){
            printf("\nВведена пустая строка!!! Введите название удаляемого цеха: "); gets(searchNameWorkshop);
        }
    fprintf(fileLogs, "\n\n%s: Ввод названия удаляемого цеха\n\n", ctime(&realTime));
    // Поиск и удаление структуры по наименованию цеха
    for(int i = 0; i < countNewRecordWorkshops; i++){
        if(strcmp(searchNameWorkshop, company.numberWorkshops[i].nameWorkshop) != 0){
            }
            else{
                isNameFalse = false;
                for(int j = i; j < countNewRecordWorkshops; j++){
                    company.numberWorkshops[j] = company.numberWorkshops[j+1];
                    }
                countNewRecordWorkshops -= 1;
                fprintf(fileLogs, "\n\n%s: Удаление введеного цеха\n\n", ctime(&realTime));
                clearScreen();
                printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
                printf("\t\tЗАПИСЬ УСПЕШНО УДАЛЕНА!\t");
                printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
            }
        }
    
        if(isNameFalse){
            clearScreen();
            printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
            printf("\t\tДАННОГО ЦЕХА НЕ СУЩЕСТВУЕТ\t");
            printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        }
        
    // Запись измененной базы данных в файл
    fileDataBase = fopen("dataBase.bin", "wb");
    for(int i = 0; i < countNewRecordWorkshops; i++){
        fwrite(&company.numberWorkshops[i], sizeof(company.numberWorkshops[i]), 1, fileDataBase);
    }
    fclose(fileDataBase);
    fprintf(fileLogs, "\n\n%s: Запись базы данных с удаленным цехом в файл\n\n", ctime(&realTime));
    }
    else{
        clearScreen();
        printf("\n--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("\t\t\tЗАПИСЕЙ НЕТ!\t");
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
    fprintf(fileLogs, "\n\n%s: Вызов функции записи резервного файла\n\n", ctime(&realTime));
    
    // Чтение базы данных
    fileDataBase = fopen("dataBase.bin", "rb");
        fread(&company, sizeof(companyStructure), 1, fileDataBase);
    fclose(fileDataBase);
    fprintf(fileLogs, "\n\n%s: Чтение базы данных для записи в резервный файл\n\n", ctime(&realTime));
    
    // Запись базы данных в бэкап-файл
    backupFile = fopen("backup.bin", "wb");
        fwrite(&company, sizeof(companyStructure), 1, backupFile);
    fclose(backupFile);
    fprintf(fileLogs, "\n\n%s: Запись базы данных в резервный файл\n\n", ctime(&realTime));
    fclose(fileLogs);
    clearScreen();
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("\tСОЗДАНИЕ РЕЗЕРВНОГО ФАЙЛА ПРОШЛО УСПЕШНО!\t");
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    return countNewRecordWorkshops;
}

int restoreBackupFile(int countRestore, int countNewRecordWorkshops){
    FILE *backupFile;
    time_t realTime = time(NULL);
    char action[5];
    FILE *fileLogs;
    fileLogs = fopen("logs.txt", "a+t");
    fprintf(fileLogs, "\n\n%s: Вызов функции восстановления данных из резервного файла\n\n", ctime(&realTime));
    
    printf("Вы действительно хотите восстановить данные из резервного файла? (Предыдущие записи будут стерты!!!)\n");
    printf("Да +, Нет - : "); gets(action);
    while(strcmp(action, "+") != 0 && strcmp(action, "-") != 0){
        printf("Введите + или - :"); gets(action);
    }
    
    // Восстановление базы данных
    if(strcmp(action, "+") == 0){
        backupFile = fopen("backup.bin", "rb");
        fread(&company, sizeof(company), 1, fileDataBase);
        fclose(backupFile);
    fprintf(fileLogs, "\n\n%s: Чтение базы данных для восстановления из резервного файла\n\n", ctime(&realTime));
    
    fileDataBase = fopen("dataBase.bin", "wb");
        fread(&company, sizeof(company), 1, fileDataBase);
    fclose(fileDataBase);
    fprintf(fileLogs, "\n\n%s: Запись восстановленных данных из резервного файла\n\n", ctime(&realTime));
    return countRestore;
    }
    else{
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("\tОТМЕНА ВОССТАНОВЛЕНИЯ БАЗЫ ДАННЫХ\t");
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        fprintf(fileLogs, "\n\n%s: Отмена восстановления\n\n", ctime(&realTime));
        return countNewRecordWorkshops;
    }
    clearScreen();
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("\tВОССТАНОВЛЕНИЕ ДАННЫХ ПРОШЛО УСПЕШНО!\t");
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    fclose(fileLogs);
}

companyStructure correctCountWorker(int countNewRecordWorkshops, companyStructure company){
    time_t realTime = time(NULL);
    FILE *fileLogs;
    fileLogs = fopen("logs.txt", "a+t");
    fprintf(fileLogs, "\n\n%s: Вызов функции корректировки по названию цеха\n\n", ctime(&realTime));
    int action; int countDelete = 0;
    bool isNameFalse = true;
    
    fileDataBase = fopen("dataBase.bin", "rb");
    for(int i = 0; i < countNewRecordWorkshops; i++){
        fread(&company.numberWorkshops[i], sizeof(company.numberWorkshops[i]), 1, fileDataBase);
    }
    fclose(fileDataBase);
    
    for(int i = 0; i < countNewRecordWorkshops; i++){
        printf("Цех %d: %s\n", i+1, company.numberWorkshops[i].nameWorkshop);
    }
    
    char searchNameWorkshop[NAME_WORKSHOP_LEN];
    int indexEdit = 0;
    printf("\nВведите название цеха:\n"); gets(searchNameWorkshop);
    while(strlen(searchNameWorkshop) < 1){
        printf("\nВведена пустая строка!!! Введите название цеха:\n"); gets(searchNameWorkshop);
    }
    fprintf(fileLogs, "\n\n%s: Ввод название цеха для корректировки\n\n", ctime(&realTime));
    for(int i = 0; i < countNewRecordWorkshops; i++){
        if(strcmp(searchNameWorkshop, company.numberWorkshops[i].nameWorkshop) == 0){
            isNameFalse = false;
            printf("Цех: %s\n", searchNameWorkshop);
            printf("Кол-во работников в цехе: %d\n", company.numberWorkshops[i].countNumberWorker);
            indexEdit = i;
            while(action != 1 && action != 2 && action != 0){
                printf("1 - удаление работника\n");
                printf("2 - добавление работника\n");
                printf("0 - отмена корректировки кол-ва работникв\n\n");
                scanf("%d", &action);
                clearStdin(); clearScreen();
            }
            }
        }
    
    if(action == 0){
        return company;
    }
    
    if(isNameFalse){
        clearScreen();
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("\t\tДАННОГО ЦЕХА НЕ СУЩЕСТВУЕТ\t");
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        fprintf(fileLogs, "\n\n%s: Ввод названия несуществующего цеха\n\n", ctime(&realTime));
    }
    
    
    if(action == 1){
            for(int j = 0; j < company.numberWorkshops[indexEdit].countNumberWorker; j++){
                printf("Работник %d: %s\n", j+1, company.numberWorkshops[indexEdit].numberWorker[j].surnameNamePatronymic);
            }
        
        printf("Введите номер работника, которого хотите удалить: "); scanf("%d", &countDelete);
        while((countDelete > company.numberWorkshops[indexEdit].countNumberWorker) && (countDelete < 1)){
            printf("Введите номер работника, которого хотите удалить: "); scanf("%d", &countDelete);
            clearStdin();
        }
        
        fprintf(fileLogs, "\n\n%s: Ввод номера удаляемого работника\n\n", ctime(&realTime));
        
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
         // Добавление новой записи
         printf("\nВвод новой записи:\n");
        fprintf(fileLogs, "\n\n%s: Ввод новой записи\n\n", ctime(&realTime));
         for(int i = indexEdit; i < indexEdit + 1; i++){
             for(int j = company.numberWorkshops[indexEdit].countNumberWorker; j < company.numberWorkshops[indexEdit].countNumberWorker + 1; j++){
                 printf("Введите ФИО рабочего: ");
                    gets(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
                 while (strlen(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic) < 1) {
                     printf("Введена пустая строка!!! Введите ФИО рабочего: ");
                        gets(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
                 }
                    fprintf(fileLogs, "\n\n%s: Запись нового ФИО %d-го работника\n\n", ctime(&realTime), j+1);
                 for(int k = 0; k < NUMBER_MONTH; k++){
                     printf("Кол-во рабочих дней %d-го месяца: ", k+1); company.numberWorkshops[i].numberWorker[j].numberOfWorkDay[k] = rand()%(28-1+1)+1;
                     printf("%d\n", company.numberWorkshops[i].numberWorker[j].numberOfWorkDay[k]);
                     fprintf(fileLogs, "\n\n%s: Запись количества рабочих дней %d-го работника\n\n", ctime(&realTime), j+1);
                     printf("З/П %d-го месяца: ", k+1); company.numberWorkshops[i].numberWorker[j].money[k] = rand()%(20-10+1)+10;
                     printf("%.3f\n", company.numberWorkshops[i].numberWorker[j].money[k]);
                     fprintf(fileLogs, "\n\n%s: Запись З/П %d-го работника\n\n", ctime(&realTime), j+1);
                 }
             }
         }
        company.numberWorkshops[indexEdit].countNumberWorker++;
    }

    fileDataBase = fopen("dataBase.bin", "wb");
    fwrite(&company, sizeof(company), 1, fileDataBase);
    fclose(fileDataBase);
    fprintf(fileLogs, "\n\n%s: Запись в файл\n\n", ctime(&realTime));
    fclose(fileLogs);
    
    return company;
}

#endif /* allFunction_h */
