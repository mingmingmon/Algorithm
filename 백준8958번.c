#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//백준 8958번

int main()

{
	
	int TestCase = 0;
	scanf("%d", &TestCase);

	for (int i = 0; i < TestCase; i++)
	{
		int count = 0; //이 변수를 어떤 for문, if문 속에 넣을지가 중요했음
		int sum = 0; //이 변수를 어떤 for문, if문 속에 넣을지가 중요했음

		char Quiz[80];
		scanf("%s", &Quiz);
		
		
		for (int j = 0; j < strlen(Quiz); j++)
		{
			

			if (Quiz[j] == 'O') //문자 대입할 때는 '' 따옴표 쓰기
			{
				++count;
				sum += count;

			}

			else 
			{
				count = 0;
			}

			//sum += count; 백준에서는 여기에 넣어야 맞았음.
		}

		
		printf("%d\n", sum);

	}




	return 0;

}

/*
처음으로 처음부터 끝까지 내가 생각해서 푼 문제!
1. 문자 대입이나 표현은 항상 따옴표 쓰는거 생각하기
2. 변수의 영향범위 생각하면서 변수 선언하기
3. sum += count 위치가 왜 틀린지 모르겠다..
*/