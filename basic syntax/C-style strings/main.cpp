#include<cstring>
using namespace std;
#include<iostream>

int main(){

    const char source[] = "Copy this!";
    char destination[5];
    cout << source << '\n';

    strcpy(destination, source);
    cout << destination << '\n';

    //source is const, no problem right?
    cout << source << '\n';

    return 0;
}
