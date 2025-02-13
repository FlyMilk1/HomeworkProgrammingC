#include "processes.h"
#include <stdio.h>
#include <limits.h>
#include <string.h>
Process processes[5];
unsigned int processesCount = 1;

unsigned int nextprocessid(){
    if(processesCount > UINT_MAX){
        return 0;
    }
    else{
        return processesCount;     
    }
}
unsigned int createnewprocess(char name[]){
    if (nextprocessid() == 0){
        return 0;
    }
    else{
        processes[nextprocessid()].uid = nextprocessid();
        strcmp(processes[nextprocessid()].name, name);
        processesCount++;
    }
}
unsigned int stopprocess(unsigned int uid){
    for(int i=0; i<=(sizeof(processes))/(sizeof(processes[0])); i++){
        if(processes[i].uid == uid){
            int n=0;
            for(int o=(sizeof(processes))/(sizeof(processes[0]))-1; o>i; o--, n++){
                processes[i+n] = processes[i+n+1];
            }
            processesCount--;
        }
    }
}