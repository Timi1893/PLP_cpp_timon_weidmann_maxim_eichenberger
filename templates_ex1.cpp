#include <iostream>
#include <string>

// TODO: Turn this into a template
int maximum(int a, int b) {
    return (a > b) ? a : b;
}

// TODO: Implement a generic minimum function

int main() {
    std::cout << maximum(5, 10) << "\n";
    std::cout << maximum(3.5, 7.8) << "\n";
    std::cout << maximum(
        std::string("apple"),
        std::string("banana")
    ) << "\n";

    // Bonus: Mixed types
    // maximum(3, 5.5);  // Compilation error!
}