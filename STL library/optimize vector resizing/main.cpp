#include <iostream>
#include <vector>

int main(){

    const int N = 100;

    std::vector<int> vec; // size 0 , capacity 0
    vec.reserve(N);       // size 0 , capacity 100

    for( int i = 0 ; i<N ; ++i){

        vec.emplace_back(i);

    } //vec ends with size 100, capacity 100

    std::vector<int> vec2; // size 0 , capacity 0

    for( int i=0; i<N ; ++i){

        vec.emplace_back(i);

    }
    //vec ends with size 100 , capacity 128 
    //So we should use this reserve function to tell in advance to the compiler allocate memory for n elements

    return 0;
    
}
