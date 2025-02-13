
#include <stdlib.h>
#include "safeint.h"
#define MAXINTSIZE 2147483647
#define MININTSIZE -2147483647
SafeResult safeadd(int a, int b) {
    SafeResult result;
    if ((b > 0 && a > MAXINTSIZE - b) || (b < 0 && a < MININTSIZE - b)) {
        result.errorflag = 1;
    } else {
        result.value = a + b;
        result.errorflag = 0;
    }
    return result;
}

SafeResult safesubtract(int a, int b) {
    SafeResult result;
    if ((b > 0 && a < MININTSIZE + b) || (b < 0 && a > MAXINTSIZE + b)) {
        result.errorflag = 1;
    } else {
        result.value = a - b;
        result.errorflag = 0;
    }
    return result;
}

SafeResult safemultiply(int a, int b) {
    SafeResult result;
    if (a != 0 && (b > MAXINTSIZE / a || b < MININTSIZE / a)) {
        result.errorflag = 1;
    } else {
        result.value = a * b;
        result.errorflag = 0;
    }
    return result;
}

SafeResult safedivide(int a, int b) {
    SafeResult result;
    if (b == 0 || (a == MININTSIZE && b == -1)) {
        result.errorflag = 1;
    } else {
        result.value = a / b;
        result.errorflag = 0;
    }
    return result;
}

SafeResult safestrtoint(const char *str) {
    SafeResult result;
    char *endptr;
    long temp = strtol(str, &endptr, 10);

    if (temp > MAXINTSIZE || temp < MININTSIZE || *endptr != '\0') {
        result.errorflag = 1;
    } else {
        result.value = (int)temp;
        result.errorflag = 0;
    }
    return result;
}
