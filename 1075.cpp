//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//
//struct People{
//	int id;
//	int score[6] = {-2,-2,-2,-2,-2,-2};
//	int totalScore = -1;
//	int prefectPs = 0;	
//	int submitPs = 0;
//};
//
//People p[10010];
//
//int problemScore[6];
//
//bool cmp(People p1,People p2){
//	if(p1.totalScore != p2.totalScore)	return p1.totalScore > p2.totalScore;
//	else if(p1.prefectPs != p2.prefectPs)	return p1.prefectPs > p2.prefectPs;
//	else return p1.id < p2.id;
//}
//
//int main(){
//	int n,k,m;
//	scanf("%d %d %d",&n,&k,&m);
//	int currId = 0;
//	
//	for(int i = 1;i <= k;++i){
//		scanf("%d",&problemScore[i]);
//	}
//	
//	int tid,tp,ts;
//	for(int i = 0;i < m;++i){
//		scanf("%d %d %d",&tid,&tp,&ts);
//		p[tid].id = tid;
//		if(ts != -1){
//			if(p[tid].totalScore == -1){
//				p[tid].totalScore = 0;
//			}
//			if(p[tid].score[tp] == -2){
//				p[tid].score[tp] = ts;
//				p[tid].submitPs++;
//				if(ts == problemScore[tp]){
//					p[tid].prefectPs++;
//				}
//				p[tid].totalScore += ts;
//			}
//			else if(p[tid].score[tp] < ts){
//				p[tid].totalScore += (ts - p[tid].score[tp]);
//				p[tid].score[tp] = ts;
//				if(ts == problemScore[tp]){
//					p[tid].prefectPs++;
//				}
//			}
//			if(tid > currId){
//				currId = tid;
//			}
//			
//		}
//		else{
//			if(p[tid].score[tp] == -2){
//				p[tid].score[tp] = 0;
//			}
//		}
//	}
//	sort(p,p + currId + 1,cmp);
//	printf("1 %05d %d",p[0].id,p[0].totalScore);
//	for(int h = 1;h <= k;++h){
//		if(p[0].score[h] != -2){
//			printf(" %d",p[0].score[h]);
//		}
//		else{
//			printf(" -");
//		}
//	}
//	printf("\n");
//	int currRank = 1;
//	for(int i = 1;i < currId;++i){
//		if(p[i].totalScore == -1){
//			break;
//		}
//		if(p[i].totalScore != p[i - 1].totalScore){
//			currRank = i + 1;
//		}
//		printf("%d %05d %d",currRank,p[i].id,p[i].totalScore);
//		for(int h = 1;h <= k;++h){
//			if(p[i].score[h] != -2){
//				printf(" %d",p[i].score[h]);
//			}
//			else{
//				printf(" -");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
