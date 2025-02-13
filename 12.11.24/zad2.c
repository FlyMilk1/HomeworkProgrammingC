#include <stdio.h>

int f1(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int f2(int a, int b) {
    return (a * b) / f1(a, b);
}

int main() {
    int a = 12;
    int b = 18;
    int result = f2(a, b);

    printf("Smallest common mutiple of %d and %d is: %d\n", a, b, result);

    return 0;
}
