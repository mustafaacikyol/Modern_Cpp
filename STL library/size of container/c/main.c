#include <stdio.h>

int main(){

    int data[17];
    size_t data_size = sizeof(data)/sizeof(data[0]);
    printf("Size of array : %zu\n",data_size);
    return 0;
    
}
