#include <stdio.h>
long ToBinary(int decimal){
    int temp = decimal;
    int m = 1;
    int i = 0;
    long binary = 0;
    long binaryComplete = 0;
    while(temp>0){
        int n = temp % 2;
        binary+= n*m;
        temp /= 2;
        m*=10;
        i++;
    }
    for(int j = i-1, m=1; j<=0; j--, binary/-10){
        for(int n=j; n<0; n--){
            m*=10;
        }
        binaryComplete+=binary%m;
    }
    return binary;
}
int main(){
    
    
    int x;
    
    printf("Enter your decimal:\n");
    scanf("%d", &x);
    printf("%ld",ToBinary(x));
    
    
    
    return 0;
}
