#include <stdio.h>
#include <math.h>  // For sqrt function

// Function to check if a number is a perfect square
int isPerfectSquare(int num) {
    int root = sqrt(num);
    return (root * root == num);
}

int main() {
    int rows, cols;

    // Taking input for rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols]; // Declare a matrix dynamically based on user input

    // Taking user input for the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Printing the perfect squares
    printf("Perfect squares in the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (isPerfectSquare(arr[i][j])) {
                printf("%d ", arr[i][j]);
            }
        }
    }

    return 0;
}
