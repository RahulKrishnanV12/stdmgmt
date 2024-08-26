#include "studentmgmt.h"

void main()

{
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
                findrollno();
                break;
            case 3:
                findfirstname();
                break;
            case 4:
                findcourse();
                break;
            case 5:
                findtotal();
                break;
            case 6:
                deletestudent();
                break;
            case 7:
                updatestudent();
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
        write_to_file();
    }
    return 0;
}
