#include<stdio.h>

#define SIZE 5
int main(int argc , char* argv[]){
    int arr[SIZE];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
    int* ptr = &arr[0];
    for(;;){
        if(ptr != &arr[SIZE - 1]){
            printf("This is value %d\n",*ptr);
            ptr++;
            continue;
        }
        break;
    }
    return 0;
}