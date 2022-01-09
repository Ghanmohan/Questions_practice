#include<stdio.h>

int main()
{
	int arr[4][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}, {100, 110, 120}};

	printf("%u\n", (&arr + 1) - &arr);
	printf("%u\n", *(&arr + 1) - * (&arr));
	printf("%u\n", **(&arr + 1) - **(&arr));

	printf("%u\n", (arr + 1) - arr);
	printf("%u\n", *(arr + 1) - * (arr));
	printf("%u\n", **(arr + 1) -**(arr));
	return 0;
}