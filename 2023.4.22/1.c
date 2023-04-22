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
	printf("请输入密码\n");
	scanf("%s", password);
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("请确认：y&n\n");
	ret = getchar();
	if (ret == 'y')
	{
		printf("确认成功");
	}
	else
	{
		printf("取消确认");
	}
	return 0;
}