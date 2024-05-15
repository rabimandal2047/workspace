#include <stdio.h>
int fill_array(int *arr, int size) {
	for(int i = 0; i < size; i++) {
		arr[i] = 2*i;
	}
	return 0;
}

int print_array(int *arr, int size) {
	for(int i = 0; i < size; i++) {
		printf("Value %d at index %d\n", arr[i], i);
	}

	return 0;
}

int main() {
	int arr[10] = {0};
	fill_array(arr, 10);
	print_array(arr, 10);
	return 0;
}
