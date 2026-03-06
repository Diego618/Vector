#include <stdio.h>
#include "vector.h"


int main(void) {
        printf("crocodile\n");
    vector vect;
    vect_init(&vect, 10);
    for (int i = 0; i < 10; i++)
    {
        vect_push(&vect, i);
    }
    vect_print(&vect);
    vect_push(&vect, 67);
    vect_print(&vect);
    vect_free(&vect);
    return 0;
}