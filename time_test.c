#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
    time_t current_time;
    time(&current_time);
    printf("time is");

    printf(" current time is %s",ctime(&current_time));
    srand(time(NULL));
    int random_no = rand();
    printf("random_no is %d",time(NULL));
}