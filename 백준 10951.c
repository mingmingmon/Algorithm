#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//백준 10951번

int main()
{
	int A = 0;
	int B = 0;
	int sum = 0;

	while(scanf("%d %d", &A, &B)!=EOF)
	{
		

		sum = A + B;
		printf("%d\n", sum);
	}
	return 0;

}

//EOF 를 알아야 풀 수 있는 문제였다.