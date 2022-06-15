#include <iostream>
#include <vector>
#include <algorithm>

void Print(std::vector <int> x){

    for(const auto& elem : x){

        std::cout << elem << " ";

    }

    std::cout << std::endl;
}

int main(){

    std::vector<int> v{1,2,3,4,5,6,7,8,9,10};
    std::cout << "Before rotate : ";
    Print(v);

    std::rotate(v.begin(), v.begin()+2 ,v.end());
    std::cout << "After rotate : ";
    Print(v);

    return 0; 
    
}
