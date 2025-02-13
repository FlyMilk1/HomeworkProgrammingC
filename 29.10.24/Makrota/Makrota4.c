#include <stdio.h>

#define SWAP(a, b, TYPE) \
    do{ \
    TYPE temp=a; \
    a=b; \
    b=temp;\
    }while(0)
int main(){
    int a = 6;
    int b = 3;
    SWAP(a, b, int);
    printf("%d\n%d", a, b);
}
