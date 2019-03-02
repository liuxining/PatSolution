//#include <stdio.h>
//#include <string>
//#include <string.h>
//using namespace std;
//
//int hashTable[128] = {0};
//
//int main(){
//	char s1[100010],s2[100010];
////	string s1,s2;
//	scanf("%s",s1);
//	scanf("%s",s2);
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	for(int i = 0;i < len1;++i){
//		int find = 0;
//		for(int j = 0;j <= i && j < len2;++j){
//			if(s2[j] == s1[i]){
//				find = 1;
//				break;
//			}
//		}
//		if(!find){
//			char ch = s1[i];
//			if(ch >= 'a' && ch <= 'z'){
//				ch -= 32;
//			}
//			if(hashTable[ch] == 0){
//				printf("%c",ch);
//				hashTable[ch] = 1;	
//			}
//			
//		}
//	}
//	return 0;
//}
