#include "allFunction.h"
#include "recordDataBase.h"
    
int main() {
    setlocale(LC_ALL, "Russian");
    srand((unsigned int)time(NULL));
    time_t realTime = time(NULL);
    
    // Запись и инициализация переменных;
    int i, j, action, countRestore = 0;
    float arrayFond[5];
    FILE *fileDataBase;
    FILE *fileLogs;
    
    arrayCompany = defaultRecordArray(arrayCompany);
    fileLogs = fopen("logs.txt", "a+t");
    
    titlePage();
    printf("Press enter to continue...");
    getchar();
    clearScreen();
    
    // Записываем данные в файл
    // НЕРАБОЧИЙ СПОСОБ(Разобраться)
  /*  fileDataBase = fopen("dataBase.txt", "wb");
            fwrite(&arrayCompany, sizeof(company), 1, fileDataBase);
    fclose(fileDataBase); */
    
    // Рабочий способ записи данных по-умолчанию
    fileDataBase = fopen("dataBase.txt", "wb");
    for(i = 0; i < NUMBER_WORKSHOPS; i++){
        fwrite(&arrayCompany.numberWorkshops[i], sizeof(arrayCompany.numberWorkshops[i]), 1, fileDataBase);
    }
    fclose(fileDataBase);
    fprintf(fileLogs, "\n\n%s: Запись умалчиваемого массива структур в файл\n\n", ctime(&realTime));
    
    // Считываем информацию из файла в массив
    fileDataBase = fopen("dataBase.txt", "rb");
        fread(&arrayCompany, sizeof(company), 1, fileDataBase);
    fclose(fileDataBase);
    fprintf(fileLogs, "\n\n%s: Чтение умалчиваемого массива структур из файла\n\n", ctime(&realTime));
 
    // Вывод фио, отчисления в фонд
    printf("\n\n\t\t\tВывод отчислений в фонд\n");
    for(i = 0; i < NUMBER_WORKSHOPS; i++){
        for (j = 0; j < NUMBER_WORKER; j++) {
        printf("\n=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=++=+=+=+=+=+=+=+=+=+=+\n");
        printf("Название цеха: %s\n", arrayCompany.numberWorkshops[i].nameWorkshop);
        printf("ФИО Рабочего: %s\n", arrayCompany.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
        printf("Сумма перечисленная в фонд мира: %.3f грн.\n", (arrayCompany.numberWorkshops[i].numberWorker[j].money[0]) / (arrayCompany.numberWorkshops[i].numberWorker[j].numberOfWorkDay[0]));
        arrayFond[j] = (arrayCompany.numberWorkshops[i].numberWorker[j].money[0]) / (arrayCompany.numberWorkshops[i].numberWorker[j].numberOfWorkDay[0]);
        }
    }
    fprintf(fileLogs, "\n\n%s: Вывод отчислений в фонд\n\n", ctime(&realTime));
    
    // Записываем фио, фондовые отчисления во второй файл
    fileDataBase = fopen("twoDataBase.txt", "wb");
    for(i = 0; i < NUMBER_WORKSHOPS; i++){
        for(j = 0; j < NUMBER_WORKER; j++){
            fwrite(&arrayCompany.numberWorkshops[i].nameWorkshop, sizeof(char), 1, fileDataBase);
            fwrite(&arrayFond[j], sizeof(float), 1, fileDataBase);
        }
    }
    fclose(fileDataBase);
    fprintf(fileLogs, "\n\n%s: Запись данных о фондовых отчислениях в файл\n\n", ctime(&realTime));
    
    // Считываем второй файл в массив
    fileDataBase = fopen("twoDataBase.txt", "rb");
    for(i = 0; i < NUMBER_WORKSHOPS; i++){
        for(j = 0; j < NUMBER_WORKER; j++){
            fread(&arrayCompany.numberWorkshops[i].nameWorkshop, sizeof(char), 1, fileDataBase);
            fread(&arrayFond[j], sizeof(float), 1, fileDataBase);
        }
    }
    fclose(fileDataBase);
    fprintf(fileLogs, "\n\n%s: Чтение данных о фондовых отчислениях из файла\n\n", ctime(&realTime));
    
    // Вывод второго файла
    printf("\n\t\t\tВывод считаной информации из второго файла\n");
    for(i = 0; i < NUMBER_WORKSHOPS; i++){
        for (j = 0; j < NUMBER_WORKER; j++) {
        printf("\n=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=++=+=+=+=+=+=+=+=+=+=+\n");
        printf("Название цеха: %s\n", arrayCompany.numberWorkshops[i].nameWorkshop);
        printf("ФИО Рабочего: %s\n", arrayCompany.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
        printf("Сумма перечисленная в фонд мира: %.3f грн.\n", arrayFond[j]);
        }
    }
    
    // Меню
    do{
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("\t\tДоступные действия:\n"
               "%d - добавление записи\n"
               "%d - удаление записей по наименованию цеха\n"
               "%d - вывод всех записей на экран\n"
               "%d - создание бэкап-файла\n"
               "%d - восстановить базу данных из бэкап-файла\n"
               "%d - выход из программы\n",
               MENU_ADD, MENU_DELETE, MENU_SHOW_ALL, MENU_CREATE_BACKUP_FILE, MENU_RESTORE_BACKUP_FILE,MENU_EXIT);
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Выберите действие: ");
        scanf("%d", &action);
        clearStdin();
        
        // Запуск подпрограммы
        switch(action){
            case MENU_ADD:
                clearScreen();
                countNewRecordWorkshops = addNewRecord(countNewRecordWorkshops, arrayCompany);
                break;
            case MENU_DELETE:
                clearScreen();
                countNewRecordWorkshops = deleteRecords(countNewRecordWorkshops, arrayCompany);
                break;
            case MENU_SHOW_ALL:
                clearScreen();
                printDataBase(countNewRecordWorkshops, arrayCompany);
                break;
            case MENU_CREATE_BACKUP_FILE:
                clearScreen();
                countRestore = createBackupFile(countNewRecordWorkshops, arrayCompany);
                break;
            case MENU_RESTORE_BACKUP_FILE:
                clearScreen();
                countNewRecordWorkshops = restoreBackupFile(countRestore, countNewRecordWorkshops);
                break;
            case MENU_EXIT:
                fprintf(fileLogs, "\n\n%s: Завершение программы\n\n", ctime(&realTime));
                clearScreen();
                programEnd();
            default:
                break;
        }
    } while(action != MENU_EXIT);
    
    fclose(fileLogs);
    return 0;
}
