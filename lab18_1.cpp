#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
	
};

double overlap(Rect ,Rect);

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
    double areaA = abs(x.a-y.b)*abs(w.a-h.b);
	double areaB = abs(x.b-y.a)*abs(w.b-h.a);
	double areaI = (min(x.a,y.a)-(max(w.a,h.a))*(min(x.b,y.b)-(max(w.b,w.h)));
     
}