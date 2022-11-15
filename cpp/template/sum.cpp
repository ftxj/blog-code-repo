#include <iostream>
#include <string>
using namespace std;

template <typename T1, typename... T>
auto Sum(T1 a) {
    return a;
}

template <typename T1, typename... T>
auto Sum(T1 a, T... b) {
    return a + Sum(b...);
}

int main() {
	int a1[4] = { 1, 2, 3, 4};
    float a2[4] = { 1.1, 2.2, 3.3, 4.4};

	cout << Sum(a1[0], a1[1]) << endl;


	cout << Sum(a1[0], a1[1], a1[2], a1[3]) << endl;

	cout << Sum(a2[0], a2[1], a2[2], a2[3]) << endl;

	return 0;
}