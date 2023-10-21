#include <stdio.h>


void selection_sort(int a[], int size)
{
    int ind, search_ind, min_ind, hold;

    for (ind = 0; ind < size; ind++) {
        min_ind = ind;

        for (search_ind = ind; search_ind < size; search_ind++) {
            if (a[search_ind] < a[min_ind])
                min_ind = search_ind;
        }

        hold = a[ind];
        a[ind] = a[min_ind];
        a[min_ind] = hold;
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
    selection_sort(a, size);
    print_array(a, size);

    return 0;
}
