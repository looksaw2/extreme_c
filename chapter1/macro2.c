#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//定义版本号
#define VERSION "0.0.1"
//定义打印函数
#define LOG_ERROR(format,...) \
    fprintf(stderr,format,__VA_ARGS__)

int main(int argc , char * argv[]){
    if(argc < 3){
        LOG_ERROR("Invalid number of arguments for version %s \n",VERSION);
        exit(-1);
    }
    if (strcmp(argv[1], "-n") != 0) {
        LOG_ERROR("%s is a wrong param at index %d for version %s.",
            argv[1], 1, VERSION);
        exit(1);
    }

}