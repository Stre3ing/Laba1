#include <iostream>
#include <stdio.h>
#include <time.h>
#include <locale>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
		
	// ������� 1
	int arr[10];

	for (int i = 0; i != 10; i++) {
		arr[i] = rand() % 101;
		cout << arr[i] << endl;
	}

	int flag_min = arr[0];
	int flag_max = arr[0];

	for (int i = 1; i != 10; i++) {
		if (flag_min > arr[i]) flag_min = arr[i];
		if (flag_max < arr[i]) flag_max = arr[i];
	}

	cout << "���� ������� = " << flag_max << endl;
	cout << "��� ������� = " << flag_min << endl;

	//������� 2
	int ar[10];
	printf("������, ����������� ���������� �������:");

	for (int i = 0; i < 10; i++)
	{
		ar[i] = rand() % 100;
		printf(" %d", ar[i]);
	}

	printf("\n");
	//������� 3
	int c;

	printf("������� ������ �������: ");
	scanf_s("%d", &c);
	int *A = (int*)malloc(c * sizeof(int));
	printf("������ ������������� �������: ");

	for (int i = 0; i < c; i++)
	{
		A[i] = rand() % 100;
		printf(" %d", A[i]);
	}

	printf("\n");
	//������� 4
	int arr2[10][10];

	for (int i = 0; i != 10; i++) {
		for (int j = 0; j != 10; j++) {
			arr2[i][j] = rand() % 101;
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}

	int sum_col = 0;
	int sum_row = 0;
	int sum_d1 = 0;
	int sum_d2 = 0;

	for (int i = 0; i != 10; i++) {
		for (int j = 0; j != 10; j++) {
			sum_col += arr2[i][j];
		}
		cout << "������ �" << i << " = " << sum_col << endl;
		sum_col = 0;
	}

	for (int i = 0; i != 10; i++) {
		for (int j = 0; j != 10; j++) {
			sum_row += arr2[j][i];
		}
		cout << "������� �" << i << " = " << sum_row << endl;
		sum_row = 0;
	}
	for (int i = 0; i != 10; i++) {
		sum_d1 += arr2[i][i];
		sum_d2 += arr2[i][9-i];
	}
	printf("d1 = %d, d2 = %d\n", sum_d1, sum_d2);

	//������� 5
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	struct student {
		char famil[20], name[20], facult[20];
	}stud[3];

	char s1[20];
	char s2[20];
	char s3[20];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("������� ��� ��������:\n");
		scanf_s("%s", &stud[i].famil, 20);
		printf("������� ������� �������� %s:\n", stud[i].famil);
		scanf_s("%s", &stud[i].name, 20);
		printf("������� ������� �������� %s %s:\n", stud[i].famil, stud[i].name);
		scanf_s("%s", &stud[i].facult, 20);
	}

	system("cls");
	printf("������� ���, ������� � �������, �������� ������ �����:\n");
	scanf_s("%s", &s1, 20);
	scanf_s("%s", &s2, 20);
	scanf_s("%s", &s3, 20);

	for (i = 0; i < 3; i++) {
		if (strcmp(s1, stud[i].famil) == 0)
		{
			if (strcmp(s2, stud[i].name) == 0)
			{
				if (strcmp(s3, stud[i].facult) == 0)
				{
					printf("%s %s %s", stud[i].famil, stud[i].name, stud[i].facult);
				}
			}
		}
	}

	return 0;
}
