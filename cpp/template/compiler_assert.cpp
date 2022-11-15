#include <type_traits>
#include <iostream>


template<bool>
struct CompiledTimeError;

template<>
struct CompiledTimeError<true> {};

#define compiler_assert(x) CompiledTimeError<x>()

int main() {
    compiler_assert(0);
    return 0;
}

