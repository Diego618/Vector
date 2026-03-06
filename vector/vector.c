#include <stdio.h>
#include "vector.h"
#include <stdlib.h>

int main(void) {

}


void vect_free (vector* v){
    free(v->location);
    v->location = NULL;
}

void vect_init (vector* v, size_t capacity){
    printf("I'm making a vector\n");
    v->capacity = capacity;
    v->location = malloc(v->capacity * sizeof(int));
    v->size = 0;
}


void vect_print (vector* v){
    for (int i = 0; i < v->capacity; i++)
    {
        printf("vect [%d]: %d\n", i, v->location[i]);
    }
}


void vect_push (vector* v, int value){
    if (v->size >= v->capacity)
    {
        int i = vect_resize(v);
        if (i == 1)
        {
            return;
        }
    }
    printf("pushing\n");
    v->location[v->size] = value;
    v->size++;
}


int vect_resize (vector* v){
    int newCap = v->capacity*2;
    int* temp = realloc(v->location, newCap*sizeof(int));
    if (temp != NULL)
    {
        v->location = temp;
        v->capacity = newCap;
        return 0;
    }
    else
    {
        return 1;
    }
}


