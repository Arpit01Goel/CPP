#include <chrono>
#include <iostream>

int main() {
    using namespace std::chrono;

    int count = 0;
    auto start = high_resolution_clock::now();
    do {
        count++;
    } while (duration_cast<seconds>(high_resolution_clock::now() - start).count() < 1);
    
    std::cout << "Iterations in one second: " << count << std::endl;
    return 0;
}