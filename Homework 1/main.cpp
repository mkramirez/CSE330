#include <iostream>
#include "Vector.h"

void print_vector (Vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    return;
}

int main() {
    Vector<int> v1;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
    }

    std::cout << "Vector: ";
    print_vector(v1);

    std::cout << "Index 10 Erased: ";
    v1.erase(10);
    print_vector(v1);

    Vector<int> v2;
    for (int i = 0; i < 10; i++) {
        v2.push_back(i);
    }

    std::cout << "Index 3 Erased: ";
    v2.erase(3);
    print_vector(v2);

    Vector<int> v3;
    for (int i = 0; i < 10; i++) {
        v3.push_back(i);
    }

    std::cout << "Insert 777 at Index 3: ";
    v3.insert(10, 777);
    print_vector(v3);

    std::cout << "Insert 777 at Index 3: ";
    v3.insert(5, 777);
    print_vector(v3);


    return 0;
}
