#include <stdio.h>
int Max(char str[]){
    int max = str[0];
    for (int i=0; i<sizeof(str)/sizeof(str[0]); i++){
        if(str[i]>max){
            max = str[i];
        }
    }
    return max;
}
int main(){
    
   
    
    char str[25];
    printf("Enter your string:\n");
    scanf( "%24[^\n]", &str);
    printf("%c", Max(str));
    
    
    
    return 0;
}
