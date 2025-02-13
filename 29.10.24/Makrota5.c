#include <stdio.h>
#define ARR_SIZE 4
#define SWAP(a, b, TYPE) \
    do{ \
    TYPE temp=a; \
    a=b; \
    b=temp;\
    }while(0)
#define SORT(ARRAY, SIZE, TYPE, COMPARE)               \
    do {                                               \
        for (int i = 0; i < (SIZE) - 1; i++) {         \
            for (int j = i + 1; j < (SIZE); j++) {     \
                if ((ARRAY[i]) COMPARE (ARRAY[j])) {   \
                    SWAP(ARRAY[i], ARRAY[j], TYPE);    \
                }                                      \
            }                                          \
        }                                              \
    } while(0)

int main(){
    int arr[] = {5,8,2,3};
    SORT(arr, ARR_SIZE, int, >);
    for(int i=0; i<ARR_SIZE; i++){
        printf("%d", arr[i]);
    }
}
