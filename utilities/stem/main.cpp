#include <filesystem>
#include <iostream>
namespace fs = std::filesystem;

int main(){

    std::cout << fs::path("/foo/bar.txt").stem() << std::endl
              << fs::path("/foo/00000.png").stem() << std::endl
              << fs::path("/foo/.bar").stem() << std::endl;

    return 0;

}
