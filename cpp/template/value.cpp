#include <type_traits>
#include <iostream>

template<int V1, int V2>
struct Division {
    enum {value = V1 / V2};
};

template<int V1>
struct Division<V1, 0> {
    enum {value = 0};
};

int main() {
    std::cout << Division<5,2>::value << std::endl;
    return 0;
}

