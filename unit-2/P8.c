#include <stdio.h>

void findMinMax(int arr[], int n, int index, int *min, int *max) {
    if (index == n)
        return;

    if (arr[index] < *min)
        *min = arr[index];

    if (arr[index] > *max)
        *max = arr[index];

    findMinMax(arr, n, index + 1, min, max);
}

int main() {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0], max = arr[0];

    findMinMax(arr, n, 0, &min, &max);

    printf("Minimum element = %d\n", min);
    printf("Maximum element = %d\n", max);

    return 0;
}
