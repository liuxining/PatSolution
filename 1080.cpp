//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Student{
//	int id;
//	int ge,gi;
//	int k[5];
//	int rank;
//};
//
//Student s[40010];
//int school[111];
//vector<int> v[111];
//
//
//bool cmp(Student s1,Student s2){
//	int r1 = (s1.ge + s1.gi) / 2;
//	int r2 = (s2.ge + s2.gi) / 2;
//	
//	if(r1 != r2)	return r1 > r2;
//	else return s1.ge > s2.ge;
//}
//
//int main(){
//	int n,m,k;
//	scanf("%d %d %d",&n,&m,&k);
//	for(int i = 0;i < m;++i){
//		scanf("%d",&school[i]);
//	}
//	for(int i = 0;i < n;++i){
//		s[i].id = i;
//		scanf("%d %d",&s[i].ge,&s[i].gi);
//		for(int j = 0;j < k;++j){
//			scanf("%d",&s[i].k[j]);
//		}
//	}
//	sort(s,s + n,cmp);
//	
//	//cal rank
//	s[0].rank = 1;
//	for(int i = 1;i < n;++i){
//		int r1 = (s[i - 1].ge + s[i - 1].gi) / 2;
//		int r2 = (s[i].ge + s[i].gi) / 2;
//		
//		if(r1 == r2 && s[i - 1].ge == s[i].ge){
//			s[i].rank = s[i - 1].rank;
//		}
//		else{
//			s[i].rank = i + 1;
//		}
//	}
//	
//	for(int i = 0;i < n;++i){
//		for(int j = 0;j < k;++j){
//			if(school[s[i].k[j]] > 0){
//				v[s[i].k[j]].push_back(s[i].id);
//				school[s[i].k[j]]--;
//				break;
//			}
//			else if(s[v[s[i].k[j]].back()].rank == s[i].rank){
//				v[s[i].k[j]].push_back(s[i].id);
//				break;
//			}
//		}
//	}
//	for(int i = 0;i < m;++i){
//		sort(v[i].begin(),v[i].end());
//		vector<int>::iterator it;
//		for(it = v[i].begin();it != v[i].end();++it){
//			printf("%d",*it);
//			if(it + 1 != v[i].end()){
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
