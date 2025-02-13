#include <stdio.h>

int main(){
    int arr[] = {1, 7, 10, 15, 16, 13, 23, 30};
    int sum = 0;
    int flag=0;
    int size =sizeof(arr)/sizeof(arr[1]);
    for(int i=0; i < size; i++){
        for(int n=2;n<arr[i];n++){
            if(arr[i] % n == 0){
                flag=1;
                break;
            }
        }
        if(flag==0 && arr[i]!=1){
            sum+=arr[i];
            
                      
        }
        flag=0;
    }
    printf("%d\n", sum);
    return 0;
}