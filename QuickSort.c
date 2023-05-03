// C code to implement quicksort

#include <stdio.h>

// Function to swap two elements
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

// Partition the array using the last element as the pivot
int partition(int arr[], int low, int high)
{
	// Choosing the pivot
	int pivot = arr[high];
	
	// Index of smaller element and indicates
	// the right position of pivot found so far
	int i = (low - 1);
	int j=0;
	for ( j = low; j <= high - 1; j++) {
		
		// If current element is smaller than the pivot
		if (arr[j] < pivot) {
			
			// Increment index of smaller element
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

// The main function that implements QuickSort
// arr[] --> Array to be sorted,
// low --> Starting index,
// high --> Ending index
void quickSort(int arr[], int low, int high)
{
	if (low < high) {
		
		// pi is partitioning index, arr[p]
		// is now at right place
		int pi = partition(arr, low, high);
		
		// Separately sort elements before
		// partition and after partition
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

// Driver code
int main()
{
	int a[10000]; // declaramos un arreglo de tamaño ARRAY_SIZE
    int i;

    // llenamos el arreglo con números aleatorios utilizando un ciclo for
    for (i = 0; i < 10000; i++) {
        a[i] = rand(); // la función rand() genera un número aleatorio
    }
	int N = sizeof(a) / sizeof(a[0]);

	// Function call
	quickSort(a, 0, N - 1);
	printf("Sorted array: \n");
	
	for ( i = 0; i < N; i++)
		printf("%d ", a[i]);
	return 0;
}
