#include <stdio.h>
int arr[] = {1, 7, 3, 4, 9, 2};
int BubbleSort(){
    int trulySwapped=0;
    int size =sizeof(arr)/sizeof(arr[1]);
    while(!trulySwapped){
        trulySwapped=1;
        for(int i=0; i<size-1; i++){
            if(arr[i]>arr[i+1]){
                trulySwapped=0;
                int tmp;
                tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
            }
        }
    }
    return size;
}
int Multply(int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum+=arr[i]*i;
    }
    return sum;
}
int main(){
    
    int size = BubbleSort();
    
    printf("Final Number:\n");
    printf("%d",Multply(size));
    
    return 0;
}
