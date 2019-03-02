#include <stdio.h>
#include <algorithm>
using namespace std;


struct People
{
	int num;
	int virtue;
	int talent;
	int rank;
};

bool cmp(const struct People& p1,const struct People& p2)
{
	
	if(p1.rank > p2.rank)
	{
		return true;
	}
	else if(p1.rank == p2.rank)
	{
		if((p1.virtue + p1.talent) > (p2.virtue + p2.talent))
		{
			return true;
		}
		if((p1.virtue + p1.talent) == (p2.virtue + p2.talent))
		{
			
			if(p1.virtue > p2.virtue)
			{
				return true;
			}
			else if(p1.virtue == p2.virtue)
			{
				if(p1.num < p2.num)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	
}

People a[100010];
int main()
{
	int n,l,h,m = 0;
	scanf("%d %d %d",&n,&l,&h);
	for(int i = 0;i < n;i++)
	{
		scanf("%d %d %d",&a[i].num,&a[i].virtue,&a[i].talent);
		m++;
		if(a[i].virtue < l || a[i].talent < l)
		{
			a[i].rank = 0;
			m--;
		}
		else if(a[i].virtue >= h && a[i].talent >= h)
		{
			a[i].rank = 4;
		}
		else if(a[i].virtue >= h)
		{
			a[i].rank = 3;
		}
		else if(a[i].virtue >= a[i].talent)
		{
			a[i].rank = 2;
		}
		else
		{
			a[i].rank = 1;
		}
	}
	sort(a,a + n,cmp);
	printf("%d\n",m);
	for(int i = 0;i < m;i++)
	{
		printf("%d %d %d\n",a[i].num,a[i].virtue,a[i].talent);
	}
	return 0;
}
