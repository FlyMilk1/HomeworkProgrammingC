#include <stdio.h>


#define PRINT_TYPE_INFO(type, format, signed_min, signed_max, unsigned_max) \
    printf("%10s %10s %10zu %10d %10d %10s %10u\n", \
           #type, \
           format, \
           sizeof(type), \
           (signed int)signed_min, \
           (signed int)signed_max, \
           format, \
           (unsigned int)unsigned_max);

int main() {
   
    printf("%10s %10s %10s %10s %10s %10s %10s\n", 
           "Type", "Format", "Bytes", "SMin", "SMax", "UFormat", "UMax");

    
    PRINT_TYPE_INFO(char, "%d", -128, 127, 255);
    PRINT_TYPE_INFO(short, "%d", -32768, 32767, 65535);
    PRINT_TYPE_INFO(int, "%d", -2147483648, 2147483647, 4294967295U);
    PRINT_TYPE_INFO(long, "%ld", -9223372036854775807L - 1, 9223372036854775807L, 18446744073709551615UL);
    PRINT_TYPE_INFO(long long, "%lld", -9223372036854775807LL - 1, 9223372036854775807LL, 18446744073709551615ULL);

    return 0;
}
