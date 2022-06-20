#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    string file_name = "image.txt";
    ofstream file;
    file.open(file_name);
    int rows = 2;
    int cols = 3;
    vector <float> vec(rows*cols);
    fill(vec.begin(), vec.end(), -100.001);
    file << rows << "\n";
    file << cols << "\n";
    for (int i = 0; i < vec.size(); i++)
    {
        file << vec[i] << "\n";
    }
    
    file.close();
    return 0;

}
