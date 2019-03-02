//#include <stdio.h>
//#include <string.h>
//
//
//char a[1010][20];
//char p[1010][20];
//int m[1010];
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int mI = 0;
//	for(int i = 0;i < n;i++)
//	{
//		scanf("%s %s",a[i],p[i]);
//		int len = strlen(p[i]);
//		int isM = 0;
//		for(int j = 0;j < len;j++)
//		{
//			if(p[i][j] == '1')
//			{
//				p[i][j] = '@';
//				isM = 1;
//			}
//			else if(p[i][j] == '0')
//			{
//				p[i][j] = '%';
//				isM = 1;
//			}
//			else if(p[i][j] == 'l')
//			{
//				p[i][j] = 'L';
//				isM = 1;
//			}
//			else if(p[i][j] == 'O')
//			{
//				p[i][j] == 'o';
//				isM = 1;
//			}
//		}
//		if(isM == 1)
//		{
//			m[mI++] = i;
//		}
//	}
//	if(mI == 0)
//	{
//		if(n == 1)
//		{
//			printf("There is 1 account and no account is modified\n");
//		}
//		else
//		{
//			printf("There are %d accounts and no account is modified\n",n);
//		}
//	}
//	else
//	{
//		printf("%d\n",mI);
//		for(int i = 0;i < mI;i++)
//		{
//			printf("%s %s\n",a[m[i]],p[m[i]]);
//		}
//	}
//	return 0;
//}
