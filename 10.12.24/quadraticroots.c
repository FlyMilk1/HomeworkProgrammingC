#include "quadraticroots.h"
#include <math.h>


QuadraticRootsResult findroots(long double a, long double b, long double c){
    long double D, x1, x2;
    QuadraticRootsResult qr;
    D = (b*b)/(4*a*c);
    if(D < 1){
        qr.x1 = 0;
        qr.x2 = 0;
        qr.norealroots = 1;
        return qr;
    }
    else{
        long double rootD = sqrtl(D);
    
        x1 = ((-b)+rootD)/(2*a);
        x2 = ((-b)-rootD)/(2*a);
        qr.x1 = x1;
        qr.x2 = x2;
        qr.norealroots = 0;
        return qr;
    }
    
}