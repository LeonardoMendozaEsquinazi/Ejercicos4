// C code to demonstrate Divide and
// Conquer Algorithm
#include <stdio.h>
#define ARRAY_SIZE 10000 
int DAC_Max(int a[], int index, int l);
int DAC_Min(int a[], int index, int l);

// function to find the maximum no.
// in a given array.
int DAC_Max(int a[], int index, int l)
{
	int max;
	if(l - 1 == 0)
	{
	return a[index];
	}
	if (index >= l - 2) {
		if (a[index] > a[index + 1])
			return a[index];
		else
			return a[index + 1];
	}

	// logic to find the Maximum element
	// in the given array.
	max = DAC_Max(a, index + 1, l);

	if (a[index] > max)
		return a[index];
	else
		return max;
}

// Function to find the minimum no.
// in a given array.
int DAC_Min(int a[], int index, int l)
{
	int min;
	if(l - 1 == 0)
	{
	return a[index];
	}
	if (index >= l - 2) {
		if (a[index] < a[index + 1])
			return a[index];
		else
			return a[index + 1];
	}

	// Logic to find the Minimum element
	// in the given array.
	min = DAC_Min(a, index + 1, l);

	if (a[index] < min)
		return a[index];
	else
		return min;
}

// Driver Code
int main()
{
	// Defining the variables
	int min, max, N;

	// Initializing the array
	
	int a[ARRAY_SIZE]; // declaramos un arreglo de tamaño ARRAY_SIZE
    int i;

    // llenamos el arreglo con números aleatorios utilizando un ciclo for
    for (i = 0; i < ARRAY_SIZE; i++) {
        a[i] = rand(); // la función rand() genera un número aleatorio
    }
	// recursion - DAC_Max function called
	max = DAC_Max(a, 0, 10000);

	// recursion - DAC_Max function called
	min = DAC_Min(a, 0, 10000);
	printf("The minimum number in a given array is : %d\n", min);
	printf("The maximum number in a given array is : %d", max);
	return 0;
}

// This code is contributed by Ashish Rana (GFG Team)
