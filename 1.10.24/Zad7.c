#include <stdio.h>
#include <string.h>
struct Student{
    char Name[20];
    int No;
    int AvgGrade;
};
int main(){
    struct Student std;
    strcpy(std.Name, "Ivan");
    std.No = 13;
    std.AvgGrade = 5;
    printf("%s\n", std.Name);
    printf("%d\n", std.No);
    printf("%d\n", std.AvgGrade);
    return 0;
}