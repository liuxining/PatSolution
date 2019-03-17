//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//using namespace std;
//
//int a[4];
//
//int toNumber(int c[]){
//	int num = 0;
//	for(int i = 0;i < 4;++i){
//		num = num * 10 + c[i];
//	}
//	return num;
//}
//
//int toNumber2(int c[]){
//	int num = 0;
//	for(int i = 3;i >= 0;--i){
//		num = num * 10 + c[i];
//	}
//	return num;
//}
//
//
//
//
//void toArray(int n,int c[]){
//	c[0] = n / 1000;
//	n %= 1000;
//	c[1] = n / 100;
//	n %= 100;
//	c[2] = n / 10;
//	n %= 10;
//	c[3] = n;
//}
//
//
//
//
//int main(){
//	int b;
//	scanf("%d",&b);
//	while(1){
//		toArray(b,a);
//		sort(a,a + 4);
//		int da = toNumber2(a);
//		int xiao = toNumber(a);
//		b = da - xiao;
//		printf("%04d - %04d = %04d\n",da,xiao,b);
//		if(b == 6174 || b == 0){
//			break;
//		}
//		
//	}
//	return 0;
//}
