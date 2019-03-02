//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//struct Station{
//	double distance;
//	double price;
//};
//
//Station s[501];
//
//bool cmp(Station s1,Station s2){
//	return s1.distance < s2.distance;
//}
//
//int main(){
//	double cmax,d,davg;
//	int n;
//	scanf("%lf%lf%lf%d",&cmax,&d,&davg,&n);
//	for(int i = 0;i < n;++i){
//		scanf("%lf %lf",&s[i].price,&s[i].distance);
//	}
//	sort(s,s + n,cmp);
//	double ableRunDistance = cmax * davg;
//	double totalPrice = 0;
//	double currDistance = 0;
//	int nextS = 1;
//	double currRank = 0;//remind gas
//	Station currStation = s[0];
//	if(s[0].distance == 0){
//		
//		while(currDistance < d){
//			int min = 0;
//			
//			int i = nextS;
//			int j = nextS;
//			for(;i < n;++i){
//				if((currStation.distance + ableRunDistance) < s[i].distance){
//					nextS = i - 1;
//					break;
//				}
//				else if(s[i].price < currStation.price){	
//					nextS = i;
//					min = i;
//					break;
//				}
//			}
//			
//			
//			if(min == 0){
//				if(currStation.distance + ableRunDistance < d){
//					totalPrice += currStation.price * (cmax - currRank);
//					currRank = cmax - (s[nextS].distance - currStation.distance) / davg;
//					currStation = s[nextS];
//					currDistance = currStation.distance;
//				}
//				else{
//					totalPrice += ((d - currStation.distance) / davg - currRank) * currStation.price;
//					currDistance = d;
//					break;
//				}	
//			}
//			else{
//				double toKDistance = s[min].distance - currDistance;
//				totalPrice += (toKDistance / davg - currRank) * currStation.price;
//				currStation = s[min];
//				currRank = 0;
//				currDistance = currStation.distance;
//			}
//			if(nextS == n - 1){
//				if(currStation.distance + ableRunDistance < d){
//					totalPrice += currStation.price * (cmax - currRank);
//					currRank = cmax;// - (s[nextS].distance - currStation.distance) / davg;
////					currStation = s[nextS];
////					currDistance = currStation.distance;
//				}
//				else{
//					totalPrice += ((d - currStation.distance) / davg - currRank) * currStation.price;
//					currDistance = d;
////					break;
//				}
//				break;
//			}
//			if(nextS == j - 1){
//				break;
//			}
//			
//		}	
//	}
//	currDistance += currRank * davg;
//	if(currDistance >= d){
//		printf("%.2f\n",totalPrice);
//	}
//	else{
//		printf("The maximum travel distance = %.2f\n",currDistance);
//	}
//	
//}
