#include<iostream>
#include<algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
	double A1,A2;
	A1 = min(R1.x+R1.w,R2.x+R2.w)-max(R1.x,R2.x);
	A2 = min(R1.y,R2.y)-max(R1.y-R1.h,R2.y-R2.h);
	if(A1*A2<0) {
		return 0;
	}
	else{
		return A1*A2;
	} 
}
int main(){
	Rect R1 = {1,1,5,5};
	Rect R2 = {2,2,5,5};	
	cout << overlap(R1,R2);
}