#include<stdio.h>

int sum(int a , int b){
    return a + b;
}
int subtract(int a , int b){
    return a - b;
}


int main(int argc , char * argv[]){
    //定义函数指针
    //(int ,int) -> int 的指针
    int(*func_ptr)(int , int);
    func_ptr = NULL;

    //将sum的指针复制给func_ptr
    func_ptr = &sum;
    int result = func_ptr(5,4);
    printf("func_ptr[sum] is %d",result);

    //将subtract的指针赋值给func_ptr
    func_ptr = &subtract;
    result = func_ptr(5,4);
    printf("func_ptr[subtract] is %d",result);

    return 0;
}