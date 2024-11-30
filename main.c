// NAME: MOSES MAINA MUIGAI
// REGNO:J17S/17298/2023
#include <stdio.h>

int main() {
    int a[10][10], transpose[10][10], r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    // Assigning elements to the matrix
    printf("\nEnter matrix elements:\n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    // Printing the matrix a[][]
    printf("\nEntered matrix: \n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            printf("%d ", a[i][j]);
            if (j == c - 1)
                printf("\n");
        }

    // Computing the transpose
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            transpose[j][i] = a[i][j];
        }

    // Printing the transpose
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < c; ++i)
        for (int j = 0; j < c; ++j) {
            printf("%d\t", transpose[i][j]);
        }
    printf("\n");
    return 0;
}

int main() {
    int n;
    double arr[100];

    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        printf("Enter number%d: ", i + 1);
        scanf("%lf", &arr[i]);
    }

    // storing the largest number to arr[0]
    for (int i = 1; i < n; ++i) {
        if (arr[0] < arr[i]) {
            arr[0] = arr[i];
        }
    }

    printf("Largest element = %.2lf", arr[0]);
    return 0;
}
