//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//using namespace std;
//
//
//char a[100][260];
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	getchar();
//	
//	int minLen = 260;
//	for(int i = 0;i < n;i++)
//	{
//		fgets(a[i],260,stdin);
//		int len = strlen(a[i]);
//		reverse(a[i],a[i] + len);
//		if(len < minLen)
//		{
//			minLen = len;
//		}
//	}
//	int lenI = 0;
//	for(int i = 1;i < minLen;i++)
//	{
//		int isSame = 1;
//		for(int j = 1;j < n;j++)
//		{
//			if(a[0][i] != a[j][i])
//			{
//				isSame = 0;
//				break;
//			}
//		}
//		if(isSame == 1)
//		{
//			lenI++;
//		}
//	}
//	if(lenI > 0)
//	{
//		for(int i = lenI;i > 0;i--)
//		{
//			printf("%c",a[0][i]);
//		}	
//	}
//	else
//	{
//		printf("nai");
//	}
//	printf("\n");
//	
//}
