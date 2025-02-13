#include <stdio.h>
int main(){
    int n = 417;
    
    int arr[3];
    int size = sizeof(arr)/sizeof(arr[1]);
    int sum=1;
    int Done=0;
    for(int i=0, mult = 10; i<size; i++){
        
        arr[i]=(n%mult);
        n/=10;
        
    }
    for(int i=size-1; i>=0; i--){
        sum*=arr[i];
    }
    printf("%d", sum);
    return 0;
}