#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// ���� 2675��


//�׽�Ʈ���̽� T�� �� �ʿ���? --> R�� ������ �ִ� �� ����.
int main() 
{

	int i = 0;
	int T,R;
	char S[20]; //*S�� ��� S==HELLO �� �� S[1]����� ?�� ����

	scanf("%d", &T); //�׽�Ʈ ���̽� ���� �Է¹���

	for(i=0;i<T;i++) //�׽�Ʈ ���̽���ŭ �ݺ�����
	{
		scanf("%d %s", &R, S);

		for (int j = 0; j < strlen(S); j++) //strlen--> string �� ���̸� ���ϴ� �Լ�
		{
			for (int k = 0; k < R; k++) 
				printf("%c", S[j]);
		}
		printf("\n");
	
	}


	/*scanf("%s", S);
	printf("%c", S[1]); �ε��� �ϳ��� ���� ����� ���� %S�� �ƴ϶� %C�� �ؾ���?
	*/


	/*�� �����ؾ� �� ��
	
	17��° �ٱ����� ȥ�ڼ� �����ؼ� ��������. ���ߴٰ� ������!
	19��° �� ���� T�� R�� ��� ���������� ��Ȯ�ϰ� �𸣰ھ ���� ������

	
	
	*/












	return 0;

}