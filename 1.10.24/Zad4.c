#include <stdio.h>
int arr[] = {1, 2, 5, 7, 8, 10};
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
int binarySearch(int low, int high, int x){
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid] < x){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}
int main(){
    
    int size = BubbleSort();
    int x;
    printf("Enter your number:\n");
    scanf("%d", &x);
    printf("Returned:\n%d", binarySearch(0, size-1, x));
    
    return 0;
}
