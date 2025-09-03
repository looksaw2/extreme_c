#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "./duck.h"
#include "./animal.h"
#include "./animal_p.h"


struct duck_t {
    struct animal_t animal;
};

void __duck_sound(void* ptr){
    struct animal_t* animal = (struct animal_t*)ptr;
    printf("%s: Quacks\n",animal->name);
}

struct duck_t* duck_new(){
    return (struct duck_t*)malloc(sizeof(struct duck_t));
}

void duck_ctor(struct duck_t* duck){
    animal_ctor((struct animal_t*) duck);
    strcpy(duck->animal.name, "Duck");
    duck->animal.sound_func = __duck_sound;
}

void duck_dtor(struct duck_t* duck){
    animal_dtor((struct animal_t *) duck);
}