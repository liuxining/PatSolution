//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//using namespace std;
//
//
//const int MAXN = 510;
//const int INF = 1000000000;
//
//
//int n,m,st,ed;
//int weight[MAXN];
//int g[MAXN][MAXN];
//int d[MAXN];
//int w[MAXN];
//int num[MAXN];
//bool vis[MAXN] = {false};
//
//void dij(int st)
//{
//	int i,j,k,curr,min;
//	fill(d,d + MAXN,INF);
//	memset(w,0,sizeof(w));
//	memset(num,0,sizeof(num));
//	
//	w[st] = weight[st];
//	num[st] = 1;
//	d[st] = 0;
//	
//	for(i = 0;i < n;i++)
//	{
//		curr = -1;
//		min = INF;
//		for(j = 0;j < n;j++)
//		{
//			if(!vis[j] && d[j] < min)
//			{
//				curr = j;
//				min = d[j];	
//			}	
//		}
//		if(curr == -1)
//		{
//			return;
//		}
//		vis[curr] = true;
//		for(j = 0;j < n;j++)
//		{
//			if(!vis[j] && g[curr][j] != INF)
//			{
//				if(d[curr] + g[curr][j] < d[j])
//				{
//					d[j] = d[curr] + g[curr][j];
//					w[j] = w[curr] + weight[j];
//					num[j] = num[curr];
//				}
//				else if(d[curr] + g[curr][j] == d[j])
//				{
//					if(w[curr] + weight[j] > w[j])
//					{
//						w[j] = w[curr] + weight[j];
//					}
//					num[j] += num[curr];
//				}
//			}
//		}
//	}
//}
//
//int main()
//{
//	int i,j,k,c1,c2,len;
//	scanf("%d%d%d%d",&n,&m,&st,&ed);
//	for(i = 0;i < n;i++)
//	{
//		scanf("%d",&weight[i]);
//	}
//	fill(g[0],g[0] + MAXN * MAXN,INF);
//	for(i = 0;i < m;i++)
//	{
//		scanf("%d%d%d",&c1,&c2,&len);
//		g[c1][c2] = g[c2][c1] = len;
//	}
//	dij(st);
//	printf("%d %d\n",num[ed],w[ed]);
//}

