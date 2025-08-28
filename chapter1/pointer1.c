#include <stdio.h>

//得到ptr的数值是200
int main(int argc , char * argv[]){
    int var = 100;
    int* ptr = 0;
    ptr = &var;
    *ptr = 200;
    printf("var value is %d",var);
}