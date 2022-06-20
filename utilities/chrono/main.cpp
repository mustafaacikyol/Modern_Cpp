#include <iostream>
#include <chrono>

void fibonacci(int n) {
  
  int f[n];
  int i;
  f[0] = 0;
  f[1] = 1;
  for (i = 2; i <= n; i++) {
    f[i] = f[i - 1] + f[i - 2];
  }
  
  std::cout << f[n] << std::endl;
  
}

int main(){

    auto start = std::chrono::steady_clock::now();
    std::cout << "f(42) = ";
    fibonacci(42);
    auto end = std::chrono::steady_clock::now();

    std::chrono::duration<double> sec = end - start;
    std::cout << "elapsed time : " << sec.count() << "s\n";

    return 0;

}
