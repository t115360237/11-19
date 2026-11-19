#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void bubbleSort(int array[], int size);

int main(void) {
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    int i;

    printf("Data items in original order:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%4d", a[i]);
    }

    bubbleSort(a, SIZE);

    printf("\nData items in ascending order:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%4d", a[i]);
    }

    printf("\n");
    system("pause");
    return 0;
}

void bubbleSort(int array[], int size) {
    int pass;
    int i;
    int hold;
    int swapped;

    for (pass = 0; pass < size - 1; pass++) {
        swapped = 0;

        for (i = 0; i < size - 1 - pass; i++) {
            if (array[i] > array[i + 1]) {
                hold = array[i];
                array[i] = array[i + 1];
                array[i + 1] = hold;
                swapped = 1;
            }
        }

        if (!swapped) {
            break;
        }
    }
}
