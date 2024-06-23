#include <iostream>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    
    unsigned long long result = factorial(n);
    std::cout << "Factorial of " << n << " is: " << result << std::endl;
    
    return 0;
}