//
//  correctCountWorker.h
//  courseWork
//
//  Created by mikeo on 04.05.2021.
//

#ifndef correctCountWorker_h
#define correctCountWorker_h

companyStructure correctCountWorker(int countNewRecordWorkshops, companyStructure company);

companyStructure correctCountWorker(int countNewRecordWorkshops, companyStructure company){
    time_t realTime = time(NULL);
    FILE *fileLogs;
    fileLogs = fopen("logs.txt", "a+t");
    
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
    for(int i = 0; i < countNewRecordWorkshops; i++){
        if(strcmp(searchNameWorkshop, company.numberWorkshops[i].nameWorkshop) == 0){
            printf("Цех: %s\n", searchNameWorkshop);
            printf("Кол-во работников в цехе: %d\n", company.numberWorkshops[i].countNumberWorker);
            indexEdit = i;
            }
        }
    
    int action = 0; int countDelete = 0;
    
    while(action != 1 && action != 2){
        printf("1 - удаление работника\n");
        printf("2 - добавление работника\n");
        scanf("%d", &action);
        clearStdin(); clearScreen();
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
         for(int i = indexEdit; i < indexEdit + 1; i++){
             for(int j = company.numberWorkshops[indexEdit].countNumberWorker; j < company.numberWorkshops[indexEdit].countNumberWorker + 1; j++){
                 printf("Введите ФИО рабочего: ");
                    gets(company.numberWorkshops[i].numberWorker[j].surnameNamePatronymic);
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
    
    fclose(fileLogs);
    
    return company;
}

#endif /* correctCountWorker_h */
