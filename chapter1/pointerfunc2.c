#include<stdio.h>


//定义函数
typedef int bool_t;
typedef bool_t (*less_than_func_t)(int,int);

//实现多态
bool_t less_than(int a , int b){
    return a < b ? 1 : 0;
}

bool_t less_than_modular(int a , int b){
    return (a % 5) < ( b % 5) ? 1 : 0;
}

int main(int argc , char * argv[]){
    less_than_func_t func_ptr = NULL;

    //实现多态
    func_ptr = &less_than;
    bool_t result = func_ptr(1,2);
    printf("func_ptr[less_than] : %d",result);

    func_ptr = &less_than_modular;
    result = func_ptr(8,1);
    printf("func_ptr[less_than_modular] : %d",result);
}
