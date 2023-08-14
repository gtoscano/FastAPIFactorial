#include <iostream>
#include <cstdlib>
unsigned long long factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <number>" << std::endl;
        return 1;
    }

    int number = std::atoi(argv[1]);
    

    std::cout << factorial(number) << std::endl;
    return 0;
}

