#include <stdio.h>

// Recursive function to calculate the value at a specific position (row, column)
int pascal_value(int row, int col) {
    // Base cases: the first and last element of every row is 1
    if (col == 0 || col == row) {
        return 1;
    }
    // Recursive case: value is the sum of the two elements directly above it
    else {
        return pascal_value(row - 1, col - 1) + pascal_value(row - 1, col);
    }
}

// Function to print the entire Pascal's triangle
void print_pascal_triangle(int rows) {
    for (int i = 0; i < rows; i++) {
        // Print leading spaces for alignment
        for (int space = 0; space < rows - i; space++) {
            printf("  ");
        }
        // Iterate through each column in the current row
        for (int j = 0; j <= i; j++) {
            // Calculate and print the value using the recursive function
            printf("%4d", pascal_value(i, j));
        }
        // Move to the next line after printing a row
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    print_pascal_triangle(n);
    return 0;
}
