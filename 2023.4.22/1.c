#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch=getchar())!=EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int ch;
	int ret;
	char password[20];
	printf("����������\n");
	scanf("%s", password);
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("��ȷ�ϣ�y&n\n");
	ret = getchar();
	if (ret == 'y')
	{
		printf("ȷ�ϳɹ�");
	}
	else
	{
		printf("ȡ��ȷ��");
	}
	return 0;
}