#include <stdio.h>

int main(void) {
    int cat = 1;
    int *i = &cat;
    printf("cat: %p\n", i);
}
