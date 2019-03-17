#include <stdio.h>
#include <math.h>

int isPrime(long long num){
	if(num <= 1){
		return 0;
	}
	long long n = sqrt(num);
	for(long long i = 2;i <= n;++i){
		if(num % i == 0){
			return 0;
		}
	}
	return 1;
}



int main()
{
	long long n;
	scanf("%lld",&n);
	long long sqr = sqrt(n);
	if(n == 1){
		printf("1=1");
		return 0;
	}
	printf("%d=",n);
	for(long long i = 2;i <= sqr;++i){
		if(isPrime(i)){
			int k = 0;
			while(n % i == 0){
				k++;
				n /= i;
			}
			if(k == 0){
				continue;
			}
			printf("%d",i);
			if(k > 1){
				printf("^%d",k);
			}
			if(n != 1){
				printf("*");
			}
			else{
				break;
			}
		}
	}
	if(n != 1){
		printf("%d",n);
	}
	printf("\n");
	return 0;
}
