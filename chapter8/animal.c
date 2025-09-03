#include "animal.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include"animal_p.h"

//父类的sound函数
void __animal_sound(void *this_ptr){
    //void* 转化
    struct animal_t* animal = (struct animal_t*)this_ptr;
    //打印函数
    printf("%s:Beeeeep\n",animal->name);
}

//分配内存函数
struct animal_t* animal_new(){
    return (struct animal_t*)malloc(sizeof(struct animal_t));
}

//构造函数
void animal_ctor(struct animal_t* animal){
    animal->name = (char *)malloc(10 * sizeof(char));
    strcpy(animal->name, "animal");
    animal->sound_func = __animal_sound;
}
//析构函数
void animal_dtor(struct animal_t* animal){
    free(animal->name);
}

//行为函数
void animal_get_name(struct animal_t* animal , char* buffer){
    strcpy(buffer, animal->name);
}

void animal_sound(struct animal_t* animal){
    animal->sound_func(animal);
}
