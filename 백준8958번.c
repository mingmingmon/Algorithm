#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//���� 8958��

int main()

{
	
	int TestCase = 0;
	scanf("%d", &TestCase);

	for (int i = 0; i < TestCase; i++)
	{
		int count = 0; //�� ������ � for��, if�� �ӿ� �������� �߿�����
		int sum = 0; //�� ������ � for��, if�� �ӿ� �������� �߿�����

		char Quiz[80];
		scanf("%s", &Quiz);
		
		
		for (int j = 0; j < strlen(Quiz); j++)
		{
			

			if (Quiz[j] == 'O') //���� ������ ���� '' ����ǥ ����
			{
				++count;
				sum += count;

			}

			else 
			{
				count = 0;
			}

			//sum += count; ���ؿ����� ���⿡ �־�� �¾���.
		}

		
		printf("%d\n", sum);

	}




	return 0;

}

/*
ó������ ó������ ������ ���� �����ؼ� Ǭ ����!
1. ���� �����̳� ǥ���� �׻� ����ǥ ���°� �����ϱ�
2. ������ ������� �����ϸ鼭 ���� �����ϱ�
3. sum += count ��ġ�� �� Ʋ���� �𸣰ڴ�..
*/