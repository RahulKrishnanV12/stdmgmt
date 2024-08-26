#include "studentmgmt.h"

void findfirstname()
{
	char a[50];
    printf("Enter the First Name of the student: ");
    scanf("%s", a);
    int c = 0;
    for (int j = 0; j < i; j++) {
        if (!strcmp(st[j].fname, a)) {
            printf("The Students Details are\n");
            printf("The First name is %s\n", st[j].fname);
            printf("The Last name is %s\n", st[j].lname);
            printf("The Roll Number is %d\n", st[j].roll);
            printf("The CGPA is %f\n", st[j].cgpa);
            printf("The course ID of each course\n");
            for (int k = 0; k < 5; k++) {
                printf("The course ID are %d\n", st[j].cid[k]);
            }
            c = 1;
        }
    }
    if (c == 0) {
        printf("The First Name not Found\n");
    }
}
