#include <iostream>

void input_array (int *array, int size) {
	for (int i = 0; i < array; i++)
		std::cin >> array[i];
}

void print_array (int *array, int size) {
	for (int i = 0; i < array; i++)
		std::cout << array[i] << '\n';
}

int binary_search(int array[], int size, int desired_value) {

	int left = 0;
	int right = size - 1;
	int middle;

	while (left <= right) {
		middle = (left + right) / 2;
		if (desired_value == array[middle])
			return middle;
		if (desired_value < array[middle])
			right = middle - 1;
		else
			left = middle + 1;
	}
	return -1;
}

int main() {
	const int size = 10;

	int array[size];

    input_array(array, size);
	print_array (array, size);

	std::cout << '\n' << "input desired value: ";

    int desired_value;
	std::cin >> desired_value;

	std::cout << "index of desired value in array: " << binary_search(array, size, desired_value) << '\n';

	return 0;
}
