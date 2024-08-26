#include "studentmgmt.h"

void findrollno()
{
	int x;
    printf("Enter the Roll Number of the student: ");
    while (scanf("%d", &x) != 1 || x <= 0) {
        printf("Invalid input! Please enter a positive integer for the Roll Number: ");
        clear_input_buffer();
    }
    clear_input_buffer();
    for (int j = 0; j < i; j++) {
        if (x == st[j].roll) {
            printf("The Students Details are\n");
            printf("The First name is %s\n", st[j].fname);
            printf("The Last name is %s\n", st[j].lname);
            printf("The CGPA is %f\n", st[j].cgpa);
            printf("The course ID of each course\n");
            for (int k = 0; k < 5; k++) {
                printf("The course ID are %d\n", st[j].cid[k]);
            }
            return;
        }
    }
    printf("Roll Number not found\n");
}
