#include<iostream>

int main(){

    int i = 1;
    int j = i % 2;

    while (j){
       
       i = 4;
       j = i%2;

       if( !(j) ){
           std::cerr << i << std::endl;
       } else {
           break;
       }
    }
    
    return 0;
}
