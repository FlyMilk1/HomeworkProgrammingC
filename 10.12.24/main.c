#include <stdio.h>
#include "quadraticroots.h"
#define TYPE 0
int main(){
    #if TYPE == 0
        int a,b,c;
        printf("Enter a:\n");
        scanf("%d", &a);
        printf("Enter b:\n");
        scanf("%d", &b);
        printf("Enter c:\n");
        scanf("%d", &c);
        QuadraticRootsResult qrr;
        qrr = findroots((long double)a, (long double)b, (long double)c);
        if(qrr.norealroots = 0){
            printf("There are no real roots.");
        }
        else{
            printf("The output is:\nx1: %Lf\nx2: %Lf", qrr.x1, qrr.x2);
        }
    #elif TYPE == 1
        float a,b,c;
        printf("Enter a:\n");
        scanf("%f", &a);
        printf("Enter b:\n");
        scanf("%f", &b);
        printf("Enter c:\n");
        scanf("%f", &c);
        QuadraticRootsResult qrr;
        qrr = findroots((long double)a, (long double)b, (long double)c);
        if(qrr.norealroots = 0){
            printf("There are no real roots.");
        }
        else{
            printf("The output is:\nx1: %Lf\nx2: %Lf", qrr.x1, qrr.x2);
        }
    #elif TYPE == 2
        double a,b,c;
        printf("Enter a:\n");
        scanf("%lf", &a);
        printf("Enter b:\n");
        scanf("%lf", &b);
        printf("Enter c:\n");
        scanf("%lf", &c);
        QuadraticRootsResult qrr;
        qrr = findroots((long double)a, (long double)b, (long double)c);
        if(qrr.norealroots = 0){
            printf("There are no real roots.");
        }
        else{
            printf("The output is:\nx1: %Lf\nx2: %Lf", qrr.x1, qrr.x2);
        }
    #endif
        
}