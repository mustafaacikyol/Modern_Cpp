#include <stdio.h>

int main(){

    //No standard way of checking empty
    int empty_array[10];
    printf("Array empty : %d\n", empty_array[0] == NULL);
    
    int full_array[5] = { 1, 2 , 3 , 4 , 5 };
    printf("Array empty : %d\n", full_array[0] == NULL);

    return 0;

}
