//#include <stdio.h>
//
//int pnum[100010];
//int tnum[100010];
//
//int main(){
//	int i = 0;
//	char ch;
//	int psum = 0;
//	int tsum = 0;
//	while((ch = getchar()) != '\n'){
//		switch(ch){
//			case 'P':{
//				psum++;
//				break;
//			}
//			case 'T':{
//				tsum++;
//				break;
//			}
//			case 'A':{
//				pnum[i] = psum;
//				tnum[i] = tsum;
//				i++;
//				break;
//			}
//		}
//	}
//	int sum = 0;
//	for(int j = 0;j < i;++j){
//		sum += (pnum[j] * (tsum - tnum[j])) % 1000000007;
//		sum %= 1000000007;
//	}
//	printf("%d\n",sum);
//	return 0;
//}
