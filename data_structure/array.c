#include <stdio.h>
int initialize_array(int *arr, int size) {
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

int free_array(int *arr, int size) {
	for(int i = 0; i < size; i++) {
		arr[i] = 0;
	}
	return 0;
}

int main() {
	int arr[10] = {0};
	initialize_array(arr, 10);
	print_array(arr, 10);
	free_array(arr, 10);
	printf("================================\n");
	print_array(arr, 10);
	return 0;
}
