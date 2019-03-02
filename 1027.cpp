//#include <stdio.h>
//
//
//
//
//char getCh(int n)
//{
//	if(n < 10)
//	{
//		return n + '0';
//	}
//	switch(n)
//	{
//		case 10:return 'A';
//		case 11:return 'B';
//		case 12:return 'C';
//	}
//	return 'E';
//}
//
//int main()
//{
//	int a,b,c;
//	scanf("%d %d %d",&a,&b,&c);
//	printf("#");
//	if(a > 12)
//	{
//		printf("%c",getCh(a / 13));
//	}
//	else
//	{
//		printf("0");
//	}
//	a %= 13;
//	printf("%c",getCh(a));
//	if(b > 12)
//	{
//		printf("%c",getCh(b / 13));
//	}
//	else
//	{
//		printf("0");
//	}
//	b %= 13;
//	printf("%c",getCh(b));
//	if(c > 12)
//	{
//		printf("%c",getCh(c / 13));
//	}
//	else
//	{
//		printf("0");
//	}
//	c %= 13;
//	printf("%c",getCh(c));
//	
//}
