#include "cat.h"
#include "animal.h"
#include "animal_p.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct cat_t {
    struct animal_t animal;
};
void __cat_sound(void* ptr){
    struct animal_t* animal = (struct animal_t*)ptr;
    printf("%s :Meow\n",animal->name);
}

struct cat_t* cat_new(){
    return (struct cat_t*)malloc(sizeof(struct cat_t));
}

void cat_ctor(struct cat_t *cat){
    animal_ctor((struct animal_t*) cat);
    strcpy(cat->animal.name, "Cat");
    cat->animal.sound_func = __cat_sound;
}

void cat_dtor(struct cat_t *cat){
    animal_dtor((struct animal_t *)cat);
}
