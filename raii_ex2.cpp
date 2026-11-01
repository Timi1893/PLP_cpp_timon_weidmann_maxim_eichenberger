#include <iostream>
#include <memory>

void process(bool fail) {
    int* data = new int[5];

    for (int i = 0; i < 5; i++) {
        data[i] = i * 10;
    }

    if (fail) {
        std::cout << "Something went wrong!\n";
        return;
    }

    for (int i = 0; i < 5; i++) {
        std::cout << data[i] << " ";
    }

    delete[] data;
}

int main() {
    process(true);
    process(false);
}