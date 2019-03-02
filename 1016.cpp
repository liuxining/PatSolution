//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//using namespace std;
//
//struct People{
//	char name[22];
//	int m,d,h,mm;
//	char type[20];
//};
//
//People p[1010];
//double deno[26];
//
//bool cmp(const People& p1,const People& p2){
//	int r = strcmp(p1.name,p2.name);
//	if(r != 0){
//		return r < 0;
//	}
//	else if(p1.m != p2.m)	return p1.m < p2.m;
//	else if(p1.d != p2.d)	return p1.d < p2.d;
//	else if(p1.h != p2.h)	return p1.h < p2.h;
//	else return p1.mm < p2.mm;
//}
//
//int main()
//{
//	int n;
//	for(int i = 0;i < 24;i++){
//		scanf("%lf",&deno[i]);
//	}
//	scanf("%d",&n);
//	for(int i = 0;i < n;i++){
//		scanf("%s %d:%d:%d:%d %s",p[i].name,&p[i].m,&p[i].d,&p[i].h,&p[i].mm,p[i].type);
//	}
//	sort(p,p + n,cmp);
//	People curr = p[0];
//	double allCost = 0;
//	int needPrint = 0;
//	
//	for(int i = 1;i < n;i++){
//		if(strcmp(curr.name,p[i].name) == 0){
//			if(strcmp(curr.type,"on-line") == 0){
//				if(strcmp(p[i].type,"on-line") == 0){
//					curr = p[i];
//				}
//				else{
//					//cal
//					double cost = 0;
//					int allm = 0;
//					for(int d = curr.d;d <= p[i].d;d++){
//						int h = 0;
//						int hl = 23;
//						if(d == curr.d){
//							h = curr.h;
//						}
//						if(d == p[i].d){
//							hl = p[i].h;
//						}
//						for(;h <= hl;h++){
//							int mm = 0;
//							int mml = 60;
//							if(d == curr.d && h == curr.h){
//								mm = curr.mm;
//							}
//							if(d == p[i].d && h == p[i].h){
//								mml = p[i].mm;
//							}
//							cost += (deno[h] * (mml - mm)) / 100.0;
//							allm += mml - mm;
//						}
//					}
//					allCost += cost;
//					needPrint++;
//					if(needPrint == 1){
//						printf("%s %02d\n",curr.name,curr.m);
//					}
//					printf("%02d:%02d:%02d %02d:%02d:%02d %d $%.2f\n",curr.d,curr.h,curr.mm,p[i].d,p[i].h,p[i].mm,allm,cost);
//				}
//			}
//			else{
//				curr = p[i];
//			}
//		}
//		else{
//			if(needPrint != 0){
//				printf("Total amount: $%.2f\n",allCost);	
//			}
//			needPrint = 0;
//			allCost = 0;
//			curr = p[i];
////			printf("%s %02d\n",curr.name,curr.m);
//		}
//		
//	}
//	if(needPrint != 0){
//		printf("Total amount: $%.2f\n",allCost);	
//	}
//	
//	return 0;	
//}
