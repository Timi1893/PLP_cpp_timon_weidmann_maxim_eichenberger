#include <iostream>
#include <string>
#include <vector>

template <typename T>
class Storage {
private:
    std::vector<T> items;

public:
    void add(T item) {
        items.push_back(item);
    }

    // TODO: Implement getLast()

    // TODO: Implement size()

    // TODO: Implement isEmpty()
};

int main() {
    Storage<int> numbers;
    numbers.add(10);
    numbers.add(20);

    Storage<std::string> words;
    words.add("Hello");
    words.add("World");

    // TODO: Print the last item in each container
    // TODO: Print the number of stored items
}