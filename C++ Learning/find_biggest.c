#include <stdio.h>

int find_maximum(int numbers[], int size) {
    int max = numbers[0];

    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    return max;
}

int main() {
    int numbers[100];  // Assuming a maximum of 100 numbers
    int size = 0;

    printf("Enter the numbers (enter q to stop):\n");

    int num;
    while (1) {
        if (scanf("%d", &num) != 1) {
            break;
        }

        numbers[size] = num;
        size++;
    }

    int max = find_maximum(numbers, size);

    printf("The maximum number is: %d\n", max);

    return 0;
}
