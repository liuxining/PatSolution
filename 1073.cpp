//#include <stdio.h>
//#include <string.h>
//
//
//int main()
//{
//	char a[10010];
//	scanf("%s",a);
//	if(a[0] == '-')
//	{
//		printf("-");
//	}
//	int len = strlen(a);
//	int i = 1;
//	for(i = 1;i < len;i++)
//	{
//		if(a[i] == 'E')
//		{
//			break;
//		}
//	}
//	int l = a[i + 2] - '0';
//	for(int j = i + 3;j < len;j++)
//	{
//		
//		l = l * 10 + a[j] - '0';
//	}
//	
//	if(a[i + 1] == '-')
//	{
//		printf("0.");
//		for(int j = 1;j < l;j++)
//		{
//			printf("0");
//		}
//		for(int j = 1;j < i;j++)
//		{
//			if(a[j] != '.')
//			{
//				printf("%c",a[j]);
//			}
//		}
//	}
//	else
//	{
//		printf("%c",a[1]);
//		int j;
//		for(j = 2;j < i && j < l + 2;j++)
//		{
//			printf("%c",a[j]);
//		}
//		if(j < i)
//		{
//			printf(".");
//			for(;j < i;j++)
//			{
//				printf("%c",a[j]);
//			}
//		}
//		if(j < l + 2)
//		{
//			for(;j < l + 2;j++)
//			{
//				printf("0");
//			}
//		}
//	}
//	printf("\n");
//	return 0;
//	
//}
