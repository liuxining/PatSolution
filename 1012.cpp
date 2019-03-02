////
//// Created by ÁõÎ÷Äþ on 2019/2/22.
////
//
//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//using namespace std;
//
//struct Student
//{
//	int id;
//	int score[4];
//};
//
//
//Student s[2020];
//int k[1000000][4] = {0};
//char f[] = {'A','C','M','E'};
//int now;
//
//bool cmp(const Student& a,const Student& b){
//    return a.score[now] > b.score[now];
//}
//
//
//int main()
//{
//    int n,m;
//    scanf("%d %d",&n,&m);
//    for (int i = 0; i < n; ++i) {
//        scanf("%d %d %d %d",&s[i].id,&s[i].score[1],&s[i].score[2],&s[i].score[3]);
//        s[i].score[0] = (s[i].score[1] + s[i].score[2] + s[i].score[3]) / 3;
//    }
//    for(int i = 0;i < 4;i++){
//    	now = i;
//    	sort(s,s + n,cmp);
//    	k[s[0].id][now] = 1;
//    	for(int j = 0;j < n;j++){
//    		if(s[j].score[now] == s[j - 1].score[now]){
//    			k[s[j].id][now] = k[s[j - 1].id][now];
//			}
//			else{
//				k[s[j].id][now] = j + 1;
//			}
//		}
//	}
//	int query;
//	for(int i = 0;i < m;i++){
//		scanf("%d",&query);
//		if(k[query][0] == 0){
//			printf("N/A\n");
//		}
//		else{
//			int l = 0;
//			for(int j = 1;j < 4;j++){
//				if(k[query][j] < k[query][l]){
//					l = j;
//				}
//			}
//			printf("%d %c\n",k[query][l],f[l]);
//		}
//	}
//    return 0;
//
//}
