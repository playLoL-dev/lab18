#include<iostream>
#include<algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2){


	double ovy = min(R1.y,R2.y);
	double ovx = max(R1.x,R2.x);


	double rhs_ov = min(R1.x + R1.w,R2.x + R2.w);
	double top_ov = max(R1.y - R1.h,R2.y - R2.h);
	
	double ovw = rhs_ov - ovx;
    double ovh = ovy - top_ov;

	    if( ovw <= 0 || ovh <= 0){
        return 0;
    }
    else{
        return ovw * ovh;
    }

}