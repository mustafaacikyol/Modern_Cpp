#include <iostream>

namespace fun {
    
    int GetMeaningOfLife(void){ return 42; }
  
}

namespace boring {

    int GetMeaningOfLife(void){ return 0 ;}
   
}

int main(){

    std::cout << boring::GetMeaningOfLife() << std::endl 
              << fun::GetMeaningOfLife() << std::endl ;

    return 0;
}

