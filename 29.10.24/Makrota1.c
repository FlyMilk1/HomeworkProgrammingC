#include <stdio.h>

#define COMP(a, b) (((a) > (b)) ? (a) : (b))
int main(){
    int a = 10;
    int b=3;
    printf("%d", COMP(a,b));
    return 0;
}
