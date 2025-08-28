#include<stdio.h>

//利用宏来控制编译了什么
//#define CONDITION 

int main(int argc , char * argv[]){
#ifdef  CONDITION
    printf("enter the condition\n");
#endif
    printf("leave the condition\n");
    return 0;
}