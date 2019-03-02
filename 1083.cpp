//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//struct Student{
//	char name[11];
//	char id[11];
//	int grade;
//};
//
//Student s[100010];
//
//
//
//bool cmp(Student s1,Student s2){
//	return s1.grade > s2.grade;
//}
//
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	for(int i = 0;i < n;++i){
//		scanf("%s %s %d",s[i].name,s[i].id,&s[i].grade);
//	}
//	sort(s,s + n,cmp);
//	int g1,g2;
//	scanf("%d %d",&g1,&g2);
//	
//	int sum = 0;
//	for(int i = 0;i < n;++i){
//		if(s[i].grade < g1){
//			break;
//		}
//		if(s[i].grade <= g2){
//			printf("%s %s\n",s[i].name,s[i].id);
//			sum++;
//		}
//		
//	}
//	if(sum == 0){
//		printf("NONE\n");
//	}
//	return 0;
//	
//}
