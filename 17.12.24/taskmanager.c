#include <stdio.h>
#include <string.h>
#include "processes.h"
int main(){
    while(1){
        char str[25];
        printf("You may enter one of the following commands:\ncreateprocess\nlistprocesses\nstopprocess\nexit\n");
        scanf("%s", str);
        if (strcmp(str, "createprocess")==0){
            char name[25];
            printf("Enter process name:\n");
            scanf("%s", name);
            if(createnewprocess(name) == 0)
                printf("Process limit reached.\nPlease close other procesess before submiting new ones.\n");
            else{
                printf("Process added successfuly.\n");
            }
            
        }
        else if(strcmp(str, "listprocesses")==0){
            for(int i=0; i<sizeof(processes)/sizeof(processes[0]); i++){
                printf("ID: %d Name: %s\n", processes[i].uid, processes[i].name);
            }
        }
        else if(strcmp(str, "stopprocess")==0){
            int id;
            printf("Enter process ID:\n");
            scanf("&d", &id);
            stopprocess(id);
            printf("Process stopped\n");
            
        }
        else if(strcmp(str, "exit")==0){
            return 0;
        }
    }
    

    
}