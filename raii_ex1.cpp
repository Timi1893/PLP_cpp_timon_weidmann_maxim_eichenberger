#include <iostream>
#include <stdexcept>
#include <string>

class Resource {
private:
    std::string name;

public:
    Resource(std::string n) : name(n) {
        std::cout << "Acquired: " << name << "\n";
    }

    ~Resource() {
        std::cout << "Released: " << name << "\n";
    }
};

void process(int mode) {
    Resource a("Database");
    Resource b("File");

    // TODO 1: Return early if mode == 1

    // TODO 2: Throw an exception if mode == 2

    std::cout << "Processing complete\n";
}

int main() {
    // TODO: Call process with modes 0, 1 and 2
    // TODO: Catch the exception
}