#ifndef __ANIMAL_P_H
#define __ANIMAL_P_H


//类似type sound_func_t : (any) => void;
#include "animal.h"
typedef void(* sound_func_t)(void *);

//前向声明
struct animal_t {
    char* name;
    sound_func_t sound_func;
};

#endif