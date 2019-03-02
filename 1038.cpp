//#include <stdio.h>
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//
//string s[10010];
//
//bool cmp(string s1,string s2){
//	return s1 + s2 < s2 + s1;
//}
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	for(int i = 0;i < n;++i){
//		cin>>s[i];
//	}
//	sort(s,s + n,cmp);
//	string ans;
//	for(int i = 0;i < n;++i){
//		ans += s[i];
//	}
//	while(ans.size() != 0 && ans[0] == '0'){
//		ans.erase(ans.begin());
//	}
//	if(ans.size() == 0){
//		printf("0\n");
//	}
//	else{
//		cout<<ans<<endl;
//	}
//	return 0;
//}
