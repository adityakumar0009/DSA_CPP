#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

typedef struct{
    char id;
    int deadline;
    int profit;
}job;

int comparejob(const job *a, const job *b){
    return b->profit - a->profit;
}

void bestjob(job jobs[],int sizeofjobs){
    char jobsOToDo[8]= {'\0'};
    for(int i=0; k=0; i<sizeofjobs; i++)
}
