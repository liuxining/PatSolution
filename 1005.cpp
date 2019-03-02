//#include <stdio.h>
//
//
//char *engNum[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
//
//int main()
//{
//	long long n = 0;
//	char ch;
//	long long chuShu = 1;
//	while((ch = getchar()) != '\n')
//	{
//		n += ch - '0';	
//		if(n / chuShu > 0)
//		{
//			chuShu *= 10;
//		}
//	}
//	chuShu /= 10;
//	if(chuShu == 0)
//	{
//		printf("%s\n",engNum[n]);
//	}
//	while(chuShu != 0)
//	{
//		int i = n / chuShu;
//		n %= chuShu;
//		chuShu /= 10;
//		printf("%s",engNum[i]);
//		if(n == 0)
//		{
//			printf("\n");
//			break;
//		}
//		else
//		{
//			printf(" ");
//		}
//	}
//	
//	
//	return 0;
//}
