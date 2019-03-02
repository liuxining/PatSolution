//#include <stdio.h>
//#include <string.h>
//
//
//int main()
//{
//	char *w[] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
//	char a[61],b[61],c[61],d[61];
//	scanf("%s",a);
//	scanf("%s",b);
//	scanf("%s",c);
//	scanf("%s",d);
//	int len1 = strlen(a);
//	int len2 = strlen(b);
//	int len3 = strlen(c);
//	int len4 = strlen(d);
//	int len = len1 < len2 ? len1 : len2;
//	int i;
//	for(i = 0;i < len;i++)
//	{
//		if(a[i] == b[i] && a[i] >= 'A' && a[i] <= 'G')
//		{
//			printf("%s ",w[a[i] - 'A']);
//			break;
//		}
//	}
//	i++;
//	for(;i < len;i++)
//	{
//		if(a[i] == b[i] && ((a[i] >= '0' && a[i] <= '9') || (a[i] >= 'A' && a[i] <= 'N')))
//		{
//			if(a[i] >= '0' && a[i] <= '9')
//			{
//				printf("%02d",a[i]);	
//			}
//			else
//			{
//				printf("%02d",a[i] - 'A' + 10);
//			}
//			break;
//			
//		}
//	}
//	printf(":");
//	len = len3 < len4 ? len3 : len4;
//	for(i = 0;i < len;i++)
//	{
//		if(c[i] == d[i] && ((c[i] >= 'a' && c[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')))
//		{
//			printf("%02d",i);
//			break;
//		}
//	}
//	printf("\n");
//	return 0;
//}
