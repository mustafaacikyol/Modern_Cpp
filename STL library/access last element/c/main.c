#include <stdio.h>

int main(){

    //No robust way of doing it
    float f_arr[5] = {1.5 , 2.3};
    //is it 3,2 or 900?
    printf("Last element : %f\n", f_arr[3]);
    return 0;

}
