#include "studentmgmt.h"


void add_student()
{

	printf("Add the Students Details\n");
    printf("-------------------------\n");
    printf("Enter the first name of student: ");
    scanf("%s", st[i].fname);
    printf("Enter the last name of student: ");
    scanf("%s", st[i].lname);
    printf("Enter the Roll Number: ");
    while (scanf("%d", &st[i].roll) != 1 || st[i].roll <= 0) {
        printf("Invalid input! Please enter a positive integer for the Roll Number: ");
        clear_input_buffer();
    }
    clear_input_buffer();
    printf("Enter the CGPA you obtained: ");
    while (scanf("%f", &st[i].cgpa) != 1 || st[i].cgpa < 0.0 || st[i].cgpa > 10.0) {
        printf("Invalid input! Please enter a valid CGPA (0.0 to 10.0): ");
        clear_input_buffer();
    }
    clear_input_buffer();
    printf("Enter the course ID of each course (5 courses): ");
    for (int j = 0; j < 5; j++) {
        while (scanf("%d", &st[i].cid[j]) != 1) {
            printf("Invalid input! Please enter an integer for the course ID: ");
            clear_input_buffer();
        }
    }
    clear_input_buffer();
    i = i + 1;
}
