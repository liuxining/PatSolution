//#include <stdio.h>
//#include <vector>
//#include <queue>
//using namespace std;
//
//
//const int MAXN = 110;
//
//vector<int> v[MAXN];
//
//int main()
//{
//	int n,m;
//	scanf("%d%d",&n,&m);
//	for(int i = 0;i < m;i++)
//	{
//		int id,k,idt;
//		scanf("%d%d",&id,&k);
//		for(int j = 0;j < k;j++)
//		{
//			scanf("%d",&idt);
//			v[id].push_back(idt);
//		}
//	}
//	
//	queue<int> q;
//	q.push(1);
//	int lastNode = 1;
//	int newLastNode;
//	vector<int>::iterator it;
//	int leafNum = 0;
//	int travelNum = 0;
//	while(!q.empty())
//	{
//		int curr = q.front();
//		q.pop();
//		travelNum++;
//		for(it = v[curr].begin();it != v[curr].end();it++)
//		{
//			q.push(*it);
//			newLastNode = *it;
//		}
//		if(v[curr].size() == 0)
//		{
//			leafNum++;
//		}
//		if(curr == lastNode)
//		{
//			lastNode = newLastNode;
//			printf("%d",leafNum);
//			leafNum = 0;
//			if(travelNum < n)
//			{
//				printf(" ");
//			}
//		}
//	}
//	return 0;
//}
