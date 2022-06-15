#include<iostream>
#include<vector>

int main(){

    std::vector<char> letters_ = {'n', 'a', 'c', 'h', 'o'};
    std::cout<< "Before : " ;

    for(int i=0 ; i<5 ; i++){

        std::cout<<letters_.at(i);

    }

    letters_.clear();

    std::cout<< "\nAfter : \n" ;

    for (int i = 0; i < 5; i++){

        std::cout << letters_.at(i);
    }

    return 0;
}
