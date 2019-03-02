//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//using namespace std;
//
//struct Student{
//	int id;
//	char name[10];
//	int grade;
//};
//
//Student s[100010];
//
//int c = 1;
//
//
//bool cmp(Student s1,Student s2){
//	if(c == 1){
//		return s1.id < s2.id;
//	}
//	else if(c == 2){
//		int r = strcmp(s1.name,s2.name);
//		if(r == 0){
//			return s1.id < s2.id;
//		}
//		else{
//			return r < 0;
//		}
//	}
//	else{
//		if(s1.grade == s2.grade){
//			return s1.id < s2.id;
//		}
//		else{
//			return s1.grade < s2.grade;
//		}
//	}
//}
//
//
//
//int main(){
//	int n;
//	scanf("%d %d",&n,&c);
//	for(int i = 0;i < n;++i){
//		scanf("%d %s %d",&s[i].id,s[i].name,&s[i].grade);
//	}
//	sort(s,s + n,cmp);
//	for(int i = 0;i < n;++i){
//		printf("%06d %s %d\n",s[i].id,s[i].name,s[i].grade);
//	}
//}
