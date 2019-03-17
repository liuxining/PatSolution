//#include <stdio.h>
//#include <math.h>
//
//int num2dec(int num,int d){
//	int ans = 0;
//	while(num != 0){
//		ans = ans * d + (num % d);
//		num /= d;
//	}
//	return ans;
//}
//
//
//int isPrime(int num){
//	if(num == 1){
//		return 0;
//	}
//	int s = sqrt(num);
//	for(int i = 2;i <= s;++i){
//		if(num % i == 0){
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main(){
//	int num,d;
//	while(1){
//		scanf("%d",&num);
//		if(num < 0){
//			break;
//		}
//		scanf("%d",&d);
//	
//		int flag = isPrime(num);
//		
//		if(flag){
//			num = num2dec(num,d);
//			flag = isPrime(num);
//			if(flag){
//				printf("Yes\n");
//			}
//			else{
//				printf("No\n");
//			}
//		}
//		else{
//			printf("No\n");
//		}	
//	}
//	return 0;
//	
//	
//}
