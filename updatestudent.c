#include "studentmgmt.h"

void updatestudent()
{

	printf("Enter the roll number to update the entry: ");
    int x;
    while (scanf("%d", &x) != 1 || x <= 0) {
        printf("Invalid input! Please enter a positive integer for the Roll Number: ");
        clear_input_buffer();
    }
    clear_input_buffer();
    for (int j = 0; j < i; j++) {
        if (st[j].roll == x) {
            printf("1. First name\n2. Last name\n3. Roll no.\n4. CGPA\n5. Courses\n");
            int z;
            while (scanf("%d", &z) != 1 || z < 1 || z > 5) {
                printf("Invalid input! Please enter an integer between 1 and 5: ");
                clear_input_buffer();
            }
            clear_input_buffer();
            switch (z) {
                case 1:
                    printf("Enter the new first name: ");
                    scanf("%s", st[j].fname);
                    break;
                case 2:
                    printf("Enter the new last name: ");
                    scanf("%s", st[j].lname);
                    break;
                case 3:
                    printf("Enter the new roll number: ");
                    while (scanf("%d", &st[j].roll) != 1 || st[j].roll <= 0) {
                        printf("Invalid input! Please enter a positive integer for the Roll Number: ");
                        clear_input_buffer();
                    }
                    clear_input_buffer();
                    break;
                case 4:
                    printf("Enter the new CGPA: ");
                    while (scanf("%f", &st[j].cgpa) != 1 || st[j].cgpa < 0.0 || st[j].cgpa > 10.0) {
                        printf("Invalid input! Please enter a valid CGPA (0.0 to 10.0): ");
                        clear_input_buffer();
                    }
                    clear_input_buffer();
                    break;
                case 5:
                    printf("Enter the new courses: ");
                    for (int k = 0; k < 5; k++) {
                        while (scanf("%d", &st[j].cid[k]) != 1) {
                            printf("Invalid input! Please enter an integer for the course ID: ");
                            clear_input_buffer();
                        }
                    }
                    clear_input_buffer();
                    break;
            }
            printf("UPDATED SUCCESSFULLY.\n");
            return;
        }
    }
    printf("Roll Number not found\n");
}
