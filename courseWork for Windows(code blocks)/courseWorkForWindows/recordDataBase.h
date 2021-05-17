//
//  recordDataBase.h
//  courseWork
//
//  (C) Created by Mikeost corp.
//

#ifndef recordDataBase_h
#define recordDataBase_h

#include "allFunction.h"

// ������ ��-���������
companyStructure defaultRecordArray(companyStructure company);

companyStructure defaultRecordArray(companyStructure company){

    time_t realTime = time(NULL);
    FILE *fileLogs = NULL;
    fileLogs = fopen("logs.txt", "a+t");
     // ������ ��������� "���"

     // �������� �����
     strcpy(company.numberWorkshops[0].nameWorkshop, "���������");
     strcpy(company.numberWorkshops[1].nameWorkshop, "���������������");
     strcpy(company.numberWorkshops[2].nameWorkshop, "����������������");
     strcpy(company.numberWorkshops[3].nameWorkshop, "����������");

     fprintf(fileLogs, "\n\n%s: ������ ������������ ����� ��-���������\n\n", ctime(&realTime));
     // ������ ���������
     // ������ 1.1
     // ���
     strcpy(company.numberWorkshops[0].numberWorker[0].surnameNamePatronymic, "�������� ������ �������");
     strcpy(company.numberWorkshops[0].numberWorker[1].surnameNamePatronymic, "������ ������ ����������");
     strcpy(company.numberWorkshops[0].numberWorker[2].surnameNamePatronymic, "����� ������� ����������");
     strcpy(company.numberWorkshops[0].numberWorker[3].surnameNamePatronymic, "������ ������ ��������");
     strcpy(company.numberWorkshops[0].numberWorker[4].surnameNamePatronymic, "�������� ���� ���������");

     strcpy(company.numberWorkshops[1].numberWorker[0].surnameNamePatronymic, "������ ���� ��������");
     strcpy(company.numberWorkshops[1].numberWorker[1].surnameNamePatronymic, "��������� ���� ��������");
     strcpy(company.numberWorkshops[1].numberWorker[2].surnameNamePatronymic, "������ ����� ���������");
     strcpy(company.numberWorkshops[1].numberWorker[3].surnameNamePatronymic, "������ ����� ������������");
     strcpy(company.numberWorkshops[1].numberWorker[4].surnameNamePatronymic, "�������� ������ �������");

     strcpy(company.numberWorkshops[2].numberWorker[0].surnameNamePatronymic, "����� ��������� ����������");
     strcpy(company.numberWorkshops[2].numberWorker[1].surnameNamePatronymic, "��� ����� ����������");
     strcpy(company.numberWorkshops[2].numberWorker[2].surnameNamePatronymic, "������ ������ ���������");
     strcpy(company.numberWorkshops[2].numberWorker[3].surnameNamePatronymic, "������ ������ ��������");
     strcpy(company.numberWorkshops[2].numberWorker[4].surnameNamePatronymic, "�������� ���� ����������");

     strcpy(company.numberWorkshops[3].numberWorker[0].surnameNamePatronymic, "������� �������� ��������");
     strcpy(company.numberWorkshops[3].numberWorker[1].surnameNamePatronymic, "�������� ���� ������������");
     strcpy(company.numberWorkshops[3].numberWorker[2].surnameNamePatronymic, "������ ���� ��������");
     strcpy(company.numberWorkshops[3].numberWorker[3].surnameNamePatronymic, "������ ��������� �����");
     strcpy(company.numberWorkshops[3].numberWorker[4].surnameNamePatronymic, "���� ��������� ����������");

     fprintf(fileLogs, "\n\n%s: ������ ��� ���������� ��-���������\n\n", ctime(&realTime));
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[0].numberOfWorkDay[0] = 25;
     // �/�
     company.numberWorkshops[0].numberWorker[0].money[0] = 9.500;


     // ������ 1.2
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[0].numberOfWorkDay[1] = 20;
     // �/�
     company.numberWorkshops[0].numberWorker[0].money[1] = 8.500;

     // ������ 1.3
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[0].numberOfWorkDay[2] = 20;
     // �/�
     company.numberWorkshops[0].numberWorker[0].money[2] = 8.500;

     // ������ 1.4
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[0].numberOfWorkDay[3] = 28;
     // �/�
     company.numberWorkshops[0].numberWorker[0].money[3] = 9.750;

     // ������ 1.5
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[0].numberOfWorkDay[4] = 10;
     // �/�
     company.numberWorkshops[0].numberWorker[0].money[4] = 4.500;

     // ������ 1.6
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[0].numberOfWorkDay[5] = 25;
     // �/�
     company.numberWorkshops[0].numberWorker[0].money[5] = 9.500;

     // ������ 1.7
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[0].numberOfWorkDay[6] = 15;
     // �/�
     company.numberWorkshops[0].numberWorker[0].money[6] = 6.500;

     // ������ 1.8
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[0].numberOfWorkDay[7] = 25;
     // �/�
     company.numberWorkshops[0].numberWorker[0].money[7] = 9.500;

     // ������ 1.9
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[0].numberOfWorkDay[8] = 20;
     // �/�
     company.numberWorkshops[0].numberWorker[0].money[8] = 8.500;

     // ������ 1.10
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[0].numberOfWorkDay[9] = 19;
     // �/�
     company.numberWorkshops[0].numberWorker[0].money[9] = 8.250;

     // ������ 1.11
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[0].numberOfWorkDay[10] = 25;
     // �/�
     company.numberWorkshops[0].numberWorker[0].money[10] = 9.500;

     // ������ 1.12
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[0].numberOfWorkDay[11] = 20;
     // �/�
     company.numberWorkshops[0].numberWorker[0].money[11] = 8.500;


     // ������ 2.1
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[1].numberOfWorkDay[0] = 13;
     // �/�
     company.numberWorkshops[0].numberWorker[1].money[0] = 14.500;

     // ������ 2.2
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[1].numberOfWorkDay[1] = 20;
     // �/�
     company.numberWorkshops[0].numberWorker[1].money[1] = 12.500;

     // ������ 2.3
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[1].numberOfWorkDay[2] = 10;
     // �/�
     company.numberWorkshops[0].numberWorker[1].money[2] = 6.750;

     // ������ 2.4
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[1].numberOfWorkDay[3] = 28;
     // �/�
     company.numberWorkshops[0].numberWorker[1].money[3] = 16.750;

     // ������ 2.5
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[1].numberOfWorkDay[4] = 10;
     // �/�
     company.numberWorkshops[0].numberWorker[1].money[4] = 6.750;

     // ������ 2.6
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[1].numberOfWorkDay[5] = 25;
     // �/�
     company.numberWorkshops[0].numberWorker[1].money[5] = 14.500;

     // ������ 2.7
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[1].numberOfWorkDay[6] = 15;
     // �/�
     company.numberWorkshops[0].numberWorker[1].money[6] = 7.750;

     // ������ 2.8
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[1].numberOfWorkDay[7] = 5;
     // �/�
     company.numberWorkshops[0].numberWorker[1].money[7] = 1.750;

     // ������ 2.9
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[1].numberOfWorkDay[8] = 20;
     // �/�
     company.numberWorkshops[0].numberWorker[1].money[8] = 12.500;

     // ������ 2.10
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[1].numberOfWorkDay[9] = 19;
     // �/�
     company.numberWorkshops[0].numberWorker[1].money[9] = 11.250;

     // ������ 2.11
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[1].numberOfWorkDay[10] = 25;
     // �/�
     company.numberWorkshops[0].numberWorker[1].money[10] = 14.500;

     // ������ 2.12
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[1].numberOfWorkDay[11] = 20;
     // �/�
     company.numberWorkshops[0].numberWorker[1].money[11] = 12.500;


     // ������ 3.1
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[2].numberOfWorkDay[0] = 25;
     // �/�
     company.numberWorkshops[0].numberWorker[2].money[0] = 14.500;

     // ������ 3.2
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[2].numberOfWorkDay[1] = 20;
     // �/�
     company.numberWorkshops[0].numberWorker[2].money[1] = 12.500;

     // ������ 3.3
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[2].numberOfWorkDay[2] = 10;
     // �/�
     company.numberWorkshops[0].numberWorker[2].money[2] = 6.750;

     // ������ 3.4
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[2].numberOfWorkDay[3] = 28;
     // �/�
     company.numberWorkshops[0].numberWorker[2].money[3] = 16.750;

     // ������ 3.5
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[2].numberOfWorkDay[4] = 10;
     // �/�
     company.numberWorkshops[0].numberWorker[2].money[4] = 6.750;

     // ������ 3.6
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[2].numberOfWorkDay[5] = 25;
     // �/�
     company.numberWorkshops[0].numberWorker[2].money[5] = 14.500;

     // ������ 3.7
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[2].numberOfWorkDay[6] = 15;
     // �/�
     company.numberWorkshops[0].numberWorker[2].money[6] = 7.750;

     // ������ 3.8
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[2].numberOfWorkDay[7] = 5;
     // �/�
     company.numberWorkshops[0].numberWorker[2].money[7] = 1.750;

     // ������ 3.9
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[2].numberOfWorkDay[8] = 20;
     // �/�
     company.numberWorkshops[0].numberWorker[2].money[8] = 12.500;

     // ������ 3.10
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[2].numberOfWorkDay[9] = 19;
     // �/�
     company.numberWorkshops[0].numberWorker[2].money[9] = 11.250;

     // ������ 3.11
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[2].numberOfWorkDay[10] = 25;
     // �/�
     company.numberWorkshops[0].numberWorker[2].money[10] = 14.500;

     // ������ 3.12
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[2].numberOfWorkDay[11] = 20;
     // �/�
     company.numberWorkshops[0].numberWorker[2].money[11] = 12.500;


     // ������ 4.1
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[3].numberOfWorkDay[0] = 20;
     // �/�
     company.numberWorkshops[0].numberWorker[3].money[0] = 18.500;

     // ������ 4.2
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[3].numberOfWorkDay[1] = 20;
     // �/�
     company.numberWorkshops[0].numberWorker[3].money[1] = 12.500;

     // ������ 4.3
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[3].numberOfWorkDay[2] = 10;
     // �/�
     company.numberWorkshops[0].numberWorker[3].money[2] = 6.750;

     // ������ 4.4
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[3].numberOfWorkDay[3] = 28;
     // �/�
     company.numberWorkshops[0].numberWorker[3].money[3] = 16.750;

     // ������ 4.5
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[3].numberOfWorkDay[4] = 10;
     // �/�
     company.numberWorkshops[0].numberWorker[3].money[4] = 6.750;

     // ������ 4.6
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[3].numberOfWorkDay[5] = 25;
     // �/�
     company.numberWorkshops[0].numberWorker[3].money[5] = 14.500;

     // ������ 4.7
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[3].numberOfWorkDay[6] = 15;
     // �/�
     company.numberWorkshops[0].numberWorker[3].money[6] = 7.750;

     // ������ 4.8
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[3].numberOfWorkDay[7] = 5;
     // �/�
     company.numberWorkshops[0].numberWorker[3].money[7] = 1.750;

     // ������ 4.9
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[3].numberOfWorkDay[8] = 20;
     // �/�
     company.numberWorkshops[0].numberWorker[3].money[8] = 12.500;

     // ������ 4.10
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[3].numberOfWorkDay[9] = 19;
     // �/�
     company.numberWorkshops[0].numberWorker[3].money[9] = 11.250;

     // ������ 4.11
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[3].numberOfWorkDay[10] = 25;
     // �/�
     company.numberWorkshops[0].numberWorker[3].money[10] = 14.500;

     // ������ 4.12
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[3].numberOfWorkDay[11] = 20;
     // �/�
     company.numberWorkshops[0].numberWorker[3].money[11] = 12.500;


     // ������ 5.1
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[4].numberOfWorkDay[0] = 12;
     // �/�
     company.numberWorkshops[0].numberWorker[4].money[0] = 6.500;

     // ������ 5.2
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[4].numberOfWorkDay[1] = 20;
     // �/�
     company.numberWorkshops[0].numberWorker[4].money[1] = 12.500;

     // ������ 5.3
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[4].numberOfWorkDay[2] = 10;
     // �/�
     company.numberWorkshops[0].numberWorker[4].money[2] = 6.750;

     // ������ 5.4
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[4].numberOfWorkDay[3] = 28;
     // �/�
     company.numberWorkshops[0].numberWorker[4].money[3] = 16.750;

     // ������ 5.5
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[4].numberOfWorkDay[4] = 10;
     // �/�
     company.numberWorkshops[0].numberWorker[4].money[4] = 6.750;

     // ������ 5.6
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[4].numberOfWorkDay[5] = 25;
     // �/�
     company.numberWorkshops[0].numberWorker[4].money[5] = 14.500;

     // ������ 5.7
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[4].numberOfWorkDay[6] = 15;
     // �/�
     company.numberWorkshops[0].numberWorker[4].money[6] = 7.750;

     // ������ 5.8
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[4].numberOfWorkDay[7] = 5;
     // �/�
     company.numberWorkshops[0].numberWorker[4].money[7] = 1.750;

     // ������ 5.9
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[4].numberOfWorkDay[8] = 20;
     // �/�
     company.numberWorkshops[0].numberWorker[4].money[8] = 12.500;

     // ������ 5.10
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[4].numberOfWorkDay[9] = 19;
     // �/�
     company.numberWorkshops[0].numberWorker[4].money[9] = 11.250;

     // ������ 5.11
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[4].numberOfWorkDay[10] = 25;
     // �/�
     company.numberWorkshops[0].numberWorker[4].money[10] = 14.500;

     // ������ 5.12
     // ���-�� ������� ����
     company.numberWorkshops[0].numberWorker[4].numberOfWorkDay[11] = 20;
     // �/�
     company.numberWorkshops[0].numberWorker[4].money[11] = 12.500;


     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[0].numberOfWorkDay[0] = 25;
     // �/�
     company.numberWorkshops[1].numberWorker[0].money[0] = 9.500;

     // ������ 1.2
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[0].numberOfWorkDay[1] = 20;
     // �/�
     company.numberWorkshops[1].numberWorker[0].money[1] = 8.500;

     // ������ 1.3
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[0].numberOfWorkDay[2] = 20;
     // �/�
     company.numberWorkshops[1].numberWorker[0].money[2] = 8.500;

     // ������ 1.4
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[0].numberOfWorkDay[3] = 28;
     // �/�
     company.numberWorkshops[1].numberWorker[0].money[3] = 9.750;

     // ������ 1.5
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[0].numberOfWorkDay[4] = 10;
     // �/�
     company.numberWorkshops[1].numberWorker[0].money[4] = 4.500;

     // ������ 1.6
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[0].numberOfWorkDay[5] = 25;
     // �/�
     company.numberWorkshops[1].numberWorker[0].money[5] = 9.500;

     // ������ 1.7
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[0].numberOfWorkDay[6] = 15;
     // �/�
     company.numberWorkshops[1].numberWorker[0].money[6] = 6.500;

     // ������ 1.8
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[0].numberOfWorkDay[7] = 25;
     // �/�
     company.numberWorkshops[1].numberWorker[0].money[7] = 9.500;

     // ������ 1.9
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[0].numberOfWorkDay[8] = 20;
     // �/�
     company.numberWorkshops[1].numberWorker[0].money[8] = 8.500;

     // ������ 1.10
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[0].numberOfWorkDay[9] = 19;
     // �/�
     company.numberWorkshops[1].numberWorker[0].money[9] = 8.250;

     // ������ 1.11
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[0].numberOfWorkDay[10] = 25;
     // �/�
     company.numberWorkshops[1].numberWorker[0].money[10] = 9.500;

     // ������ 1.12
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[0].numberOfWorkDay[11] = 20;
     // �/�
     company.numberWorkshops[1].numberWorker[0].money[11] = 8.500;


     // ������ 2.1
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[1].numberOfWorkDay[0] = 13;
     // �/�
     company.numberWorkshops[1].numberWorker[1].money[0] = 14.500;

     // ������ 2.2
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[1].numberOfWorkDay[1] = 20;
     // �/�
     company.numberWorkshops[1].numberWorker[1].money[1] = 12.500;

     // ������ 2.3
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[1].numberOfWorkDay[2] = 10;
     // �/�
     company.numberWorkshops[1].numberWorker[1].money[2] = 6.750;

     // ������ 2.4
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[1].numberOfWorkDay[3] = 28;
     // �/�
     company.numberWorkshops[1].numberWorker[1].money[3] = 16.750;

     // ������ 2.5
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[1].numberOfWorkDay[4] = 10;
     // �/�
     company.numberWorkshops[1].numberWorker[1].money[4] = 6.750;

     // ������ 2.6
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[1].numberOfWorkDay[5] = 25;
     // �/�
     company.numberWorkshops[1].numberWorker[1].money[5] = 14.500;

     // ������ 2.7
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[1].numberOfWorkDay[6] = 15;
     // �/�
     company.numberWorkshops[1].numberWorker[1].money[6] = 7.750;

     // ������ 2.8
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[1].numberOfWorkDay[7] = 5;
     // �/�
     company.numberWorkshops[1].numberWorker[1].money[7] = 1.750;

     // ������ 2.9
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[1].numberOfWorkDay[8] = 20;
     // �/�
     company.numberWorkshops[1].numberWorker[1].money[8] = 12.500;

     // ������ 2.10
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[1].numberOfWorkDay[9] = 19;
     // �/�
     company.numberWorkshops[1].numberWorker[1].money[9] = 11.250;

     // ������ 2.11
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[1].numberOfWorkDay[10] = 25;
     // �/�
     company.numberWorkshops[1].numberWorker[1].money[10] = 14.500;

     // ������ 2.12
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[1].numberOfWorkDay[11] = 20;
     // �/�
     company.numberWorkshops[1].numberWorker[1].money[11] = 12.500;


     // ������ 3.1
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[2].numberOfWorkDay[0] = 25;
     // �/�
     company.numberWorkshops[1].numberWorker[2].money[0] = 14.500;

     // ������ 3.2
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[2].numberOfWorkDay[1] = 20;
     // �/�
     company.numberWorkshops[1].numberWorker[2].money[1] = 12.500;

     // ������ 3.3
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[2].numberOfWorkDay[2] = 10;
     // �/�
     company.numberWorkshops[1].numberWorker[2].money[2] = 6.750;

     // ������ 3.4
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[2].numberOfWorkDay[3] = 28;
     // �/�
     company.numberWorkshops[1].numberWorker[2].money[3] = 16.750;

     // ������ 3.5
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[2].numberOfWorkDay[4] = 10;
     // �/�
     company.numberWorkshops[1].numberWorker[2].money[4] = 6.750;

     // ������ 3.6
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[2].numberOfWorkDay[5] = 25;
     // �/�
     company.numberWorkshops[1].numberWorker[2].money[5] = 14.500;

     // ������ 3.7
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[2].numberOfWorkDay[6] = 15;
     // �/�
     company.numberWorkshops[1].numberWorker[2].money[6] = 7.750;

     // ������ 3.8
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[2].numberOfWorkDay[7] = 5;
     // �/�
     company.numberWorkshops[1].numberWorker[2].money[7] = 1.750;

     // ������ 3.9
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[2].numberOfWorkDay[8] = 20;
     // �/�
     company.numberWorkshops[1].numberWorker[2].money[8] = 12.500;

     // ������ 3.10
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[2].numberOfWorkDay[9] = 19;
     // �/�
     company.numberWorkshops[1].numberWorker[2].money[9] = 11.250;

     // ������ 3.11
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[2].numberOfWorkDay[10] = 25;
     // �/�
     company.numberWorkshops[1].numberWorker[2].money[10] = 14.500;

     // ������ 3.12
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[2].numberOfWorkDay[11] = 20;
     // �/�
     company.numberWorkshops[1].numberWorker[2].money[11] = 12.500;


     // ������ 4.1
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[3].numberOfWorkDay[0] = 20;
     // �/�
     company.numberWorkshops[1].numberWorker[3].money[0] = 18.500;

     // ������ 4.2
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[3].numberOfWorkDay[1] = 20;
     // �/�
     company.numberWorkshops[1].numberWorker[3].money[1] = 12.500;

     // ������ 4.3
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[3].numberOfWorkDay[2] = 10;
     // �/�
     company.numberWorkshops[1].numberWorker[3].money[2] = 6.750;

     // ������ 4.4
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[3].numberOfWorkDay[3] = 28;
     // �/�
     company.numberWorkshops[1].numberWorker[3].money[3] = 16.750;

     // ������ 4.5
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[3].numberOfWorkDay[4] = 10;
     // �/�
     company.numberWorkshops[1].numberWorker[3].money[4] = 6.750;

     // ������ 4.6
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[3].numberOfWorkDay[5] = 25;
     // �/�
     company.numberWorkshops[1].numberWorker[3].money[5] = 14.500;

     // ������ 4.7
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[3].numberOfWorkDay[6] = 15;
     // �/�
     company.numberWorkshops[1].numberWorker[3].money[6] = 7.750;

     // ������ 4.8
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[3].numberOfWorkDay[7] = 5;
     // �/�
     company.numberWorkshops[1].numberWorker[3].money[7] = 1.750;

     // ������ 4.9
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[3].numberOfWorkDay[8] = 20;
     // �/�
     company.numberWorkshops[1].numberWorker[3].money[8] = 12.500;

     // ������ 4.10
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[3].numberOfWorkDay[9] = 19;
     // �/�
     company.numberWorkshops[1].numberWorker[3].money[9] = 11.250;

     // ������ 4.11
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[3].numberOfWorkDay[10] = 25;
     // �/�
     company.numberWorkshops[1].numberWorker[3].money[10] = 14.500;

     // ������ 4.12
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[3].numberOfWorkDay[11] = 20;
     // �/�
     company.numberWorkshops[1].numberWorker[3].money[11] = 12.500;


     // ������ 5.1
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[4].numberOfWorkDay[0] = 12;
     // �/�
     company.numberWorkshops[1].numberWorker[4].money[0] = 6.500;

     // ������ 5.2
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[4].numberOfWorkDay[1] = 20;
     // �/�
     company.numberWorkshops[1].numberWorker[4].money[1] = 12.500;

     // ������ 5.3
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[4].numberOfWorkDay[2] = 10;
     // �/�
     company.numberWorkshops[1].numberWorker[4].money[2] = 6.750;

     // ������ 5.4
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[4].numberOfWorkDay[3] = 28;
     // �/�
     company.numberWorkshops[1].numberWorker[4].money[3] = 16.750;

     // ������ 5.5
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[4].numberOfWorkDay[4] = 10;
     // �/�
     company.numberWorkshops[1].numberWorker[4].money[4] = 6.750;

     // ������ 5.6
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[4].numberOfWorkDay[5] = 25;
     // �/�
     company.numberWorkshops[1].numberWorker[4].money[5] = 14.500;

     // ������ 5.7
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[4].numberOfWorkDay[6] = 15;
     // �/�
     company.numberWorkshops[1].numberWorker[4].money[6] = 7.750;

     // ������ 5.8
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[4].numberOfWorkDay[7] = 5;
     // �/�
     company.numberWorkshops[1].numberWorker[4].money[7] = 1.750;

     // ������ 5.9
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[4].numberOfWorkDay[8] = 20;
     // �/�
     company.numberWorkshops[1].numberWorker[4].money[8] = 12.500;

     // ������ 5.10
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[4].numberOfWorkDay[9] = 19;
     // �/�
     company.numberWorkshops[1].numberWorker[4].money[9] = 11.250;

     // ������ 5.11
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[4].numberOfWorkDay[10] = 25;
     // �/�
     company.numberWorkshops[1].numberWorker[4].money[10] = 14.500;

     // ������ 5.12
     // ���-�� ������� ����
     company.numberWorkshops[1].numberWorker[4].numberOfWorkDay[11] = 20;
     // �/�
     company.numberWorkshops[1].numberWorker[4].money[11] = 12.500;

     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[0].numberOfWorkDay[0] = 25;
     // �/�
     company.numberWorkshops[2].numberWorker[0].money[0] = 9.500;

     // ������ 1.2
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[0].numberOfWorkDay[1] = 20;
     // �/�
     company.numberWorkshops[2].numberWorker[0].money[1] = 8.500;

     // ������ 1.3
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[0].numberOfWorkDay[2] = 20;
     // �/�
     company.numberWorkshops[2].numberWorker[0].money[2] = 8.500;

     // ������ 1.4
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[0].numberOfWorkDay[3] = 28;
     // �/�
     company.numberWorkshops[2].numberWorker[0].money[3] = 9.750;

     // ������ 1.5
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[0].numberOfWorkDay[4] = 10;
     // �/�
     company.numberWorkshops[2].numberWorker[0].money[4] = 4.500;

     // ������ 1.6
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[0].numberOfWorkDay[5] = 25;
     // �/�
     company.numberWorkshops[2].numberWorker[0].money[5] = 9.500;

     // ������ 1.7
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[0].numberOfWorkDay[6] = 15;
     // �/�
     company.numberWorkshops[2].numberWorker[0].money[6] = 6.500;

     // ������ 1.8
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[0].numberOfWorkDay[7] = 25;
     // �/�
     company.numberWorkshops[2].numberWorker[0].money[7] = 9.500;

     // ������ 1.9
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[0].numberOfWorkDay[8] = 20;
     // �/�
     company.numberWorkshops[2].numberWorker[0].money[8] = 8.500;

     // ������ 1.10
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[0].numberOfWorkDay[9] = 19;
     // �/�
     company.numberWorkshops[2].numberWorker[0].money[9] = 8.250;

     // ������ 1.11
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[0].numberOfWorkDay[10] = 25;
     // �/�
     company.numberWorkshops[2].numberWorker[0].money[10] = 9.500;

     // ������ 1.12
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[0].numberOfWorkDay[11] = 20;
     // �/�
     company.numberWorkshops[2].numberWorker[0].money[11] = 8.500;


     // ������ 2.1
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[1].numberOfWorkDay[0] = 13;
     // �/�
     company.numberWorkshops[2].numberWorker[1].money[0] = 14.500;

     // ������ 2.2
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[1].numberOfWorkDay[1] = 20;
     // �/�
     company.numberWorkshops[2].numberWorker[1].money[1] = 12.500;

     // ������ 2.3
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[1].numberOfWorkDay[2] = 10;
     // �/�
     company.numberWorkshops[2].numberWorker[1].money[2] = 6.750;

     // ������ 2.4
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[1].numberOfWorkDay[3] = 28;
     // �/�
     company.numberWorkshops[2].numberWorker[1].money[3] = 16.750;

     // ������ 2.5
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[1].numberOfWorkDay[4] = 10;
     // �/�
     company.numberWorkshops[2].numberWorker[1].money[4] = 6.750;

     // ������ 2.6
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[1].numberOfWorkDay[5] = 25;
     // �/�
     company.numberWorkshops[2].numberWorker[1].money[5] = 14.500;

     // ������ 2.7
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[1].numberOfWorkDay[6] = 15;
     // �/�
     company.numberWorkshops[2].numberWorker[1].money[6] = 7.750;

     // ������ 2.8
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[1].numberOfWorkDay[7] = 5;
     // �/�
     company.numberWorkshops[2].numberWorker[1].money[7] = 1.750;

     // ������ 2.9
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[1].numberOfWorkDay[8] = 20;
     // �/�
     company.numberWorkshops[2].numberWorker[1].money[8] = 12.500;

     // ������ 2.10
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[1].numberOfWorkDay[9] = 19;
     // �/�
     company.numberWorkshops[2].numberWorker[1].money[9] = 11.250;

     // ������ 2.11
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[1].numberOfWorkDay[10] = 25;
     // �/�
     company.numberWorkshops[2].numberWorker[1].money[10] = 14.500;

     // ������ 2.12
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[1].numberOfWorkDay[11] = 20;
     // �/�
     company.numberWorkshops[2].numberWorker[1].money[11] = 12.500;


     // ������ 3.1
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[2].numberOfWorkDay[0] = 25;
     // �/�
     company.numberWorkshops[2].numberWorker[2].money[0] = 14.500;

     // ������ 3.2
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[2].numberOfWorkDay[1] = 20;
     // �/�
     company.numberWorkshops[2].numberWorker[2].money[1] = 12.500;

     // ������ 3.3
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[2].numberOfWorkDay[2] = 10;
     // �/�
     company.numberWorkshops[2].numberWorker[2].money[2] = 6.750;

     // ������ 3.4
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[2].numberOfWorkDay[3] = 28;
     // �/�
     company.numberWorkshops[2].numberWorker[2].money[3] = 16.750;

     // ������ 3.5
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[2].numberOfWorkDay[4] = 10;
     // �/�
     company.numberWorkshops[2].numberWorker[2].money[4] = 6.750;

     // ������ 3.6
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[2].numberOfWorkDay[5] = 25;
     // �/�
     company.numberWorkshops[2].numberWorker[2].money[5] = 14.500;

     // ������ 3.7
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[2].numberOfWorkDay[6] = 15;
     // �/�
     company.numberWorkshops[2].numberWorker[2].money[6] = 7.750;

     // ������ 3.8
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[2].numberOfWorkDay[7] = 5;
     // �/�
     company.numberWorkshops[2].numberWorker[2].money[7] = 1.750;

     // ������ 3.9
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[2].numberOfWorkDay[8] = 20;
     // �/�
     company.numberWorkshops[2].numberWorker[2].money[8] = 12.500;

     // ������ 3.10
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[2].numberOfWorkDay[9] = 19;
     // �/�
     company.numberWorkshops[2].numberWorker[2].money[9] = 11.250;

     // ������ 3.11
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[2].numberOfWorkDay[10] = 25;
     // �/�
     company.numberWorkshops[2].numberWorker[2].money[10] = 14.500;

     // ������ 3.12
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[2].numberOfWorkDay[11] = 20;
     // �/�
     company.numberWorkshops[2].numberWorker[2].money[11] = 12.500;


     // ������ 4.1
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[3].numberOfWorkDay[0] = 20;
     // �/�
     company.numberWorkshops[2].numberWorker[3].money[0] = 18.500;

     // ������ 4.2
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[3].numberOfWorkDay[1] = 20;
     // �/�
     company.numberWorkshops[2].numberWorker[3].money[1] = 12.500;

     // ������ 4.3
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[3].numberOfWorkDay[2] = 10;
     // �/�
     company.numberWorkshops[2].numberWorker[3].money[2] = 6.750;

     // ������ 4.4
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[3].numberOfWorkDay[3] = 28;
     // �/�
     company.numberWorkshops[2].numberWorker[3].money[3] = 16.750;

     // ������ 4.5
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[3].numberOfWorkDay[4] = 10;
     // �/�
     company.numberWorkshops[2].numberWorker[3].money[4] = 6.750;

     // ������ 4.6
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[3].numberOfWorkDay[5] = 25;
     // �/�
     company.numberWorkshops[2].numberWorker[3].money[5] = 14.500;

     // ������ 4.7
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[3].numberOfWorkDay[6] = 15;
     // �/�
     company.numberWorkshops[2].numberWorker[3].money[6] = 7.750;

     // ������ 4.8
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[3].numberOfWorkDay[7] = 5;
     // �/�
     company.numberWorkshops[2].numberWorker[3].money[7] = 1.750;

     // ������ 4.9
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[3].numberOfWorkDay[8] = 20;
     // �/�
     company.numberWorkshops[2].numberWorker[3].money[8] = 12.500;

     // ������ 4.10
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[3].numberOfWorkDay[9] = 19;
     // �/�
     company.numberWorkshops[2].numberWorker[3].money[9] = 11.250;

     // ������ 4.11
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[3].numberOfWorkDay[10] = 25;
     // �/�
     company.numberWorkshops[2].numberWorker[3].money[10] = 14.500;

     // ������ 4.12
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[3].numberOfWorkDay[11] = 20;
     // �/�
     company.numberWorkshops[2].numberWorker[3].money[11] = 12.500;


     // ������ 5.1
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[4].numberOfWorkDay[0] = 12;
     // �/�
     company.numberWorkshops[2].numberWorker[4].money[0] = 6.500;

     // ������ 5.2
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[4].numberOfWorkDay[1] = 20;
     // �/�
     company.numberWorkshops[2].numberWorker[4].money[1] = 12.500;

     // ������ 5.3
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[4].numberOfWorkDay[2] = 10;
     // �/�
     company.numberWorkshops[2].numberWorker[4].money[2] = 6.750;

     // ������ 5.4
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[4].numberOfWorkDay[3] = 28;
     // �/�
     company.numberWorkshops[2].numberWorker[4].money[3] = 16.750;

     // ������ 5.5
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[4].numberOfWorkDay[4] = 10;
     // �/�
     company.numberWorkshops[2].numberWorker[4].money[4] = 6.750;

     // ������ 5.6
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[4].numberOfWorkDay[5] = 25;
     // �/�
     company.numberWorkshops[2].numberWorker[4].money[5] = 14.500;

     // ������ 5.7
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[4].numberOfWorkDay[6] = 15;
     // �/�
     company.numberWorkshops[2].numberWorker[4].money[6] = 7.750;

     // ������ 5.8
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[4].numberOfWorkDay[7] = 5;
     // �/�
     company.numberWorkshops[2].numberWorker[4].money[7] = 1.750;

     // ������ 5.9
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[4].numberOfWorkDay[8] = 20;
     // �/�
     company.numberWorkshops[2].numberWorker[4].money[8] = 12.500;

     // ������ 5.10
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[4].numberOfWorkDay[9] = 19;
     // �/�
     company.numberWorkshops[2].numberWorker[4].money[9] = 11.250;

     // ������ 5.11
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[4].numberOfWorkDay[10] = 25;
     // �/�
     company.numberWorkshops[2].numberWorker[4].money[10] = 14.500;

     // ������ 5.12
     // ���-�� ������� ����
     company.numberWorkshops[2].numberWorker[4].numberOfWorkDay[11] = 20;
     // �/�
     company.numberWorkshops[2].numberWorker[4].money[11] = 12.500;

     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[0].numberOfWorkDay[0] = 25;
     // �/�
     company.numberWorkshops[3].numberWorker[0].money[0] = 9.500;

     // ������ 1.2
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[0].numberOfWorkDay[1] = 20;
     // �/�
     company.numberWorkshops[3].numberWorker[0].money[1] = 8.500;

     // ������ 1.3
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[0].numberOfWorkDay[2] = 20;
     // �/�
     company.numberWorkshops[3].numberWorker[0].money[2] = 8.500;

     // ������ 1.4
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[0].numberOfWorkDay[3] = 28;
     // �/�
     company.numberWorkshops[3].numberWorker[0].money[3] = 9.750;

     // ������ 1.5
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[0].numberOfWorkDay[4] = 10;
     // �/�
     company.numberWorkshops[3].numberWorker[0].money[4] = 4.500;

     // ������ 1.6
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[0].numberOfWorkDay[5] = 25;
     // �/�
     company.numberWorkshops[3].numberWorker[0].money[5] = 9.500;

     // ������ 1.7
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[0].numberOfWorkDay[6] = 15;
     // �/�
     company.numberWorkshops[3].numberWorker[0].money[6] = 6.500;

     // ������ 1.8
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[0].numberOfWorkDay[7] = 25;
     // �/�
     company.numberWorkshops[3].numberWorker[0].money[7] = 9.500;

     // ������ 1.9
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[0].numberOfWorkDay[8] = 20;
     // �/�
     company.numberWorkshops[3].numberWorker[0].money[8] = 8.500;

     // ������ 1.10
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[0].numberOfWorkDay[9] = 19;
     // �/�
     company.numberWorkshops[3].numberWorker[0].money[9] = 8.250;

     // ������ 1.11
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[0].numberOfWorkDay[10] = 25;
     // �/�
     company.numberWorkshops[3].numberWorker[0].money[10] = 9.500;

     // ������ 1.12
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[0].numberOfWorkDay[11] = 20;
     // �/�
     company.numberWorkshops[3].numberWorker[0].money[11] = 8.500;


     // ������ 2.1
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[1].numberOfWorkDay[0] = 13;
     // �/�
     company.numberWorkshops[3].numberWorker[1].money[0] = 14.500;

     // ������ 2.2
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[1].numberOfWorkDay[1] = 20;
     // �/�
     company.numberWorkshops[3].numberWorker[1].money[1] = 12.500;

     // ������ 2.3
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[1].numberOfWorkDay[2] = 10;
     // �/�
     company.numberWorkshops[3].numberWorker[1].money[2] = 6.750;

     // ������ 2.4
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[1].numberOfWorkDay[3] = 28;
     // �/�
     company.numberWorkshops[3].numberWorker[1].money[3] = 16.750;

     // ������ 2.5
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[1].numberOfWorkDay[4] = 10;
     // �/�
     company.numberWorkshops[3].numberWorker[1].money[4] = 6.750;

     // ������ 2.6
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[1].numberOfWorkDay[5] = 25;
     // �/�
     company.numberWorkshops[3].numberWorker[1].money[5] = 14.500;

     // ������ 2.7
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[1].numberOfWorkDay[6] = 15;
     // �/�
     company.numberWorkshops[3].numberWorker[1].money[6] = 7.750;

     // ������ 2.8
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[1].numberOfWorkDay[7] = 5;
     // �/�
     company.numberWorkshops[3].numberWorker[1].money[7] = 1.750;

     // ������ 2.9
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[1].numberOfWorkDay[8] = 20;
     // �/�
     company.numberWorkshops[3].numberWorker[1].money[8] = 12.500;

     // ������ 2.10
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[1].numberOfWorkDay[9] = 19;
     // �/�
     company.numberWorkshops[3].numberWorker[1].money[9] = 11.250;

     // ������ 2.11
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[1].numberOfWorkDay[10] = 25;
     // �/�
     company.numberWorkshops[3].numberWorker[1].money[10] = 14.500;

     // ������ 2.12
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[1].numberOfWorkDay[11] = 20;
     // �/�
     company.numberWorkshops[3].numberWorker[1].money[11] = 12.500;


     // ������ 3.1
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[2].numberOfWorkDay[0] = 25;
     // �/�
     company.numberWorkshops[3].numberWorker[2].money[0] = 14.500;

     // ������ 3.2
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[2].numberOfWorkDay[1] = 20;
     // �/�
     company.numberWorkshops[3].numberWorker[2].money[1] = 12.500;

     // ������ 3.3
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[2].numberOfWorkDay[2] = 10;
     // �/�
     company.numberWorkshops[3].numberWorker[2].money[2] = 6.750;

     // ������ 3.4
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[2].numberOfWorkDay[3] = 28;
     // �/�
     company.numberWorkshops[3].numberWorker[2].money[3] = 16.750;

     // ������ 3.5
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[2].numberOfWorkDay[4] = 10;
     // �/�
     company.numberWorkshops[3].numberWorker[2].money[4] = 6.750;

     // ������ 3.6
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[2].numberOfWorkDay[5] = 25;
     // �/�
     company.numberWorkshops[3].numberWorker[2].money[5] = 14.500;

     // ������ 3.7
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[2].numberOfWorkDay[6] = 15;
     // �/�
     company.numberWorkshops[3].numberWorker[2].money[6] = 7.750;

     // ������ 3.8
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[2].numberOfWorkDay[7] = 5;
     // �/�
     company.numberWorkshops[3].numberWorker[2].money[7] = 1.750;

     // ������ 3.9
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[2].numberOfWorkDay[8] = 20;
     // �/�
     company.numberWorkshops[3].numberWorker[2].money[8] = 12.500;

     // ������ 3.10
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[2].numberOfWorkDay[9] = 19;
     // �/�
     company.numberWorkshops[3].numberWorker[2].money[9] = 11.250;

     // ������ 3.11
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[2].numberOfWorkDay[10] = 25;
     // �/�
     company.numberWorkshops[3].numberWorker[2].money[10] = 14.500;

     // ������ 3.12
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[2].numberOfWorkDay[11] = 20;
     // �/�
     company.numberWorkshops[3].numberWorker[2].money[11] = 12.500;


     // ������ 4.1
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[3].numberOfWorkDay[0] = 20;
     // �/�
     company.numberWorkshops[3].numberWorker[3].money[0] = 18.500;

     // ������ 4.2
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[3].numberOfWorkDay[1] = 20;
     // �/�
     company.numberWorkshops[3].numberWorker[3].money[1] = 12.500;

     // ������ 4.3
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[3].numberOfWorkDay[2] = 10;
     // �/�
     company.numberWorkshops[3].numberWorker[3].money[2] = 6.750;

     // ������ 4.4
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[3].numberOfWorkDay[3] = 28;
     // �/�
     company.numberWorkshops[3].numberWorker[3].money[3] = 16.750;

     // ������ 4.5
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[3].numberOfWorkDay[4] = 10;
     // �/�
     company.numberWorkshops[3].numberWorker[3].money[4] = 6.750;

     // ������ 4.6
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[3].numberOfWorkDay[5] = 25;
     // �/�
     company.numberWorkshops[3].numberWorker[3].money[5] = 14.500;

     // ������ 4.7
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[3].numberOfWorkDay[6] = 15;
     // �/�
     company.numberWorkshops[3].numberWorker[3].money[6] = 7.750;

     // ������ 4.8
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[3].numberOfWorkDay[7] = 5;
     // �/�
     company.numberWorkshops[3].numberWorker[3].money[7] = 1.750;

     // ������ 4.9
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[3].numberOfWorkDay[8] = 20;
     // �/�
     company.numberWorkshops[3].numberWorker[3].money[8] = 12.500;

     // ������ 4.10
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[3].numberOfWorkDay[9] = 19;
     // �/�
     company.numberWorkshops[3].numberWorker[3].money[9] = 11.250;

     // ������ 4.11
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[3].numberOfWorkDay[10] = 25;
     // �/�
     company.numberWorkshops[3].numberWorker[3].money[10] = 14.500;

     // ������ 4.12
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[3].numberOfWorkDay[11] = 20;
     // �/�
     company.numberWorkshops[3].numberWorker[3].money[11] = 12.500;


     // ������ 5.1
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[4].numberOfWorkDay[0] = 12;
     // �/�
     company.numberWorkshops[3].numberWorker[4].money[0] = 6.500;

     // ������ 5.2
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[4].numberOfWorkDay[1] = 20;
     // �/�
     company.numberWorkshops[3].numberWorker[4].money[1] = 12.500;

     // ������ 5.3
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[4].numberOfWorkDay[2] = 10;
     // �/�
     company.numberWorkshops[3].numberWorker[4].money[2] = 6.750;

     // ������ 5.4
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[4].numberOfWorkDay[3] = 28;
     // �/�
     company.numberWorkshops[3].numberWorker[4].money[3] = 16.750;

     // ������ 5.5
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[4].numberOfWorkDay[4] = 10;
     // �/�
     company.numberWorkshops[3].numberWorker[4].money[4] = 6.750;

     // ������ 5.6
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[4].numberOfWorkDay[5] = 25;
     // �/�
     company.numberWorkshops[3].numberWorker[4].money[5] = 14.500;

     // ������ 5.7
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[4].numberOfWorkDay[6] = 15;
     // �/�
     company.numberWorkshops[3].numberWorker[4].money[6] = 7.750;

     // ������ 5.8
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[4].numberOfWorkDay[7] = 5;
     // �/�
     company.numberWorkshops[3].numberWorker[4].money[7] = 1.750;

     // ������ 5.9
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[4].numberOfWorkDay[8] = 20;
     // �/�
     company.numberWorkshops[3].numberWorker[4].money[8] = 12.500;

     // ������ 5.10
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[4].numberOfWorkDay[9] = 19;
     // �/�
     company.numberWorkshops[3].numberWorker[4].money[9] = 11.250;

     // ������ 5.11
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[4].numberOfWorkDay[10] = 25;
     // �/�
     company.numberWorkshops[3].numberWorker[4].money[10] = 14.500;

     // ������ 5.12
     // ���-�� ������� ����
     company.numberWorkshops[3].numberWorker[4].numberOfWorkDay[11] = 20;
     // �/�
     company.numberWorkshops[3].numberWorker[4].money[11] = 12.500;
     // ���-�� ����������;
     company.countNumberWorkshops = 4;
     company.numberWorkshops[0].countNumberWorker = 5;
     company.numberWorkshops[1].countNumberWorker = 5;
     company.numberWorkshops[2].countNumberWorker = 5;
     company.numberWorkshops[3].countNumberWorker = 5;
     fprintf(fileLogs, "\n\n%s: ������ ������ � ����������\n\n", ctime(&realTime));

    fclose(fileLogs);
    return company;
}

#endif /* recordDataBase_h */
