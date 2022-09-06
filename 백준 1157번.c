#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


// 백준 1157번 

//문자 하나씩 쪼개. 스택? 
	// 하나 기준으로 비교해서 가장 큰 것을 고른다..?


int main() {

	int i, j, max, result = 0, len;
	char arr[1000000]; //단어를 입력받는다
	int cnt[26] = { 0, }; //??? 알파벳 26개 인거 같은데 26개의 알파벳의 개수를 0으로 맞춘다??
	int select = 0;


	scanf("%s", arr);
	len = strlen(arr); // 입력되는 문자열의 포인터 즉, 문자의 길이만큼 len에 저장

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (i == arr[j]) // j번째 문자열이 i 즉 a부터 z까지 알파벳과 같다면
				cnt[i - 'a']++; // 알파벳 배열에 숫자하나 증가시킨다.

		}

	}

	for (i = 'A'; i <= 'Z'; i++) // 이번에는 대문자 
	{
		for (j = 0; j < len; j++)
		{

			if (i == arr[j])
				cnt[i - 'A']++; 

		}

	} // cnt 배열에 a~z 그리고 A~Z 까지 알파벳 대소문자가 몇 개 있는지 저장완료

	max = cnt[0];
	for (i = 1; i < 26; i++)
	{
		if (max < cnt[i])
		{
			max = cnt[i];
			select = i;
	
		}

	}

	for (i = 0; i < 26; i++)
	{
		if (max == cnt[i])
			result++;

	}


	if (result > 1)
		printf("?\n");
	else
		printf("%c", select + 'A');
	return 0;


	return 0;

}



/* 궁금했던거나 앞으로 공부해야 하는 것

1. 알파벳을 대소문자 구분해서 for문을 따로 돌려서 다른 걸로 인식하지 않을까
싶었는데 for문 돌릴때 i 자체가 a 또는 A로 설정이 되어있어서 괜찮다.
2. 아스키 코드에서 알파벳 대소문자는 다른 수에 할당되어있다.
3. 무언가 비교해야 할 때 for문으로 하나씩 증가시켜서 모든 경우의 수를 생각해보는 방법이 있다.
4. 최댓값 구하는 방법은 많이 쓰일 것 같으니 익숙하게 연습하기로 하자.
5. 콤마랑 마침표 에러 조심하자.
6. 16번째 줄의 의미를 아직 잘 모른다.

*/