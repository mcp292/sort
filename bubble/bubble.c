#include <stdio.h>


void bubble_sort(int a[], int size)
{
    int ind, sorted, hold;

    sorted = 0;

    while (!sorted) {
        sorted = 1;

        for (ind = 1; ind < size; ind++) {
            if (a[ind - 1] > a[ind])  {
                hold = a[ind - 1];
                a[ind - 1] = a[ind];
                a[ind] = hold;

                sorted = 0;
            }
        }
    }
}

void print_array(int a[], int size)
{
    int ind;

    for (ind = 0; ind < size; ind++) {
        printf("%d ", a[ind]);
    }

    printf("\n");
}

int main()
{
    int size = 11;
    int a[] = {7, 10, 1, 5, 0, 3, 4, 8, 6, 2, 9};

    print_array(a, size);
    bubble_sort(a, size);
    print_array(a, size);

    return 0;
}
