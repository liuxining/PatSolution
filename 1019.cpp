//#include <stdio.h>
//
//
//int z[1000];
//
//bool isHuiWen(int len)
//{
//	for(int j = 0;j < len / 2;j++)
//	{
//		if(z[j] != z[len - 1 - j])
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	int n;
//	int b;
//	scanf("%d %d",&n,&b);
//	int i = 0;
//	do
//	{
//		z[i++] = n % b;
//		
//		n /= b;
//	}while(n > 0);
//	if(isHuiWen(i))
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	printf("%d",z[i - 1]);
//	for(int j = i - 2;j >= 0;j--)
//	{
//		printf(" %d",z[j]);
//	}
//	printf("\n");
//}
