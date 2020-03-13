#include<iostream>
#include<cmath>
using namespace std;
struct Rect{double x,y,w,h;};
double overlap(Rect,Rect);
int main(){
	Rect a;
	Rect b;
	cout << "Please input Rect 1 (x y w h): ";
	cin >> a.x >> a.y >> a.w >> a.h; 
	cout << "Please input Rect 2 (x y w h): ";
	cin >> b.x >> b.y >> b.w >> b.h;
	cout << "Overlap area = " << overlap(a,b);	
	return 0;
}
double overlap(Rect a,Rect b){
   double areaA;
   if(a.x+a.w > b.x && b.y-b.h < a.y){
 areaA = abs((a.w)-abs(b.x-a.x)) * abs(b.h-abs(b.y-a.y));
}else{
	areaA =0;
}
   return areaA;
}