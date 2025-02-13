#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "transformation.h"

transformation str_to_long(const char *str) {
    transformation result;
    result.result = 0;
    result.error[0] = '\0';

    char *endptr;
    result.result = strtol(str, &endptr, 10);

    if (*endptr != '\0') {
        result.result = 0;
        strncpy(result.error, "Invalid input string", sizeof(result.error) - 1);
        result.error[sizeof(result.error) - 1] = '\0';
    }

    return result;
}
