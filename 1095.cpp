//#include <stdio.h>
//#include <string>
//#include <string.h>
//#include <map>
//#include <algorithm>
//using namespace std;
//
//struct Car{
//	char id[8];
//	int time;
//	char status[4];
//};
//
//Car all[10010],valid[10010];
//
//
//int time2s(int h,int m,int s){
//	return h * 3600 + m * 60 + s;
//}
//
//bool cmp1(Car c1,Car c2){
//	int r = strcmp(c1.id,c2.id);
//	if(r != 0)	return r < 0;
//	else return c1.time < c2.time;
//}
//
//bool cmp2(Car c1,Car c2){
//	return c1.time < c2.time;
//}
//
//
//int main(){
//	int n,k;
//	scanf("%d %d",&n,&k);
//	int th,tm,ts;
//	for(int i = 0;i < n;++i){
//		scanf("%s %d:%d:%d %s",all[i].id,&th,&tm,&ts,all[i].status);
//		all[i].time = time2s(th,tm,ts);
//	}
//	sort(all,all + n,cmp1);
//	
//	map<string,int> parkTime;
//	Car pre = all[0];
//	int curr = 0;
//	int maxTime = 0;
//	for(int i = 1;i < n;++i){
//		if(strcmp(pre.id,all[i].id) == 0){
//			//same car
//			if(strcmp(pre.status,"in") == 0 && strcmp(all[i].status,"out") == 0){
//				//pari
//				valid[curr++] = pre;
//				valid[curr++] = all[i];
//				if(parkTime.count(pre.id) == 0){
//					parkTime[pre.id] = 0;
//				}
//				parkTime[pre.id] += all[i].time - pre.time;
//				if(parkTime[pre.id] > maxTime){
//					maxTime = parkTime[pre.id];
//				}
//			}
//		}
//		pre = all[i];
//	}
//	
//	sort(valid,valid + curr,cmp2);
//	int num = 0;
//	int i = 0;
//	for(int h = 0;h < k;++h){
//		scanf("%d:%d:%d",&th,&tm,&ts);
//		int time = time2s(th,tm,ts);
//		for(;i < curr;++i){
//			if(valid[i].time > time){
//				break;
//			}
//			if(strcmp(valid[i].status,"in") == 0){
//				num++;
//			}
//			else{
//				num--;
//			}
//		}	
//		printf("%d\n",num);
//	}
//	
//	map<string,int>::iterator it;
//	for(it = parkTime.begin();it != parkTime.end();it++){
//		if(it->second == maxTime){
//			printf("%s ",it->first.c_str());
//		}
//	}
//	printf("%02d:%02d:%02d\n",maxTime / 3600,(maxTime % 3600) / 60,maxTime % 60);
//	return 0;
//}
