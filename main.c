#include "dict.h"
#include <stdio.h>


int main(){
    

// Demo int
object obj;
int i;
int_to_obj(10, &obj);
obj_to_int(obj, &i);
printf("%d\n", i);
// Demo float
float f;
float_to_obj(76.43f, &obj);
obj_to_float(obj, &f);
printf("%f\n", f);
// Demo string
char s[20];
str_to_obj("hola mundo", &obj);
obj_to_str(obj, s);
printf("%s\n", s);
}