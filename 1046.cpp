//#include <stdio.h>
//
//
//int d[100010];
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int t;
//	d[0] = 0;
//	int sum = 0;
//	for(int i = 1;i <= n;i++)
//	{
//		scanf("%d",&t);
//		d[i] = d[i - 1] + t;
//		sum += t;
//	}
//	int m;
//	scanf("%d",&m);
//	int st,ed;
//	int sum1;
//	for(int i = 0;i < m;i++)
//	{
//		scanf("%d%d",&st,&ed);
//		
//		if(st > ed)
//		{
//			t = st;
//			st = ed;
//			ed = t;
//		}
//		sum1 = d[ed - 1] - d[st - 1];
//		printf("%d\n",sum1 < sum - sum1 ? sum1 : sum - sum1);
//	}
//	
//	return 0;
//}
