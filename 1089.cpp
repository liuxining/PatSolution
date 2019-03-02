//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//
//int a[111];
//int b[111];
//int c[111];
//
//int isSame(int a1[],int b1[],int n){
//	for(int i = 0;i < n / 2;++i){
//		if(a1[i] != b1[i] || a1[n - 1 - i] != b1[n - 1 - i]){
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	for(int i = 0;i < n;++i){
//		scanf("%d",&a[i]);
//		c[i] = a[i];
//	}
//	for(int i = 0;i < n;++i){
//		scanf("%d",&b[i]);
//	}
//	int flag = 0;
//	for(int i = 1;i < n;++i){
//		int j = i - 1;
//		int t = a[i];
//		for(;j >= 0;--j){
//			if(a[j] > t){
//				a[j + 1] = a[j];		
//			}
//			else{
//				break;
//			}
//		}
//		a[j + 1] = t;
//		
//		if(isSame(a,b,n)){
//			//same
//			i++;
//			j = i - 1;
//			t = a[i];
//			for(;j >= 0;--j){
//				if(a[j] > t){
//					a[j + 1] = a[j];		
//				}
//				else{
//					break;
//				}
//			}
//			a[j + 1] = t;
//			
//			printf("Insertion Sort\n");
//			printf("%d",a[0]);
//			for(int k = 1;k < n;++k){
//				printf(" %d",a[k]);
//			}
//			printf("\n");
//			flag = 1;
//			break;
//		}
//	}
//	if(!flag){
//		int step = 2;
//		while(1){
//			for(int i = 0;i < n - step + 1;i += step){
//				int end = (i + step) > n ? n : (i + step);
//				sort(c + i,c + end);
//			}
//			step *= 2;
//			if(isSame(c,b,n)){
//				//same
//				for(int i = 0;i < n - step + 1;i += step){
//					int end = (i + step) > n ? n : (i + step);
//					sort(c + i,c + end);
//				}
//				printf("Merge Sort\n");
//				printf("%d",c[0]);
//				for(int i = 1;i < n;++i){
//					printf(" %d",c[i]);
//				}
//				printf("\n");
//				break;
//			}
//		}
//	}
//	return 0;
//}
