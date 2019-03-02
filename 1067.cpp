//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//
//int b[100010],c[100010];
//
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	int left = 0;
//	
//	int zi = -1;
//	for(int i = 0;i < n;++i){
//		scanf("%d",&b[i]);
//		c[b[i]] = i;
//		if(b[i] != i){
//			left++;
//		}
//		if(b[i] == 0){
//			zi = i;
//		}
//	}
//	int sum = 0;
//	int i = 1;
//	while(left > 0){
//		if(zi == 0){
//			left++;
//			for(;i < n;++i){
//				if(i != b[i]){
//					c[b[i]] = zi;
//					b[zi] = b[i];
//					b[i] = 0;
//					zi = i;
//					sum++;
//					break;
//				}
//			}
//		}
//		
//		b[zi] = b[c[zi]];
//		b[c[zi]] = 0;
//		zi = c[zi];
//		sum++;
//		left--;
//		if(zi == 0){
//			left--;
//		}
//		
//	}
//	printf("%d\n",sum);
//}
