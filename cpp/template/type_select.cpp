#include <type_traits>
#include <iostream>


template<bool, typename T, typename U>
struct Select {
    typedef T type;
};

template<typename T, typename U>
struct Select<false, T, U> {
    typedef U type;
};

int main() {
    Select<true, int, float>::type a;
    return 0;
}

