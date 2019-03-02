//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//using namespace std;
//
//
//
//char n1[20],n2[20];
//int tag,radix;
//long long map[256];
//long long inf = ((long long)1 << 63) - 1;
//
//void init(){
//	for(char i = '0';i <= '9';++i){
//		map[i] = i - '0';
//	}
//	for(char i = 'a';i <= 'z';++i){
//		map[i] = i - 'a' + 10;
//	}
//}
//
//long long num2Dec(char a[],long long radix,long long t){
//	int len = strlen(a);
//	long long ans = 0;
//	for(int i = 0;i < len;++i){
//		ans = ans * radix + map[a[i]];
//		if(ans < 0 || ans > t){
//			return -1;
//		}
//	}
//	return ans;
//}
//
//int searchLowRadix(char a[]){
//	int len = strlen(a);
//	int min = -1;
//	for(int i = 0;i < len;++i){
//		if(map[a[i]] > min){
//			min = map[i];
//		}
//	}
//	return min + 1;
//}
//
//int cmp(char a[],long long radix,int t){
//	long long num = num2Dec(a,radix,t);
//	if(num < 0){
//		return 1;
//	}
//	else if(num > t){
//		return 1;
//	}
//	else if(num < t){
//		return -1;
//	}
//	else{
//		return 0;
//	}
//}
//
//long long binarySearch(char a[],long long low,long long high,long long t){
//	long long mid;
//	while(low <= high){
//		mid = (low + high) / 2;
//		int flag = cmp(a,mid,t);
//		if(flag == -1){
//			low = mid + 1;
//		}
//		else if(flag == 1){
//			high = mid - 1;
//		}
//		else{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//
//int main(){
//	init();
//	scanf("%s %s %d %d",n1,n2,&tag,&radix);
//	if(tag == 2){
//		char t[20];
//		strcpy(t,n1);
//		strcpy(n1,n2);
//		strcpy(n2,t);
//	}
//	long long nzD = num2Dec(n1,tag,inf);
//	long long low = searchLowRadix(n2);
//	long long high = max(low,nzD) + 1;
//	long long ans = binarySearch(n2,low,high,nzD);
//	if(ans == -1){
//		printf("Impossible!\n");
//	}
//	else{
//		printf("%lld\n",ans);	
//	}
//	return 0;
//}
