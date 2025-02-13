#include <stdio.h>
#include "safeint.h"
#include "util.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        print_error("Two arguments are required.");
        return 1;
    }

    SafeResult a = safestrtoint(argv[1]);
    SafeResult b = safestrtoint(argv[2]);

    if (a.errorflag || b.errorflag) {
        print_error("Invalid arguments. Numbers are too large or not integers.");
        return 1;
    }

    SafeResult result = safedivide(a.value, b.value);
    if (result.errorflag) {
        print_error("Division by zero or overflow occurred.");
        return 1;
    }

    printf("Result: %d\n", result.value);
    return 0;
}
