#include <iostream>

int gcd(int first, int second) {
	while (first != second) {
		if (first > second)
			first -= second;
		else
			second -= first;
	}
	return first;
}

int gcd_recursive(int first, int second) {
	if (first == second) return first; //base case
	if (first > second) return gcd(first - second, second); //recursive case
	return gcd(second - first, first);
}

int main() {
	int a;
	int b;

    std::cout << "enter first number: ";
	std::cin >> a;
	std::cout << "enter second number: ";
	std::cin >> b;

	std::cout << gcd(a, b) << " is gcd of " << a << " and " << b << '\n';

	return 0;
}
