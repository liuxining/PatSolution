//#include <stdio.h>
//#include <string.h>
//
//
//
//char *ji[] = {"Yi","Wan"};
//char *d[] = {"","Shi","Bai","Qian"};
//char *s[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
//int main()
//{
//	char a[13];
//	scanf("%s",a);
//	int len = strlen(a);
//	int beginI = 0;
//	int isF = 1;
//	if(a[0] == '-')
//	{
//		printf("Fu");
//		isF = 0;
//		beginI++;
//	}
//	int j = beginI;
//	for(int i = 0;i < len / 4 + 1;i++)
//	{
//		char pre = '-';
//		int jz = len - (len / 4 + 1 - i - 1) * 4;
//		for(;j < jz;j++)
//		{
//			if(!(pre == '0' && a[j] == '0'))
//			{
//				if(isF)
//				{
//					printf("%s",s[a[j] - '0']);
//					isF = 0;
//				}
//				else
//				{
//					printf(" %s",s[a[j] - '0']);
//				}
//					
//			}
//			pre = a[j];
//			if(a[j] != '0' && (j + 1) < jz)
//			{
//				printf(" %s",d[jz - j - 1]);
//			}
//		}
//		if(i != 2)
//		{
//			printf(" %s",ji[2 - len / 4 + 1 + i]);
//		}
//		
//	}
//	
//	return 0;
//}
