#include <stdio.h>

#define DEBUG_PRINT(var) \
    printf("Variable '%s' has value %d (File: %s, Line: %d)\n", #var, var, __FILE__, __LINE__)

int main() {
    int x = 42;
    DEBUG_PRINT(x);
    return 0;
}
