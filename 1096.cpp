//#include <stdio.h>
//#include <math.h>
//
//int main(){
//	long long n;
//	scanf("%lld",&n);
//	int ansI,ansJ,maxLen = 0;
//	int sqr = sqrt(n);
//	for(int i = 2;i <= sqr;++i){
//		if(n % i != 0){
//			continue;
//		}
//		long long num = i;
//		int j = i + 1;
//		int ansI2 = i;
//		int ansJ2;
//		while(1){
//			num *= j;
//			if(num > n || n % j != 0){
//				ansJ2 = j - 1;
//				break;
//			}
//			j++;
//		}
//		if(ansJ2 - ansI2 + 1 > maxLen){
//			ansI = ansI2;
//			ansJ = ansJ2;
//			maxLen = ansJ - ansI + 1;
//		}
//	}
//	if(maxLen == 0){
//		printf("1\n%d",n);
//	}
//	else{
//		printf("%d\n%d",maxLen,ansI);
//		for(int i = ansI + 1;i <= ansJ;++i){
//			printf("*%d",i);
//		}
//	}
//	printf("\n");
//	return 0;
//}
