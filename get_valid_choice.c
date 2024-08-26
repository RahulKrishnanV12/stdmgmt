#include"studentmgmt.h"

int get_valid_choice() {
    int choice;
    char term;
    printf("Enter your choice: ");
    while (scanf("%d%c", &choice, &term) != 2 || term != '\n' || choice < 1 || choice > 7) {
        clear_input_buffer();
        printf("Invalid input! Please enter an integer between 1 and 7: ");
    }
    return choice;
}
