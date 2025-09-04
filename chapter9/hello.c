//不使用标准输出来，直接使用内核调用
#include <asm/unistd_64.h>
#define _GNU_SOURCE
#include<unistd.h>
#include<sys/syscall.h>

int main(int argc, char * argv[]){
    char msg[20] = "Hello World\n";
    syscall(__NR_write,1,msg,13);
    return 0;
}