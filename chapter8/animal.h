#ifndef _animal_h
#define _animal_h

//前向声明
struct animal_t;
//内存分配函数
struct animal_t* animal_new();
//构造函数
void animal_ctor(struct animal_t*);
//析构函数
void animal_dtor(struct animal_t*);

//行为函数
void animal_get_name(struct animal_t* , char *);
void animal_sound(struct animal_t*);

#endif