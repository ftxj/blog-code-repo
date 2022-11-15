#include <iostream>
#include <string>
#include <type_traits>
using namespace std;

template <typename T, int X>
typename std::enable_if<(X == 0), T>::type
factorial() {
    return 0;
}

template <typename T, int X>
typename std::enable_if<(X > 0), T>::type
factorial() {
    return X + factorial<T, X-1>();
}

#define Factorial(x) factorial<int, x>()

int main() {
    cout << Factorial(5) << endl;
	return 0;
}