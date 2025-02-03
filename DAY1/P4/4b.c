//Program to print this pattern
* * * * * * 
 *       *
  *     *
   *   *
    * *
     *

#include <stdio.h>

int main() {
    int i, j, rows = 6;

    // Printing the topmost row (full row of stars)
    for (i = 0; i < rows; i++) {
        printf("* ");
    }
    printf("\n");

    // Printing the remaining rows (hollow part)
    for (i = 1; i < rows; i++) {
        // Printing leading spaces
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        
        // Printing first star
        printf("*");

        // Printing spaces inside the pyramid
        for (j = 0; j < (2 * (rows - i) - 3); j++) {
            printf(" ");
        }

        // Printing the last star (except for the last row)
        if (i != rows - 1) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
