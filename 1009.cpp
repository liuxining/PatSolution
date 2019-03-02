//#include <stdio.h>
//#include <set>
//#include <algorithm>
//using namespace std;
//
//
//double c[1010];
//int a[11];
//double c2[2020];
//int b[2020];
//
//int main()
//{
//
//	fill(c,c + 1010,0);
//	fill(c2,c2 + 2020,0);
//	int k;
//	scanf("%d",&k);
//	int ex;
//	double co;
//	for(int i = 0;i < k;i++)
//	{
//		scanf("%d%lf",&ex,&co);
//		c[ex] += co;
//		a[i] = ex;
//	}
//	
//	set<int> s;
//	int k2;
//	scanf("%d",&k2);
//	int yhn = 0;
//	for(int i = 0;i < k2;i++)
//	{
//		scanf("%d%lf",&ex,&co);
//		for(int j = 0;j < k;j++)
//		{
//			c2[ex + a[j]] += co * c[a[j]];
//			if(c2[ex + a[j]] != 0 && !s.count(ex + a[j]))
//			{
//				s.insert(ex + a[j]);
//				b[yhn++] = ex + a[j];
//			}
//			else if(c2[ex + a[j]] == 0 && s.count(ex + a[j]))
//			{
//				s.erase(ex + a[j]);
//			}
//		}
//	}
//	sort(b,b + yhn);
//	printf("%d",s.size());
//	int pre = -1;
//	for(int i = yhn - 1;i >= 0;i--)
//	{
//		if(c2[b[i]] != 0 && b[i] != pre)
//		{
//			printf(" %d %.1f",b[i],c2[b[i]]);
//		}
//		pre = b[i];
//	}
//	printf("\n");
//}
