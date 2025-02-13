#include <stdio.h>

#define SQUARE_SUM(A, B) ((A + B) * (A + B))

int main() {
    int a = 3;
    int b = 4;
    int result = SQUARE_SUM(a, b);

    printf("Result from (A + B)^2 is: %d\n", result);

    return 0;
}
