#include <stdio.h>
#include <stdlib.h>

// Глобальні змінні
int global_var = 10;              // У **сегменті даних**
static int static_var = 20;       // Також у **сегменті даних**
const int const_var = 30;         // У **сегменті тексту (read-only)**

int main() {
    int stack_var = 1;                     // У **стеці**
    int *heap_var = malloc(sizeof(int));   // У **купі**
    *heap_var = 100;

    printf("Address of stack_var:  %p (stack)\n",  (void *)&stack_var);
    printf("Address of heap_var:   %p (heap)\n",   (void *)heap_var);
    printf("Address of global_var: %p (data)\n",   (void *)&global_var);
    printf("Address of static_var: %p (data)\n",   (void *)&static_var);
    printf("Address of const_var:  %p (text/rodata)\n", (void *)&const_var);

    free(heap_var);
    return 0;
}
