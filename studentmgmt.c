#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Variable to keep track of the number of students
int i = 0;

// Structure to store the student
struct sinfo {
    char fname[50];
    char lname[50];
    int roll;
    float cgpa;
    int cid[10];
} st[55];

// Function to clear input buffer
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Function to validate integer input
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

// Function to add the student
void add_student() {
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

// Function to find the student by the roll number
void find_rl() {
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

// Function to find the student by the first name
void find_fn() {
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

// Function to find the students enrolled in a particular course
void find_c() {
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

// Function to print the total number of students
void tot_s() {
    printf("The total number of Students is %d\n", i);
    printf("\nYou can have a max of 50 students\n");
    printf("You can have %d more students\n", 50 - i);
}

// Function to delete a student by the roll number
void del_s() {
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

// Function to update a student's data
void up_s() {
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

// Function to write all student data to a file
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

// Driver code
int main() {
    while (1) {
        printf("The Task that you want to perform\n");
        printf("1. Add the Student Details\n");
        printf("2. Find the Student Details by Roll Number\n");
        printf("3. Find the Student Details by First Name\n");
        printf("4. Find the Student Details by Course Id\n");
        printf("5. Find the Total number of Students\n");
        printf("6. Delete the Students Details by Roll Number\n");
        printf("7. Update the Students Details by Roll Number\n");

        int choice = get_valid_choice();

        switch (choice) {
            case 1:
                add_student();
                break;
            case 2:
                find_rl();
                break;
            case 3:
                find_fn();
                break;
            case 4:
                find_c();
                break;
            case 5:
                tot_s();
                break;
            case 6:
                del_s();
                break;
            case 7:
                up_s();
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
        write_to_file();
    }
    return 0;
}
