//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//int a[100010];
//int b[100010];
//int c[100010];
//int d[100010];
//
//int main(){
//	int max = -1;
//	int n;
//	scanf("%d",&n);
//	for(int i = 0;i < n;++i){
//		scanf("%d",&a[i]);
//		if(a[i] > max){
//			max = a[i];
//		}
//		b[i] = max;
//		c[i] = a[i];
//	}	
//	sort(c,c + n);
//	int k = 0;
//	for(int i = 0;i < n;++i){
//		if(a[i] == b[i] && a[i] == c[i]){
//			d[k++] = a[i];
//		}
//	}
//	printf("%d\n",k);
//	if(k > 0){
//		printf("%d",d[0]);
//	}
//	for(int i = 1;i < k;++i){
//		printf(" %d",d[i]);
//	}
//	printf("\n");
//	return 0;
//	
//}
