#include <stdio.h>
#include "vector.h"
#include <stdlib.h>

int main(void) {

    printf("crocodile\n");
    vector vect;
    vect_init(&vect, 35);
    for (int i = 0; i < 5; i++)
    {
        vect_push(&vect, 5);
    }
    return 0;
}

void vect_init (vector* v, size_t capacity){
    printf("I'm making a vector\n");
    v->location = malloc(capacity * sizeof(int));
    v->capacity = capacity;
    v->size = 0;
}

void vect_push (vector* v, int value){
    printf("pushing %i\n", value);
    if (v->size == v->capacity)
    {
        printf("UNDER DEVELOPMENT \n");
        exit;
    }
}


