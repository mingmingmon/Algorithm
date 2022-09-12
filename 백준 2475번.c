#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

// น้มุ 2475น๘

int main() {

	int number[5];
	int sum = 0;
	int TestNumber = 0;
	
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &number[i]);
		
	}


	for (int i = 0; i < 5; i++)
	{
		sum += number[i] * number[i];

	}

	TestNumber = sum % 10;
	
	printf("%d", TestNumber);

	return 0;
}