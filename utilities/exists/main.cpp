#include <iostream>
#include <filesystem>
#include <fstream>
namespace fs = std::filesystem;

void demo_exists(const fs::path& p){

    std::cout << p;
    if (fs::exists(p))      std::cout << " exists\n";
    else                    std::cout << " does not exist\n";
    
}

int main(){

    fs::create_directory("sandbox");
    std::ofstream("sandbox/file");
    demo_exists("sandbox/file");
    demo_exists("sandbox/cacho");
    fs::remove_all("sandbox");

    return 0;

}
