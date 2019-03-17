//#include <stdio.h>
//
//typedef long long LL;
//
////计算a和b的最大公约数 
//LL zdgy(LL a,LL b){
//	while((b - a) != 0){
//		b = b - a;
//		if(a > b){
//			LL yt = a;
//			a = b;
//			b = yt;
//		}
//	}
//	return b;
//}
//
////将假分数转换为带分数 
//void jia2dai(LL a,LL b,LL& p1,LL& a1,LL&b1){
//	int isf = 0;
//	if(a < 0){
//		isf = 1;
//		a = -a;
//	}
//	if(a >= b){
//		p1 = a / b;
//		a %= b;
//		if(isf){
//			p1 = -p1;
//			isf = 0;
//		}
//	}
//	else{
//		p1 = 0;
//	}
//	if(a != 0){
//		LL z = zdgy(a,b);
//		a /= z;
//		b /= z;
//	}
//	a1 = a;
//	if(isf){
//		a1 = -a1;
//	}
//	b1 = b;
//}
//
//void show(LL p,LL a,LL b){
//	if(p < 0 || a < 0){
//		printf("(");
//	}
//	if(p){
//		printf("%d",p);
//		if(a != 0){
//			printf(" %d/%d",a,b);
//		}
//	}
//	else if(a){
//		printf("%d/%d",a,b);	
//	} 
//	else{
//		printf("0");
//	}
//	if(p < 0 || a < 0){
//		printf(")");
//	}
//}
//
//int main(){
//	LL a1,b1,a2,b2;
////	scanf("%ld/%ld %ld/%ld",&a1,&b1,&a2,&b2);
//	scanf("%ld/%ld %ld/%ld",&a1,&b1,&a2,&b2);
//		
//	LL p11,a11,b11,p22,a22,b22;
//	jia2dai(a1,b1,p11,a11,b11);
//	jia2dai(a2,b2,p22,a22,b22);
//	
//	LL ja,jb,jp1,ja1,jb1;
//	
//	//add
//	ja = a1 * b2 + a2 * b1;
//	jb = b1 * b2;
//	jia2dai(ja,jb,jp1,ja1,jb1);
//	
//	show(p11,a11,b11);
//	printf(" + ");
//	show(p22,a22,b22);
//	printf(" = ");
//	show(jp1,ja1,jb1);
//	printf("\n");
//
//
//	//jian
//	ja = a1 * b2 - a2 * b1;
//	jb = b1 * b2;
//	jia2dai(ja,jb,jp1,ja1,jb1);
//	
//	show(p11,a11,b11);
//	printf(" - ");
//	show(p22,a22,b22);
//	printf(" = ");
//	show(jp1,ja1,jb1);
//	printf("\n");	
//	
//	//cheng
//	ja = a1 * a2;
//	jb = b1 * b2;
//	jia2dai(ja,jb,jp1,ja1,jb1);
//	
//	show(p11,a11,b11);
//	printf(" * ");
//	show(p22,a22,b22);
//	printf(" = ");
//	show(jp1,ja1,jb1);
//	printf("\n");
//
//	//chu
//	if(p22 == 0 && a22 == 0){
//		//除数为0
//		show(p11,a11,b11);
//		printf(" / 0 = Inf\n");
//	}
//	else{
//		ja = a1 * b2;
//		jb = b1 * a2;
//		if(jb < 0){
//			jb = -jb;
//			ja = -ja;
//		}
//		jia2dai(ja,jb,jp1,ja1,jb1);
//		
//		show(p11,a11,b11);
//		printf(" / ");
//		show(p22,a22,b22);
//		printf(" = ");
//		show(jp1,ja1,jb1);
//		printf("\n");	
//	}
//	return 0;	
//}
