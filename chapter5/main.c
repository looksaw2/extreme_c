#include<stdlib.h>
int main(int argc , char * argv[]){
    //内存泄露,valgrind分析
    char* ptr = (char *)malloc(16 * sizeof(char));
    return 0;
}