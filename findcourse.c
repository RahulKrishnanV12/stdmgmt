#include "studentmgmt.h"

void findcourse()
{
	int id;
    printf("Enter the course ID: ");
    while (scanf("%d", &id) != 1) {
        printf("Invalid input! Please enter an integer for the course ID: ");
        clear_input_buffer();
    }
    clear_input_buffer();
    int c = 0;
    for (int j = 0; j < i; j++) {
        for (int d = 0; d < 5; d++) {
            if (id == st[j].cid[d]) {
                printf("The Students Details are\n");
                printf("The First name is %s\n", st[j].fname);
                printf("The Last name is %s\n", st[j].lname);
                printf("The Roll Number is %d\n", st[j].roll);
                printf("The CGPA is %f\n", st[j].cgpa);
                c = 1;
                break;
            }
        }
    }
    if (c == 0) {
        printf("No students found for the given course ID\n");
    }
}
