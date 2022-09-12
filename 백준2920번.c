#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>

//백준 2920번

int main() 
{
	int music[8];
	
	for (int i = 0; i < 8; i++) {

		scanf("%d", music + i); // music == &music[0] 배열의 이름은 변수의 시작 주소이다.

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

	int* arr --> 주소를 담는 변수 = malloc(sizeof(int) * n)배열의 저장공간을 정해줌; 
	int a = 8;
	arr = &a;
	printf("%d", *arr);-->시작 주소*/



	//ctrl a : 전체 스크롤





	

}