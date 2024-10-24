#define MAX_DATA 1000
#define TYPE_INT 0
#define TYPE_FLOAT 1
#define TYPE_STRING 2

// OBJECT
// type=0,1,2–int/float/string
typedef struct {int type; char data[MAX_DATA];} object;

void int_to_obj(int src, object *dst); //entero a transformar y bloque de memoria donde se guarda (*dst)
void float_to_obj(float src, object *dst); //float a transformar y bloque de memoria donde se guarda (*dst)
void str_to_obj(char *src, object *dst); //string a transformar y bloque de memoria donde se guarda (*dst)

void obj_to_int(object src, int *dst);
void obj_to_float(object src, float *dst);
void obj_to_str(object src, char *dst);

//DICT
typedef struct st_dict_node {
    object key;
    object value;
    struct st_dict_node *next;
} dict_node;


typedef struct {
    dict_node *first;
    int len;
} dict;

dict *dict_new(); 
dict dict_destroy(dict *d);
//void dict_insert