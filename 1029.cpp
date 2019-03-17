//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//int a[100010];
//int b[100010];
//int inf = 0x7fffffff;
//
//int main(){
//	int n1,n2;
//	scanf("%d",&n1);
//	for(int i = 1;i <= n1;++i){
//		scanf("%d",&a[i]);
//	}
//	scanf("%d",&n2);
//	for(int i = 1;i <= n2;++i){
//		scanf("%d",&b[i]);
//	}
//	a[n1] = b[n2] = inf;
//	int mid = (n1 + n2 + 1) / 2;
//	int i = 1;
//	int ai = 1;
//	int bi = 1;
//	while(i < mid){
//		if(a[ai] < b[bi]){
//			ai++;
//		}
//		else{
//			bi++;
//		}
//		i++;
//	}
//	printf("%d\n",min(a[ai],b[bi]));
//	return 0;
//	
//}
