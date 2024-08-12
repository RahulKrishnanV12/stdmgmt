#include "studentmgmt.h"
void write_to_file() {
    FILE *fptr;
    fptr = fopen("students.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    for (int j = 0; j < i; j++) {
        fprintf(fptr, "First Name: %s\n", st[j].fname);
        fprintf(fptr, "Last Name: %s\n", st[j].lname);
        fprintf(fptr, "Roll Number: %d\n", st[j].roll);
        fprintf(fptr, "CGPA: %.2f\n", st[j].cgpa);
        fprintf(fptr, "Course IDs: ");
        for (int k = 0; k < 5; k++) {
            fprintf(fptr, "%d ", st[j].cid[k]);
        }
        fprintf(fptr, "\n\n");
    }
    fclose(fptr);
    printf("Data written to file successfully.\n");
}
