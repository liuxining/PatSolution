//#include <stdio.h>
//#include <set>
//#include <algorithm>
//using namespace std;
//
//
//double n[1010];
//int kk[22];
//
//bool cmp(int a,int b)
//{
//	return a > b;
//}
//
//int main()
//{
//	int i,j,kn,tn,sn = 0;
//	double ta;
//	set<int> k;
//	fill(n,n + 1010,0.0);
//	fill(kk,kk + 22,-1);
//	for(i = 0;i < 2;i++)
//	{
//		scanf("%d",&kn);
//		for(j = 0;j < kn;j++)
//		{
//			scanf("%d %lf",&tn,&ta);
//			if(!k.count(tn))
//			{
//				kk[sn++] = tn;
//				k.insert(tn);
//			}
//			n[tn] += ta;
//			if(n[tn] == 0)
//			{
//				k.erase(tn);
//			}
//		}
//	}
//	sort(kk,kk + sn,cmp);
//	printf("%d",k.size());
//	for(i = 0;i < sn;i++)
//	{
//		if(n[kk[i]] != 0)
//		{
//			printf(" %d %.1f",kk[i],n[kk[i]]);			
//		}
//	}
//	printf("\n");
//	return 0;
//}
