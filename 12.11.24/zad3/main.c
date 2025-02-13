#include <stdio.h>
#include "transformation.h"

int main() {
    const char *test_inputs[] = { "-123", "12ab23", "456", "abc123", "789" };
    size_t num_tests = sizeof(test_inputs) / sizeof(test_inputs[0]);

    for (size_t i = 0; i < num_tests; i++) {
        transformation result = str_to_long(test_inputs[i]);
        
        if (result.error[0] == '\0') {
            printf("Input: \"%s\" -> Result: %ld\n", test_inputs[i], result.result);
        } else {
            printf("Input: \"%s\" -> Error: %s\n", test_inputs[i], result.error);
        }
    }

    return 0;
}
