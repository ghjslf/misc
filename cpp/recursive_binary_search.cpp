#include <iostream>

int binary_search (int array[], int array_size, int desired_value) {
	int middle = array_size/2;
	if (desired_value == array[middle])
		return array_size/2;
	if (desired_value < array[middle])
		return binary_search (array, middle, desired_value);
	if (desired_value > array[middle])
		return binary_search (array + middle, middle, desired_value);
	return -1;
}

int main() {

	const int array_size = 10;

	int array[array_size];
	int desired_value = 0;

	for (int i = 0; i < array_size; i++)
		array[i] = array_size - i - 1;

	std::cin >> desired_value;

	std::cout << binary_search(array, array_size, desired_value) << '\n';

	return 0;
}