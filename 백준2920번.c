#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>

//���� 2920��

int main() 
{
	int music[8];
	
	for (int i = 0; i < 8; i++) {

		scanf("%d", music + i); // music == &music[0] �迭�� �̸��� ������ ���� �ּ��̴�.

	}

	if (music[0] == 1) {

		for (int i = 0; i < 7; i++)
		{
			if (music[i] > music[i + 1]) {
				printf("mixed");
				return 0;
			}

		}

		printf("ascending");

	}

	else if (music[0] == 8) {

		for (int i = 0; i < 7; i++)
		{
			if (music[i] < music[i + 1]) {
				printf("mixed");
				return 0;
			}


		}

		printf("descending");

	}

	else
		printf("mixed");

	/*int n = 8;
	int music[n];

	int* arr --> �ּҸ� ��� ���� = malloc(sizeof(int) * n)�迭�� ��������� ������; 
	int a = 8;
	arr = &a;
	printf("%d", *arr);-->���� �ּ�*/



	//ctrl a : ��ü ��ũ��





	

}