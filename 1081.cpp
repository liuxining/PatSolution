//#include <stdio.h>
//
//
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	long fz,fm;
//	long long ansfz = 0,ansfm = 1;
//	for(int i = 0;i < n;++i){
//		scanf("%ld/%ld",&fz,&fm);
//		if(fm != ansfm){
//			ansfz = ansfz * fm + fz * ansfm;
//			ansfm *= fm;
//		}
//		else{
//			ansfz += fz;
//		}
//	}
//	int flag = 0;
//	if(ansfz >= ansfm){
//		flag = 1;
//		printf("%d",ansfz / ansfm);	
//	}
//	
//	ansfz %= ansfm;
//	if(ansfz != 0){
//		long long a,b;
//		a = ansfz;
//		b = ansfm;
//		while((b - a) != 0){
//			b = b - a;
//			if(a > b){
//				long long yt = a;
//				a = b;
//				b = yt;
//			}
//		}
//		if(b != 0){
//			ansfz /= b;
//			ansfm /= b;	
//		}
//		
//		if(flag){
//			printf(" ");
//		}
//		printf("%d/%d",ansfz,ansfm);
//	}
//	printf("\n");
//}
