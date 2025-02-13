#include <stdio.h>

#define ARR_SIZE 5
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    for(int i=0; i<ARR_SIZE; i++){
        printf("%d", arr[i]);
    }
    return 0;
}