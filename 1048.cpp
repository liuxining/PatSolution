//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//
//int a[100010];
//
//int upper_bound(int l,int r,int x){
//	int left = l,right = r,mid;
//	while(left <= right){
//		mid = (left + right) / 2;
//		if(a[mid] > x){
//			right = mid - 1;
//		}
//		else if(a[mid] == x){
//			return mid;
//		}
//		else{
//			left = mid + 1;
//		}
//	}
//	return -1;
//}
//
//
//int main(){
//	int n,m;
//	scanf("%d%d",&n,&m);
//	for(int i = 0;i < n;++i){
//		scanf("%d",&a[i]);
//	}
//	sort(a,a + n);
//	int flag = 0;
//	for(int i = 0;i < n;++i){
//		if(a[i] >= m){
//			break;
//		}
//		int j = upper_bound(i + 1,n,m - a[i]);
//		if(j != -1){
//			printf("%d %d\n",a[i],a[j]);
//			flag = 1;
//			break;
//		}
//	}
//	if(!flag){
//		printf("No Solution\n");
//	}
//	return 0;
//	
//}
