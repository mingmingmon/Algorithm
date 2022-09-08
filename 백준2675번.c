#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 백준 2675번


//테스트케이스 T가 왜 필요함? --> R과 관련이 있는 것 같음.
int main() 
{

	int i = 0;
	int T,R;
	char S[20]; //*S의 경우 S==HELLO 일 때 S[1]출력이 ?로 나옴

	scanf("%d", &T); //테스트 케이스 개수 입력받음

	for(i=0;i<T;i++) //테스트 케이스만큼 반복하자
	{
		scanf("%d %s", &R, S);

		for (int j = 0; j < strlen(S); j++) //strlen--> string 의 길이를 구하는 함수
		{
			for (int k = 0; k < R; k++) 
				printf("%c", S[j]);
		}
		printf("\n");
	
	}


	/*scanf("%s", S);
	printf("%c", S[1]); 인덱스 하나의 값만 출력할 때는 %S가 아니라 %C를 해야함?
	*/


	/*더 공부해야 할 것
	
	17번째 줄까지는 혼자서 생각해서 구현했음. 잘했다고 생각함!
	19번째 줄 부터 T와 R을 어떻게 연관짓는지 명확하게 모르겠어서 구현 못했음

	
	
	*/












	return 0;

}