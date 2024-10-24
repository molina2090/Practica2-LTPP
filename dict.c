#include <dict.h>
#include <stddef.h>

void int_to_obj(int src, object *dst){
    //(*dst).type = 0; equivalente a: dst->type = TYPE_INT; donde TYPE_INT hemos definido como 0 en dict.h
    dst->type = TYPE_INT;
    sprintf(dst->data, "%d", src); 

}
//crear resto de implementaciones de funciones int_to_x
void float_to_obj(float src, object *dst){
    dst->type = TYPE_FLOAT;
    sprintf(dst->data, "%f", src);
}
void str_to_obj(char *src, object *dst){
    dst->type = TYPE_STRING;
    sprintf(dst->data, "%s", src);
}

dict *dict_new(){
    dict *d = malloc(sizeof *d);
    
   if(d!=NULL){
        d->len = 0; 
        d->first = NULL;
   }

    return d;
}

dict dict_destroy(dict *d){
    dict_node *current = d->first;
    dict_node *next;

    while(current!=NULL){
        next = current->next;
        free(current);
        current = next;
    }
    free(d);
}