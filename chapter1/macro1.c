//引入对应的stdio.h
#include <stdio.h>
#include <string.h>
/*
* 宏的使用方法
* #NAME 是将Name转化为字符串 copy -> "copy"
* ##是字符串拼接 NAME(copy) ## _cmd[256] -> copy_cmd
*/
#define CMD(NAME)\
    char NAME ## _cmd[256] = ""; \
    strcpy(NAME ## _cmd,#NAME);
int main(int argc , char *argv[]){
    CMD(copy)
    CMD(paste)
    CMD(cut)
    char cmd[256];
    scanf("%s",cmd);
    if (strcmp(cmd, copy_cmd)){
        printf("This is the copy cmd");
    }
    if (strcmp(cmd, paste_cmd)){
        printf("This is the paste cmd");
    }
    if (strcmp(cmd, cut_cmd)){
        printf("This is the cut cmd");
    }
    return 0;
}


