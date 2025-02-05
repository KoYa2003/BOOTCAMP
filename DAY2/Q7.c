//program to perform unit conversion (e.g., cm to m, kg to g) 

#include <stdio.h>

void convertCmToM();
void convertKgToG();

int main() {
    int choice;

    do {
        printf("\nUnit Conversion Program\n");
        printf("1. Centimeters to Meters\n");
        printf("2. Kilograms to Grams\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                convertCmToM();
                break;
            case 2:
                convertKgToG();
                break;
            case 3:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}

void convertCmToM() {
    float cm, meters;

    printf("\nCentimeters to Meters Conversion\n");
    printf("Enter length in centimeters: ");
    scanf("%f", &cm);
    meters = cm / 100;
    printf("Length in meters: %.2f m\n", meters);
}

void convertKgToG() {
    float kg, grams;

    printf("\nKilograms to Grams Conversion\n");
    printf("Enter weight in kilograms: ");
    scanf("%f", &kg);
    grams = kg * 1000;
    printf("Weight in grams: %.2f g\n", grams);
}
