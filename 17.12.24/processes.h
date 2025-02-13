#ifndef PROCESSES_H
#define PROCESSES_H

typedef struct {
    unsigned int uid;
    char name[30];
}Process;
extern Process processes[5];
unsigned int nextprocessid();
extern unsigned int createnewprocess(char name[]);
extern unsigned int stopprocess(unsigned int uid);
#endif