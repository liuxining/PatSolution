//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//
//struct RecordL
//{
//	char num[16];
//	int h1,m1,s1,h2,m2,s2;
//};
//
//struct RecordL a[100010];
//
//
//bool cmp1(struct RecordL& x,struct RecordL& y)
//{
//	if(x.h1 < y.h1)
//	{
//		return true;
//	}
//	else if(x.h1 == y.h1)
//	{
//		if(x.m1 < y.m1)
//		{
//			return true;
//		}
//		else if(x.m1 == y.m1)
//		{
//			if(x.s1 < y.s1)
//			{
//				return true;
//			}
//		}
//	}
//	return false;
//}
//
//bool cmp2(struct RecordL& x,struct RecordL& y)
//{
//	if(x.h2 > y.h2)
//	{
//		return true;
//	}
//	else if(x.h2 == y.h2)
//	{
//		if(x.m2 > y.m2)
//		{
//			return true;
//		}
//		else if(x.m2 == y.m2)
//		{
//			if(x.s2 > y.s2)
//			{
//				return true;
//			}
//		}
//	}
//	return false;
//}
//
//int main()
//{
//	int m;
//	scanf("%d",&m);
//	for(int i = 0;i < m;i++)
//	{
//		scanf("%s %d:%d:%d %d:%d:%d",a[i].num,&a[i].h1,&a[i].m1,&a[i].s1,&a[i].h2,&a[i].m2,&a[i].s2);
//	}
//	sort(a,a + m,cmp1);
//	printf("%s ",a[0].num);
//	sort(a,a + m,cmp2);
//	printf("%s\n",a[0].num);
//}
