#include <stdio.h>
#include <string.h>

int main(){

    char letters[5] = {'n', 'a', 'c', 'h', 'o'};
    printf("Before : ");
    for (int i = 0; i < 5; i++){
        printf("%c", letters[i]);
    }
    memset(letters, 0 , sizeof(letters));
    printf("\nAfter : ");
    for(int i=0 ; i<5 ; i++){
        printf("%c",letters[i]);
    }
    return 0;

}
