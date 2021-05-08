#ifndef recordDataBase_h
#define recordDataBase_h

#include "allFunction.h"

// Данные по-умолчанию
companyStructure defaultRecordArray(companyStructure company);

companyStructure defaultRecordArray(companyStructure company){

    time_t realTime = time(NULL);
    FILE *fileLogs = NULL;
    fileLogs = fopen("logs.txt", "a+t");
     // Запись структуры "Цех"
    
     // Название цехов
     strcpy(company.numberWorkshops[0].nameWorkshop, "Ремонтный");
     strcpy(company.numberWorkshops[1].nameWorkshop, "Металургический");
     strcpy(company.numberWorkshops[2].nameWorkshop, "Инструментальный");
     strcpy(company.numberWorkshops[3].nameWorkshop, "Химический");

     fprintf(fileLogs, "\n\n%s: Запись наименований цехов по-умолчанию\n\n", ctime(&realTime));
     // Запись структуры
     // Запись 1.1
     // ФИО
     strcpy(company.numberWorkshops[0].numberWorker[0].surnameNamePatronymic, "Николаев Степан Юрьевич");
     strcpy(company.numberWorkshops[0].numberWorker[1].surnameNamePatronymic, "Кривой Степан Аркадьевич");
     strcpy(company.numberWorkshops[0].numberWorker[2].surnameNamePatronymic, "Колян Николай Витальевич");
     strcpy(company.numberWorkshops[0].numberWorker[3].surnameNamePatronymic, "Гудрон Михаил Иванович");
     strcpy(company.numberWorkshops[0].numberWorker[4].surnameNamePatronymic, "Николаев Иван Федорович");
     
     strcpy(company.numberWorkshops[1].numberWorker[0].surnameNamePatronymic, "Иванов Иван Иванович");
     strcpy(company.numberWorkshops[1].numberWorker[1].surnameNamePatronymic, "Карнаухов Петр Петрович");
     strcpy(company.numberWorkshops[1].numberWorker[2].surnameNamePatronymic, "Ровный Роман Романович");
     strcpy(company.numberWorkshops[1].numberWorker[3].surnameNamePatronymic, "Кривой Роман Валентинович");
     strcpy(company.numberWorkshops[1].numberWorker[4].surnameNamePatronymic, "Николаев Степан Юрьевич");
     
     strcpy(company.numberWorkshops[2].numberWorker[0].surnameNamePatronymic, "Белый Александр Николаевич");
     strcpy(company.numberWorkshops[2].numberWorker[1].surnameNamePatronymic, "Кос Артем Кириллович");
     strcpy(company.numberWorkshops[2].numberWorker[2].surnameNamePatronymic, "Черный Сергей Сергеевич");
     strcpy(company.numberWorkshops[2].numberWorker[3].surnameNamePatronymic, "Таджик Абдула Иванович");
     strcpy(company.numberWorkshops[2].numberWorker[4].surnameNamePatronymic, "Николаев Юрий Степанович");
     
     strcpy(company.numberWorkshops[3].numberWorker[0].surnameNamePatronymic, "Великий Владимир Иванович");
     strcpy(company.numberWorkshops[3].numberWorker[1].surnameNamePatronymic, "Скромный Иван Владимирович");
     strcpy(company.numberWorkshops[3].numberWorker[2].surnameNamePatronymic, "Петров Петр Петрович");
     strcpy(company.numberWorkshops[3].numberWorker[3].surnameNamePatronymic, "Нужный Владислав Ильич");
     strcpy(company.numberWorkshops[3].numberWorker[4].surnameNamePatronymic, "Енин Александр Николаевич");

     fprintf(fileLogs, "\n\n%s: Запись ФИО работников по-умолчанию\n\n", ctime(&realTime));
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[0].numberOfWorkDay[0] = 25;
     // З/П
     company.numberWorkshops[0].numberWorker[0].money[0] = 9.500;
    
     
     // Запись 1.2
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[0].numberOfWorkDay[1] = 20;
     // З/П
     company.numberWorkshops[0].numberWorker[0].money[1] = 8.500;
     
     // Запись 1.3
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[0].numberOfWorkDay[2] = 20;
     // З/П
     company.numberWorkshops[0].numberWorker[0].money[2] = 8.500;
      
     // Запись 1.4
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[0].numberOfWorkDay[3] = 28;
     // З/П
     company.numberWorkshops[0].numberWorker[0].money[3] = 9.750;
     
     // Запись 1.5
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[0].numberOfWorkDay[4] = 10;
     // З/П
     company.numberWorkshops[0].numberWorker[0].money[4] = 4.500;
     
     // Запись 1.6
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[0].numberOfWorkDay[5] = 25;
     // З/П
     company.numberWorkshops[0].numberWorker[0].money[5] = 9.500;
     
     // Запись 1.7
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[0].numberOfWorkDay[6] = 15;
     // З/П
     company.numberWorkshops[0].numberWorker[0].money[6] = 6.500;
     
     // Запись 1.8
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[0].numberOfWorkDay[7] = 25;
     // З/П
     company.numberWorkshops[0].numberWorker[0].money[7] = 9.500;
     
     // Запись 1.9
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[0].numberOfWorkDay[8] = 20;
     // З/П
     company.numberWorkshops[0].numberWorker[0].money[8] = 8.500;
     
     // Запись 1.10
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[0].numberOfWorkDay[9] = 19;
     // З/П
     company.numberWorkshops[0].numberWorker[0].money[9] = 8.250;
     
     // Запись 1.11
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[0].numberOfWorkDay[10] = 25;
     // З/П
     company.numberWorkshops[0].numberWorker[0].money[10] = 9.500;
     
     // Запись 1.12
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[0].numberOfWorkDay[11] = 20;
     // З/П
     company.numberWorkshops[0].numberWorker[0].money[11] = 8.500;
     
     
     // Запись 2.1
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[1].numberOfWorkDay[0] = 13;
     // З/П
     company.numberWorkshops[0].numberWorker[1].money[0] = 14.500;
     
     // Запись 2.2
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[1].numberOfWorkDay[1] = 20;
     // З/П
     company.numberWorkshops[0].numberWorker[1].money[1] = 12.500;
     
     // Запись 2.3
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[1].numberOfWorkDay[2] = 10;
     // З/П
     company.numberWorkshops[0].numberWorker[1].money[2] = 6.750;
      
     // Запись 2.4
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[1].numberOfWorkDay[3] = 28;
     // З/П
     company.numberWorkshops[0].numberWorker[1].money[3] = 16.750;
     
     // Запись 2.5
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[1].numberOfWorkDay[4] = 10;
     // З/П
     company.numberWorkshops[0].numberWorker[1].money[4] = 6.750;
     
     // Запись 2.6
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[1].numberOfWorkDay[5] = 25;
     // З/П
     company.numberWorkshops[0].numberWorker[1].money[5] = 14.500;
     
     // Запись 2.7
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[1].numberOfWorkDay[6] = 15;
     // З/П
     company.numberWorkshops[0].numberWorker[1].money[6] = 7.750;
     
     // Запись 2.8
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[1].numberOfWorkDay[7] = 5;
     // З/П
     company.numberWorkshops[0].numberWorker[1].money[7] = 1.750;
     
     // Запись 2.9
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[1].numberOfWorkDay[8] = 20;
     // З/П
     company.numberWorkshops[0].numberWorker[1].money[8] = 12.500;
     
     // Запись 2.10
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[1].numberOfWorkDay[9] = 19;
     // З/П
     company.numberWorkshops[0].numberWorker[1].money[9] = 11.250;
     
     // Запись 2.11
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[1].numberOfWorkDay[10] = 25;
     // З/П
     company.numberWorkshops[0].numberWorker[1].money[10] = 14.500;
     
     // Запись 2.12
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[1].numberOfWorkDay[11] = 20;
     // З/П
     company.numberWorkshops[0].numberWorker[1].money[11] = 12.500;
     
     
     // Запись 3.1
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[2].numberOfWorkDay[0] = 25;
     // З/П
     company.numberWorkshops[0].numberWorker[2].money[0] = 14.500;
     
     // Запись 3.2
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[2].numberOfWorkDay[1] = 20;
     // З/П
     company.numberWorkshops[0].numberWorker[2].money[1] = 12.500;
     
     // Запись 3.3
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[2].numberOfWorkDay[2] = 10;
     // З/П
     company.numberWorkshops[0].numberWorker[2].money[2] = 6.750;
      
     // Запись 3.4
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[2].numberOfWorkDay[3] = 28;
     // З/П
     company.numberWorkshops[0].numberWorker[2].money[3] = 16.750;
     
     // Запись 3.5
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[2].numberOfWorkDay[4] = 10;
     // З/П
     company.numberWorkshops[0].numberWorker[2].money[4] = 6.750;
     
     // Запись 3.6
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[2].numberOfWorkDay[5] = 25;
     // З/П
     company.numberWorkshops[0].numberWorker[2].money[5] = 14.500;
     
     // Запись 3.7
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[2].numberOfWorkDay[6] = 15;
     // З/П
     company.numberWorkshops[0].numberWorker[2].money[6] = 7.750;
     
     // Запись 3.8
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[2].numberOfWorkDay[7] = 5;
     // З/П
     company.numberWorkshops[0].numberWorker[2].money[7] = 1.750;
     
     // Запись 3.9
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[2].numberOfWorkDay[8] = 20;
     // З/П
     company.numberWorkshops[0].numberWorker[2].money[8] = 12.500;
     
     // Запись 3.10
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[2].numberOfWorkDay[9] = 19;
     // З/П
     company.numberWorkshops[0].numberWorker[2].money[9] = 11.250;
     
     // Запись 3.11
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[2].numberOfWorkDay[10] = 25;
     // З/П
     company.numberWorkshops[0].numberWorker[2].money[10] = 14.500;
     
     // Запись 3.12
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[2].numberOfWorkDay[11] = 20;
     // З/П
     company.numberWorkshops[0].numberWorker[2].money[11] = 12.500;
     
     
     // Запись 4.1
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[3].numberOfWorkDay[0] = 20;
     // З/П
     company.numberWorkshops[0].numberWorker[3].money[0] = 18.500;
     
     // Запись 4.2
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[3].numberOfWorkDay[1] = 20;
     // З/П
     company.numberWorkshops[0].numberWorker[3].money[1] = 12.500;
     
     // Запись 4.3
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[3].numberOfWorkDay[2] = 10;
     // З/П
     company.numberWorkshops[0].numberWorker[3].money[2] = 6.750;
      
     // Запись 4.4
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[3].numberOfWorkDay[3] = 28;
     // З/П
     company.numberWorkshops[0].numberWorker[3].money[3] = 16.750;
     
     // Запись 4.5
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[3].numberOfWorkDay[4] = 10;
     // З/П
     company.numberWorkshops[0].numberWorker[3].money[4] = 6.750;
     
     // Запись 4.6
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[3].numberOfWorkDay[5] = 25;
     // З/П
     company.numberWorkshops[0].numberWorker[3].money[5] = 14.500;
     
     // Запись 4.7
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[3].numberOfWorkDay[6] = 15;
     // З/П
     company.numberWorkshops[0].numberWorker[3].money[6] = 7.750;
     
     // Запись 4.8
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[3].numberOfWorkDay[7] = 5;
     // З/П
     company.numberWorkshops[0].numberWorker[3].money[7] = 1.750;
     
     // Запись 4.9
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[3].numberOfWorkDay[8] = 20;
     // З/П
     company.numberWorkshops[0].numberWorker[3].money[8] = 12.500;
     
     // Запись 4.10
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[3].numberOfWorkDay[9] = 19;
     // З/П
     company.numberWorkshops[0].numberWorker[3].money[9] = 11.250;
     
     // Запись 4.11
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[3].numberOfWorkDay[10] = 25;
     // З/П
     company.numberWorkshops[0].numberWorker[3].money[10] = 14.500;
     
     // Запись 4.12
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[3].numberOfWorkDay[11] = 20;
     // З/П
     company.numberWorkshops[0].numberWorker[3].money[11] = 12.500;
         
     
     // Запись 5.1
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[4].numberOfWorkDay[0] = 12;
     // З/П
     company.numberWorkshops[0].numberWorker[4].money[0] = 6.500;
     
     // Запись 5.2
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[4].numberOfWorkDay[1] = 20;
     // З/П
     company.numberWorkshops[0].numberWorker[4].money[1] = 12.500;
     
     // Запись 5.3
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[4].numberOfWorkDay[2] = 10;
     // З/П
     company.numberWorkshops[0].numberWorker[4].money[2] = 6.750;
      
     // Запись 5.4
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[4].numberOfWorkDay[3] = 28;
     // З/П
     company.numberWorkshops[0].numberWorker[4].money[3] = 16.750;
     
     // Запись 5.5
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[4].numberOfWorkDay[4] = 10;
     // З/П
     company.numberWorkshops[0].numberWorker[4].money[4] = 6.750;
     
     // Запись 5.6
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[4].numberOfWorkDay[5] = 25;
     // З/П
     company.numberWorkshops[0].numberWorker[4].money[5] = 14.500;
     
     // Запись 5.7
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[4].numberOfWorkDay[6] = 15;
     // З/П
     company.numberWorkshops[0].numberWorker[4].money[6] = 7.750;
     
     // Запись 5.8
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[4].numberOfWorkDay[7] = 5;
     // З/П
     company.numberWorkshops[0].numberWorker[4].money[7] = 1.750;
     
     // Запись 5.9
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[4].numberOfWorkDay[8] = 20;
     // З/П
     company.numberWorkshops[0].numberWorker[4].money[8] = 12.500;
     
     // Запись 5.10
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[4].numberOfWorkDay[9] = 19;
     // З/П
     company.numberWorkshops[0].numberWorker[4].money[9] = 11.250;
     
     // Запись 5.11
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[4].numberOfWorkDay[10] = 25;
     // З/П
     company.numberWorkshops[0].numberWorker[4].money[10] = 14.500;
     
     // Запись 5.12
     // Кол-во рабочих дней
     company.numberWorkshops[0].numberWorker[4].numberOfWorkDay[11] = 20;
     // З/П
     company.numberWorkshops[0].numberWorker[4].money[11] = 12.500;
     
     
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[0].numberOfWorkDay[0] = 25;
     // З/П
     company.numberWorkshops[1].numberWorker[0].money[0] = 9.500;
     
     // Запись 1.2
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[0].numberOfWorkDay[1] = 20;
     // З/П
     company.numberWorkshops[1].numberWorker[0].money[1] = 8.500;
     
     // Запись 1.3
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[0].numberOfWorkDay[2] = 20;
     // З/П
     company.numberWorkshops[1].numberWorker[0].money[2] = 8.500;
      
     // Запись 1.4
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[0].numberOfWorkDay[3] = 28;
     // З/П
     company.numberWorkshops[1].numberWorker[0].money[3] = 9.750;
     
     // Запись 1.5
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[0].numberOfWorkDay[4] = 10;
     // З/П
     company.numberWorkshops[1].numberWorker[0].money[4] = 4.500;
     
     // Запись 1.6
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[0].numberOfWorkDay[5] = 25;
     // З/П
     company.numberWorkshops[1].numberWorker[0].money[5] = 9.500;
     
     // Запись 1.7
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[0].numberOfWorkDay[6] = 15;
     // З/П
     company.numberWorkshops[1].numberWorker[0].money[6] = 6.500;
     
     // Запись 1.8
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[0].numberOfWorkDay[7] = 25;
     // З/П
     company.numberWorkshops[1].numberWorker[0].money[7] = 9.500;
     
     // Запись 1.9
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[0].numberOfWorkDay[8] = 20;
     // З/П
     company.numberWorkshops[1].numberWorker[0].money[8] = 8.500;
     
     // Запись 1.10
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[0].numberOfWorkDay[9] = 19;
     // З/П
     company.numberWorkshops[1].numberWorker[0].money[9] = 8.250;
     
     // Запись 1.11
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[0].numberOfWorkDay[10] = 25;
     // З/П
     company.numberWorkshops[1].numberWorker[0].money[10] = 9.500;
     
     // Запись 1.12
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[0].numberOfWorkDay[11] = 20;
     // З/П
     company.numberWorkshops[1].numberWorker[0].money[11] = 8.500;
     
     
     // Запись 2.1
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[1].numberOfWorkDay[0] = 13;
     // З/П
     company.numberWorkshops[1].numberWorker[1].money[0] = 14.500;
     
     // Запись 2.2
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[1].numberOfWorkDay[1] = 20;
     // З/П
     company.numberWorkshops[1].numberWorker[1].money[1] = 12.500;
     
     // Запись 2.3
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[1].numberOfWorkDay[2] = 10;
     // З/П
     company.numberWorkshops[1].numberWorker[1].money[2] = 6.750;
      
     // Запись 2.4
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[1].numberOfWorkDay[3] = 28;
     // З/П
     company.numberWorkshops[1].numberWorker[1].money[3] = 16.750;
     
     // Запись 2.5
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[1].numberOfWorkDay[4] = 10;
     // З/П
     company.numberWorkshops[1].numberWorker[1].money[4] = 6.750;
     
     // Запись 2.6
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[1].numberOfWorkDay[5] = 25;
     // З/П
     company.numberWorkshops[1].numberWorker[1].money[5] = 14.500;
     
     // Запись 2.7
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[1].numberOfWorkDay[6] = 15;
     // З/П
     company.numberWorkshops[1].numberWorker[1].money[6] = 7.750;
     
     // Запись 2.8
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[1].numberOfWorkDay[7] = 5;
     // З/П
     company.numberWorkshops[1].numberWorker[1].money[7] = 1.750;
     
     // Запись 2.9
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[1].numberOfWorkDay[8] = 20;
     // З/П
     company.numberWorkshops[1].numberWorker[1].money[8] = 12.500;
     
     // Запись 2.10
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[1].numberOfWorkDay[9] = 19;
     // З/П
     company.numberWorkshops[1].numberWorker[1].money[9] = 11.250;
     
     // Запись 2.11
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[1].numberOfWorkDay[10] = 25;
     // З/П
     company.numberWorkshops[1].numberWorker[1].money[10] = 14.500;
     
     // Запись 2.12
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[1].numberOfWorkDay[11] = 20;
     // З/П
     company.numberWorkshops[1].numberWorker[1].money[11] = 12.500;
     
     
     // Запись 3.1
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[2].numberOfWorkDay[0] = 25;
     // З/П
     company.numberWorkshops[1].numberWorker[2].money[0] = 14.500;
     
     // Запись 3.2
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[2].numberOfWorkDay[1] = 20;
     // З/П
     company.numberWorkshops[1].numberWorker[2].money[1] = 12.500;
     
     // Запись 3.3
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[2].numberOfWorkDay[2] = 10;
     // З/П
     company.numberWorkshops[1].numberWorker[2].money[2] = 6.750;
      
     // Запись 3.4
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[2].numberOfWorkDay[3] = 28;
     // З/П
     company.numberWorkshops[1].numberWorker[2].money[3] = 16.750;
     
     // Запись 3.5
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[2].numberOfWorkDay[4] = 10;
     // З/П
     company.numberWorkshops[1].numberWorker[2].money[4] = 6.750;
     
     // Запись 3.6
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[2].numberOfWorkDay[5] = 25;
     // З/П
     company.numberWorkshops[1].numberWorker[2].money[5] = 14.500;
     
     // Запись 3.7
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[2].numberOfWorkDay[6] = 15;
     // З/П
     company.numberWorkshops[1].numberWorker[2].money[6] = 7.750;
     
     // Запись 3.8
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[2].numberOfWorkDay[7] = 5;
     // З/П
     company.numberWorkshops[1].numberWorker[2].money[7] = 1.750;
     
     // Запись 3.9
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[2].numberOfWorkDay[8] = 20;
     // З/П
     company.numberWorkshops[1].numberWorker[2].money[8] = 12.500;
     
     // Запись 3.10
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[2].numberOfWorkDay[9] = 19;
     // З/П
     company.numberWorkshops[1].numberWorker[2].money[9] = 11.250;
     
     // Запись 3.11
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[2].numberOfWorkDay[10] = 25;
     // З/П
     company.numberWorkshops[1].numberWorker[2].money[10] = 14.500;
     
     // Запись 3.12
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[2].numberOfWorkDay[11] = 20;
     // З/П
     company.numberWorkshops[1].numberWorker[2].money[11] = 12.500;
     
     
     // Запись 4.1
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[3].numberOfWorkDay[0] = 20;
     // З/П
     company.numberWorkshops[1].numberWorker[3].money[0] = 18.500;
     
     // Запись 4.2
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[3].numberOfWorkDay[1] = 20;
     // З/П
     company.numberWorkshops[1].numberWorker[3].money[1] = 12.500;
     
     // Запись 4.3
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[3].numberOfWorkDay[2] = 10;
     // З/П
     company.numberWorkshops[1].numberWorker[3].money[2] = 6.750;
      
     // Запись 4.4
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[3].numberOfWorkDay[3] = 28;
     // З/П
     company.numberWorkshops[1].numberWorker[3].money[3] = 16.750;
     
     // Запись 4.5
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[3].numberOfWorkDay[4] = 10;
     // З/П
     company.numberWorkshops[1].numberWorker[3].money[4] = 6.750;
     
     // Запись 4.6
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[3].numberOfWorkDay[5] = 25;
     // З/П
     company.numberWorkshops[1].numberWorker[3].money[5] = 14.500;
     
     // Запись 4.7
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[3].numberOfWorkDay[6] = 15;
     // З/П
     company.numberWorkshops[1].numberWorker[3].money[6] = 7.750;
     
     // Запись 4.8
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[3].numberOfWorkDay[7] = 5;
     // З/П
     company.numberWorkshops[1].numberWorker[3].money[7] = 1.750;
     
     // Запись 4.9
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[3].numberOfWorkDay[8] = 20;
     // З/П
     company.numberWorkshops[1].numberWorker[3].money[8] = 12.500;
     
     // Запись 4.10
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[3].numberOfWorkDay[9] = 19;
     // З/П
     company.numberWorkshops[1].numberWorker[3].money[9] = 11.250;
     
     // Запись 4.11
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[3].numberOfWorkDay[10] = 25;
     // З/П
     company.numberWorkshops[1].numberWorker[3].money[10] = 14.500;
     
     // Запись 4.12
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[3].numberOfWorkDay[11] = 20;
     // З/П
     company.numberWorkshops[1].numberWorker[3].money[11] = 12.500;
         
     
     // Запись 5.1
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[4].numberOfWorkDay[0] = 12;
     // З/П
     company.numberWorkshops[1].numberWorker[4].money[0] = 6.500;
     
     // Запись 5.2
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[4].numberOfWorkDay[1] = 20;
     // З/П
     company.numberWorkshops[1].numberWorker[4].money[1] = 12.500;
     
     // Запись 5.3
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[4].numberOfWorkDay[2] = 10;
     // З/П
     company.numberWorkshops[1].numberWorker[4].money[2] = 6.750;
      
     // Запись 5.4
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[4].numberOfWorkDay[3] = 28;
     // З/П
     company.numberWorkshops[1].numberWorker[4].money[3] = 16.750;
     
     // Запись 5.5
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[4].numberOfWorkDay[4] = 10;
     // З/П
     company.numberWorkshops[1].numberWorker[4].money[4] = 6.750;
     
     // Запись 5.6
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[4].numberOfWorkDay[5] = 25;
     // З/П
     company.numberWorkshops[1].numberWorker[4].money[5] = 14.500;
     
     // Запись 5.7
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[4].numberOfWorkDay[6] = 15;
     // З/П
     company.numberWorkshops[1].numberWorker[4].money[6] = 7.750;
     
     // Запись 5.8
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[4].numberOfWorkDay[7] = 5;
     // З/П
     company.numberWorkshops[1].numberWorker[4].money[7] = 1.750;
     
     // Запись 5.9
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[4].numberOfWorkDay[8] = 20;
     // З/П
     company.numberWorkshops[1].numberWorker[4].money[8] = 12.500;
     
     // Запись 5.10
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[4].numberOfWorkDay[9] = 19;
     // З/П
     company.numberWorkshops[1].numberWorker[4].money[9] = 11.250;
     
     // Запись 5.11
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[4].numberOfWorkDay[10] = 25;
     // З/П
     company.numberWorkshops[1].numberWorker[4].money[10] = 14.500;
     
     // Запись 5.12
     // Кол-во рабочих дней
     company.numberWorkshops[1].numberWorker[4].numberOfWorkDay[11] = 20;
     // З/П
     company.numberWorkshops[1].numberWorker[4].money[11] = 12.500;
     
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[0].numberOfWorkDay[0] = 25;
     // З/П
     company.numberWorkshops[2].numberWorker[0].money[0] = 9.500;
     
     // Запись 1.2
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[0].numberOfWorkDay[1] = 20;
     // З/П
     company.numberWorkshops[2].numberWorker[0].money[1] = 8.500;
     
     // Запись 1.3
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[0].numberOfWorkDay[2] = 20;
     // З/П
     company.numberWorkshops[2].numberWorker[0].money[2] = 8.500;
      
     // Запись 1.4
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[0].numberOfWorkDay[3] = 28;
     // З/П
     company.numberWorkshops[2].numberWorker[0].money[3] = 9.750;
     
     // Запись 1.5
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[0].numberOfWorkDay[4] = 10;
     // З/П
     company.numberWorkshops[2].numberWorker[0].money[4] = 4.500;
     
     // Запись 1.6
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[0].numberOfWorkDay[5] = 25;
     // З/П
     company.numberWorkshops[2].numberWorker[0].money[5] = 9.500;
     
     // Запись 1.7
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[0].numberOfWorkDay[6] = 15;
     // З/П
     company.numberWorkshops[2].numberWorker[0].money[6] = 6.500;
     
     // Запись 1.8
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[0].numberOfWorkDay[7] = 25;
     // З/П
     company.numberWorkshops[2].numberWorker[0].money[7] = 9.500;
     
     // Запись 1.9
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[0].numberOfWorkDay[8] = 20;
     // З/П
     company.numberWorkshops[2].numberWorker[0].money[8] = 8.500;
     
     // Запись 1.10
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[0].numberOfWorkDay[9] = 19;
     // З/П
     company.numberWorkshops[2].numberWorker[0].money[9] = 8.250;
     
     // Запись 1.11
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[0].numberOfWorkDay[10] = 25;
     // З/П
     company.numberWorkshops[2].numberWorker[0].money[10] = 9.500;
     
     // Запись 1.12
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[0].numberOfWorkDay[11] = 20;
     // З/П
     company.numberWorkshops[2].numberWorker[0].money[11] = 8.500;
     
     
     // Запись 2.1
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[1].numberOfWorkDay[0] = 13;
     // З/П
     company.numberWorkshops[2].numberWorker[1].money[0] = 14.500;
     
     // Запись 2.2
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[1].numberOfWorkDay[1] = 20;
     // З/П
     company.numberWorkshops[2].numberWorker[1].money[1] = 12.500;
     
     // Запись 2.3
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[1].numberOfWorkDay[2] = 10;
     // З/П
     company.numberWorkshops[2].numberWorker[1].money[2] = 6.750;
      
     // Запись 2.4
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[1].numberOfWorkDay[3] = 28;
     // З/П
     company.numberWorkshops[2].numberWorker[1].money[3] = 16.750;
     
     // Запись 2.5
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[1].numberOfWorkDay[4] = 10;
     // З/П
     company.numberWorkshops[2].numberWorker[1].money[4] = 6.750;
     
     // Запись 2.6
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[1].numberOfWorkDay[5] = 25;
     // З/П
     company.numberWorkshops[2].numberWorker[1].money[5] = 14.500;
     
     // Запись 2.7
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[1].numberOfWorkDay[6] = 15;
     // З/П
     company.numberWorkshops[2].numberWorker[1].money[6] = 7.750;
     
     // Запись 2.8
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[1].numberOfWorkDay[7] = 5;
     // З/П
     company.numberWorkshops[2].numberWorker[1].money[7] = 1.750;
     
     // Запись 2.9
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[1].numberOfWorkDay[8] = 20;
     // З/П
     company.numberWorkshops[2].numberWorker[1].money[8] = 12.500;
     
     // Запись 2.10
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[1].numberOfWorkDay[9] = 19;
     // З/П
     company.numberWorkshops[2].numberWorker[1].money[9] = 11.250;
     
     // Запись 2.11
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[1].numberOfWorkDay[10] = 25;
     // З/П
     company.numberWorkshops[2].numberWorker[1].money[10] = 14.500;
     
     // Запись 2.12
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[1].numberOfWorkDay[11] = 20;
     // З/П
     company.numberWorkshops[2].numberWorker[1].money[11] = 12.500;
     
     
     // Запись 3.1
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[2].numberOfWorkDay[0] = 25;
     // З/П
     company.numberWorkshops[2].numberWorker[2].money[0] = 14.500;
     
     // Запись 3.2
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[2].numberOfWorkDay[1] = 20;
     // З/П
     company.numberWorkshops[2].numberWorker[2].money[1] = 12.500;
     
     // Запись 3.3
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[2].numberOfWorkDay[2] = 10;
     // З/П
     company.numberWorkshops[2].numberWorker[2].money[2] = 6.750;
      
     // Запись 3.4
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[2].numberOfWorkDay[3] = 28;
     // З/П
     company.numberWorkshops[2].numberWorker[2].money[3] = 16.750;
     
     // Запись 3.5
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[2].numberOfWorkDay[4] = 10;
     // З/П
     company.numberWorkshops[2].numberWorker[2].money[4] = 6.750;
     
     // Запись 3.6
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[2].numberOfWorkDay[5] = 25;
     // З/П
     company.numberWorkshops[2].numberWorker[2].money[5] = 14.500;
     
     // Запись 3.7
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[2].numberOfWorkDay[6] = 15;
     // З/П
     company.numberWorkshops[2].numberWorker[2].money[6] = 7.750;
     
     // Запись 3.8
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[2].numberOfWorkDay[7] = 5;
     // З/П
     company.numberWorkshops[2].numberWorker[2].money[7] = 1.750;
     
     // Запись 3.9
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[2].numberOfWorkDay[8] = 20;
     // З/П
     company.numberWorkshops[2].numberWorker[2].money[8] = 12.500;
     
     // Запись 3.10
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[2].numberOfWorkDay[9] = 19;
     // З/П
     company.numberWorkshops[2].numberWorker[2].money[9] = 11.250;
     
     // Запись 3.11
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[2].numberOfWorkDay[10] = 25;
     // З/П
     company.numberWorkshops[2].numberWorker[2].money[10] = 14.500;
     
     // Запись 3.12
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[2].numberOfWorkDay[11] = 20;
     // З/П
     company.numberWorkshops[2].numberWorker[2].money[11] = 12.500;
     
     
     // Запись 4.1
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[3].numberOfWorkDay[0] = 20;
     // З/П
     company.numberWorkshops[2].numberWorker[3].money[0] = 18.500;
     
     // Запись 4.2
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[3].numberOfWorkDay[1] = 20;
     // З/П
     company.numberWorkshops[2].numberWorker[3].money[1] = 12.500;
     
     // Запись 4.3
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[3].numberOfWorkDay[2] = 10;
     // З/П
     company.numberWorkshops[2].numberWorker[3].money[2] = 6.750;
      
     // Запись 4.4
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[3].numberOfWorkDay[3] = 28;
     // З/П
     company.numberWorkshops[2].numberWorker[3].money[3] = 16.750;
     
     // Запись 4.5
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[3].numberOfWorkDay[4] = 10;
     // З/П
     company.numberWorkshops[2].numberWorker[3].money[4] = 6.750;
     
     // Запись 4.6
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[3].numberOfWorkDay[5] = 25;
     // З/П
     company.numberWorkshops[2].numberWorker[3].money[5] = 14.500;
     
     // Запись 4.7
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[3].numberOfWorkDay[6] = 15;
     // З/П
     company.numberWorkshops[2].numberWorker[3].money[6] = 7.750;
     
     // Запись 4.8
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[3].numberOfWorkDay[7] = 5;
     // З/П
     company.numberWorkshops[2].numberWorker[3].money[7] = 1.750;
     
     // Запись 4.9
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[3].numberOfWorkDay[8] = 20;
     // З/П
     company.numberWorkshops[2].numberWorker[3].money[8] = 12.500;
     
     // Запись 4.10
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[3].numberOfWorkDay[9] = 19;
     // З/П
     company.numberWorkshops[2].numberWorker[3].money[9] = 11.250;
     
     // Запись 4.11
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[3].numberOfWorkDay[10] = 25;
     // З/П
     company.numberWorkshops[2].numberWorker[3].money[10] = 14.500;
     
     // Запись 4.12
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[3].numberOfWorkDay[11] = 20;
     // З/П
     company.numberWorkshops[2].numberWorker[3].money[11] = 12.500;
         
     
     // Запись 5.1
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[4].numberOfWorkDay[0] = 12;
     // З/П
     company.numberWorkshops[2].numberWorker[4].money[0] = 6.500;
     
     // Запись 5.2
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[4].numberOfWorkDay[1] = 20;
     // З/П
     company.numberWorkshops[2].numberWorker[4].money[1] = 12.500;
     
     // Запись 5.3
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[4].numberOfWorkDay[2] = 10;
     // З/П
     company.numberWorkshops[2].numberWorker[4].money[2] = 6.750;
      
     // Запись 5.4
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[4].numberOfWorkDay[3] = 28;
     // З/П
     company.numberWorkshops[2].numberWorker[4].money[3] = 16.750;
     
     // Запись 5.5
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[4].numberOfWorkDay[4] = 10;
     // З/П
     company.numberWorkshops[2].numberWorker[4].money[4] = 6.750;
     
     // Запись 5.6
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[4].numberOfWorkDay[5] = 25;
     // З/П
     company.numberWorkshops[2].numberWorker[4].money[5] = 14.500;
     
     // Запись 5.7
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[4].numberOfWorkDay[6] = 15;
     // З/П
     company.numberWorkshops[2].numberWorker[4].money[6] = 7.750;
     
     // Запись 5.8
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[4].numberOfWorkDay[7] = 5;
     // З/П
     company.numberWorkshops[2].numberWorker[4].money[7] = 1.750;
     
     // Запись 5.9
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[4].numberOfWorkDay[8] = 20;
     // З/П
     company.numberWorkshops[2].numberWorker[4].money[8] = 12.500;
     
     // Запись 5.10
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[4].numberOfWorkDay[9] = 19;
     // З/П
     company.numberWorkshops[2].numberWorker[4].money[9] = 11.250;
     
     // Запись 5.11
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[4].numberOfWorkDay[10] = 25;
     // З/П
     company.numberWorkshops[2].numberWorker[4].money[10] = 14.500;
     
     // Запись 5.12
     // Кол-во рабочих дней
     company.numberWorkshops[2].numberWorker[4].numberOfWorkDay[11] = 20;
     // З/П
     company.numberWorkshops[2].numberWorker[4].money[11] = 12.500;
     
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[0].numberOfWorkDay[0] = 25;
     // З/П
     company.numberWorkshops[3].numberWorker[0].money[0] = 9.500;
     
     // Запись 1.2
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[0].numberOfWorkDay[1] = 20;
     // З/П
     company.numberWorkshops[3].numberWorker[0].money[1] = 8.500;
     
     // Запись 1.3
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[0].numberOfWorkDay[2] = 20;
     // З/П
     company.numberWorkshops[3].numberWorker[0].money[2] = 8.500;
      
     // Запись 1.4
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[0].numberOfWorkDay[3] = 28;
     // З/П
     company.numberWorkshops[3].numberWorker[0].money[3] = 9.750;
     
     // Запись 1.5
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[0].numberOfWorkDay[4] = 10;
     // З/П
     company.numberWorkshops[3].numberWorker[0].money[4] = 4.500;
     
     // Запись 1.6
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[0].numberOfWorkDay[5] = 25;
     // З/П
     company.numberWorkshops[3].numberWorker[0].money[5] = 9.500;
     
     // Запись 1.7
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[0].numberOfWorkDay[6] = 15;
     // З/П
     company.numberWorkshops[3].numberWorker[0].money[6] = 6.500;
     
     // Запись 1.8
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[0].numberOfWorkDay[7] = 25;
     // З/П
     company.numberWorkshops[3].numberWorker[0].money[7] = 9.500;
     
     // Запись 1.9
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[0].numberOfWorkDay[8] = 20;
     // З/П
     company.numberWorkshops[3].numberWorker[0].money[8] = 8.500;
     
     // Запись 1.10
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[0].numberOfWorkDay[9] = 19;
     // З/П
     company.numberWorkshops[3].numberWorker[0].money[9] = 8.250;
     
     // Запись 1.11
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[0].numberOfWorkDay[10] = 25;
     // З/П
     company.numberWorkshops[3].numberWorker[0].money[10] = 9.500;
     
     // Запись 1.12
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[0].numberOfWorkDay[11] = 20;
     // З/П
     company.numberWorkshops[3].numberWorker[0].money[11] = 8.500;
     
     
     // Запись 2.1
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[1].numberOfWorkDay[0] = 13;
     // З/П
     company.numberWorkshops[3].numberWorker[1].money[0] = 14.500;
     
     // Запись 2.2
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[1].numberOfWorkDay[1] = 20;
     // З/П
     company.numberWorkshops[3].numberWorker[1].money[1] = 12.500;
     
     // Запись 2.3
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[1].numberOfWorkDay[2] = 10;
     // З/П
     company.numberWorkshops[3].numberWorker[1].money[2] = 6.750;
      
     // Запись 2.4
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[1].numberOfWorkDay[3] = 28;
     // З/П
     company.numberWorkshops[3].numberWorker[1].money[3] = 16.750;
     
     // Запись 2.5
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[1].numberOfWorkDay[4] = 10;
     // З/П
     company.numberWorkshops[3].numberWorker[1].money[4] = 6.750;
     
     // Запись 2.6
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[1].numberOfWorkDay[5] = 25;
     // З/П
     company.numberWorkshops[3].numberWorker[1].money[5] = 14.500;
     
     // Запись 2.7
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[1].numberOfWorkDay[6] = 15;
     // З/П
     company.numberWorkshops[3].numberWorker[1].money[6] = 7.750;
     
     // Запись 2.8
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[1].numberOfWorkDay[7] = 5;
     // З/П
     company.numberWorkshops[3].numberWorker[1].money[7] = 1.750;
     
     // Запись 2.9
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[1].numberOfWorkDay[8] = 20;
     // З/П
     company.numberWorkshops[3].numberWorker[1].money[8] = 12.500;
     
     // Запись 2.10
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[1].numberOfWorkDay[9] = 19;
     // З/П
     company.numberWorkshops[3].numberWorker[1].money[9] = 11.250;
     
     // Запись 2.11
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[1].numberOfWorkDay[10] = 25;
     // З/П
     company.numberWorkshops[3].numberWorker[1].money[10] = 14.500;
     
     // Запись 2.12
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[1].numberOfWorkDay[11] = 20;
     // З/П
     company.numberWorkshops[3].numberWorker[1].money[11] = 12.500;
     
     
     // Запись 3.1
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[2].numberOfWorkDay[0] = 25;
     // З/П
     company.numberWorkshops[3].numberWorker[2].money[0] = 14.500;
     
     // Запись 3.2
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[2].numberOfWorkDay[1] = 20;
     // З/П
     company.numberWorkshops[3].numberWorker[2].money[1] = 12.500;
     
     // Запись 3.3
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[2].numberOfWorkDay[2] = 10;
     // З/П
     company.numberWorkshops[3].numberWorker[2].money[2] = 6.750;
      
     // Запись 3.4
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[2].numberOfWorkDay[3] = 28;
     // З/П
     company.numberWorkshops[3].numberWorker[2].money[3] = 16.750;
     
     // Запись 3.5
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[2].numberOfWorkDay[4] = 10;
     // З/П
     company.numberWorkshops[3].numberWorker[2].money[4] = 6.750;
     
     // Запись 3.6
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[2].numberOfWorkDay[5] = 25;
     // З/П
     company.numberWorkshops[3].numberWorker[2].money[5] = 14.500;
     
     // Запись 3.7
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[2].numberOfWorkDay[6] = 15;
     // З/П
     company.numberWorkshops[3].numberWorker[2].money[6] = 7.750;
     
     // Запись 3.8
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[2].numberOfWorkDay[7] = 5;
     // З/П
     company.numberWorkshops[3].numberWorker[2].money[7] = 1.750;
     
     // Запись 3.9
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[2].numberOfWorkDay[8] = 20;
     // З/П
     company.numberWorkshops[3].numberWorker[2].money[8] = 12.500;
     
     // Запись 3.10
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[2].numberOfWorkDay[9] = 19;
     // З/П
     company.numberWorkshops[3].numberWorker[2].money[9] = 11.250;
     
     // Запись 3.11
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[2].numberOfWorkDay[10] = 25;
     // З/П
     company.numberWorkshops[3].numberWorker[2].money[10] = 14.500;
     
     // Запись 3.12
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[2].numberOfWorkDay[11] = 20;
     // З/П
     company.numberWorkshops[3].numberWorker[2].money[11] = 12.500;
     
     
     // Запись 4.1
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[3].numberOfWorkDay[0] = 20;
     // З/П
     company.numberWorkshops[3].numberWorker[3].money[0] = 18.500;
     
     // Запись 4.2
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[3].numberOfWorkDay[1] = 20;
     // З/П
     company.numberWorkshops[3].numberWorker[3].money[1] = 12.500;
     
     // Запись 4.3
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[3].numberOfWorkDay[2] = 10;
     // З/П
     company.numberWorkshops[3].numberWorker[3].money[2] = 6.750;
      
     // Запись 4.4
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[3].numberOfWorkDay[3] = 28;
     // З/П
     company.numberWorkshops[3].numberWorker[3].money[3] = 16.750;
     
     // Запись 4.5
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[3].numberOfWorkDay[4] = 10;
     // З/П
     company.numberWorkshops[3].numberWorker[3].money[4] = 6.750;
     
     // Запись 4.6
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[3].numberOfWorkDay[5] = 25;
     // З/П
     company.numberWorkshops[3].numberWorker[3].money[5] = 14.500;
     
     // Запись 4.7
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[3].numberOfWorkDay[6] = 15;
     // З/П
     company.numberWorkshops[3].numberWorker[3].money[6] = 7.750;
     
     // Запись 4.8
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[3].numberOfWorkDay[7] = 5;
     // З/П
     company.numberWorkshops[3].numberWorker[3].money[7] = 1.750;
     
     // Запись 4.9
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[3].numberOfWorkDay[8] = 20;
     // З/П
     company.numberWorkshops[3].numberWorker[3].money[8] = 12.500;
     
     // Запись 4.10
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[3].numberOfWorkDay[9] = 19;
     // З/П
     company.numberWorkshops[3].numberWorker[3].money[9] = 11.250;
     
     // Запись 4.11
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[3].numberOfWorkDay[10] = 25;
     // З/П
     company.numberWorkshops[3].numberWorker[3].money[10] = 14.500;
     
     // Запись 4.12
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[3].numberOfWorkDay[11] = 20;
     // З/П
     company.numberWorkshops[3].numberWorker[3].money[11] = 12.500;
         
     
     // Запись 5.1
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[4].numberOfWorkDay[0] = 12;
     // З/П
     company.numberWorkshops[3].numberWorker[4].money[0] = 6.500;
     
     // Запись 5.2
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[4].numberOfWorkDay[1] = 20;
     // З/П
     company.numberWorkshops[3].numberWorker[4].money[1] = 12.500;
     
     // Запись 5.3
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[4].numberOfWorkDay[2] = 10;
     // З/П
     company.numberWorkshops[3].numberWorker[4].money[2] = 6.750;
      
     // Запись 5.4
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[4].numberOfWorkDay[3] = 28;
     // З/П
     company.numberWorkshops[3].numberWorker[4].money[3] = 16.750;
     
     // Запись 5.5
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[4].numberOfWorkDay[4] = 10;
     // З/П
     company.numberWorkshops[3].numberWorker[4].money[4] = 6.750;
     
     // Запись 5.6
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[4].numberOfWorkDay[5] = 25;
     // З/П
     company.numberWorkshops[3].numberWorker[4].money[5] = 14.500;
     
     // Запись 5.7
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[4].numberOfWorkDay[6] = 15;
     // З/П
     company.numberWorkshops[3].numberWorker[4].money[6] = 7.750;
     
     // Запись 5.8
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[4].numberOfWorkDay[7] = 5;
     // З/П
     company.numberWorkshops[3].numberWorker[4].money[7] = 1.750;
     
     // Запись 5.9
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[4].numberOfWorkDay[8] = 20;
     // З/П
     company.numberWorkshops[3].numberWorker[4].money[8] = 12.500;
     
     // Запись 5.10
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[4].numberOfWorkDay[9] = 19;
     // З/П
     company.numberWorkshops[3].numberWorker[4].money[9] = 11.250;
     
     // Запись 5.11
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[4].numberOfWorkDay[10] = 25;
     // З/П
     company.numberWorkshops[3].numberWorker[4].money[10] = 14.500;
     
     // Запись 5.12
     // Кол-во рабочих дней
     company.numberWorkshops[3].numberWorker[4].numberOfWorkDay[11] = 20;
     // З/П
     company.numberWorkshops[3].numberWorker[4].money[11] = 12.500;
     // Кол-во работников;
     company.countNumberWorkshops = 4;
     company.numberWorkshops[0].countNumberWorker = 5;
     company.numberWorkshops[1].countNumberWorker = 5;
     company.numberWorkshops[2].countNumberWorker = 5;
     company.numberWorkshops[3].countNumberWorker = 5;
     fprintf(fileLogs, "\n\n%s: Запись данных о работниках\n\n", ctime(&realTime));
    
    fclose(fileLogs);
    return company;
}

#endif /* recordDataBase_h */
