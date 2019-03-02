//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//
//struct MCP{
//	double inventory;
//	double price;
//	double per;
//};
//
//MCP m[1010];
//
//bool cmp(MCP m1,MCP m2){
//	return m1.per > m2.per;
//}
//
//int main(){
//	int n,d;
//	scanf("%d %d",&n,&d);
//	for(int i = 0;i < n;++i){
//		scanf("%lf",&m[i].inventory);
//	}
//	for(int i = 0;i < n;++i){
//		scanf("%lf",&m[i].price);
//		m[i].per = m[i].price / m[i].inventory;
//	}
//	sort(m,m + n,cmp);
//	double sall = 0;
//	for(int i = 0;i < n;++i){
//		if(d < m[i].inventory){
//			sall += d * m[i].per;
//			break;
//		}
//		else{
//			sall += m[i].price;
//			d -= m[i].inventory;
//		}
//	}
//	printf("%.2f\n",sall);
//	return 0;
//}
