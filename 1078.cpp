//#include <stdio.h>
//#include <math.h>
//#include <string.h>
//
//
//int hash[10010];
//
//int isPrime(int num){
//	if(num <= 1){
//		return 0;
//	}
//	int n = sqrt(num);
//	for(int i = 2;i <= n;++i){
//		if(num % i == 0){
//			return 0;
//		}
//	}
//	return 1;
//}
//
//
//
//int main(){
//	int mSize,n;
//	scanf("%d%d",&mSize,&n);
//	while(!isPrime(mSize)){
//		mSize++;
//	}
//	
//	memset(hash,0,sizeof(hash));
//	int num;
//	for(int i = 0;i < n;++i){
//		scanf("%d",&num);	
//		int h = num % mSize;
//		int k = 0;
//		int flag = 0;
//		while(hash[h]){
//			k++;
//			if(k >= mSize){
//				printf("-");
//				flag = 1;
//				break;
//			}
//			h = (h + k * k) % mSize;
//		}
//		if(!flag){
//			hash[h] = 1;
//			printf("%d",h);	
//		}
//		
//		if(i != (n - 1)){
//			printf(" ");
//		}
//	}
//	printf("\n");
//	return 0;
//}
