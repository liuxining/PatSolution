//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//using namespace std;
//
//struct People{
//	char name[10];
//	int age;
//	int nw;
//};
//
//People p[100010];
//
//
//
//bool cmp(People p1,People p2){
//	if(p1.nw != p2.nw)	return p1.nw > p2.nw;
//	else if(p1.age != p2.age)	return p1.age < p2.age;
//	else {
//		int r = strcmp(p1.name,p2.name);
//		return r < 0;
//	}
//}
//
//
//int main(){
//	int n,k;
//	scanf("%d %d",&n,&k);
//	for(int i = 0;i < n;i++){
//		scanf("%s %d %d",p[i].name,&p[i].age,&p[i].nw);
//	}
//	sort(p,p + n,cmp);
//	int m,ba,ea;
//	for(int i = 0;i < k;i++){
//		scanf("%d %d %d",&m,&ba,&ea);
//		int j = 0;
//		printf("Case #%d:\n",(i + 1));
//		for(int h = 0;h < n && j < m;h++){
//			if(p[h].age >= ba && p[h].age <= ea){
//				printf("%s %d %d\n",p[h].name,p[h].age,p[h].nw);
//				j++;
//			}
//		}
//		if(j == 0){
//			printf("None\n");
//		}
//	}
//	return 0;
//	
//}
