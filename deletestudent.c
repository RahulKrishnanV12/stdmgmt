#include"studentmgmt.h"

void deletestudent()
{
	int a;
    printf("Enter the Roll Number which you want to delete: ");
    while (scanf("%d", &a) != 1 || a <= 0) {
        printf("Invalid input! Please enter a positive integer for the Roll Number: ");
        clear_input_buffer();
    }
    clear_input_buffer();
    for (int j = 0; j < i; j++) {
        if (a == st[j].roll) {
            for (int k = j; k < i - 1; k++)
                st[k] = st[k + 1];
            i--;
            printf("The Roll Number is removed Successfully\n");
            return;
        }
    }
    printf("Roll Number not found\n");
}
