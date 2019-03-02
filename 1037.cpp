//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//int c[100010],p[100010];
//
//
//int main(){
//	int nc,np;
//	scanf("%d",&nc);
//	for(int i = 0;i < nc;++i){
//		scanf("%d",&c[i]);
//	}
//	scanf("%d",&np);
//	for(int i = 0;i < np;++i){
//		scanf("%d",&p[i]);
//	}
//	sort(c,c + nc);
//	sort(p,p + np);
//	long long ans = 0;
//	for(int i = 0;i < nc && i < np;++i){
//		if(c[i] < 0 && p[i] < 0){
//			ans += c[i] * p[i];
//		}
//		else{
//			break;
//		}
//	}
//	for(int i = nc - 1,j = np - 1;i >= 0 && j >= 0;--i,--j){
//		if(c[i] > 0 && p[j] > 0){
//			ans += c[i] * p[j];
//		}
//		else{
//			break;
//		}
//	}
//	printf("%d\n",ans);
//	return 0;
//}
