#include "studentmgmt.h"

void find_fn()
{
	char a[50];
	printf("Enter the First Name"
		" of the student\n");
	scanf("%s", a);
	int c = 0;

	for (int j = 1; j <= i; j++) {
		if (!strcmp(st[j].fname, a)) {

			printf(
				"The Students Details are\n");
			printf(
				"The First name is %s\n",
				st[i].fname);
			printf(
				"The Last name is %s\n",
				st[i].lname);
			printf(
				"The Roll Number is %d\n ",
				st[i].roll);
			printf(
				"The CGPA is %f\n",
				st[i].cgpa);
			printf(
				"Enter the course ID of each course\n");

			for (int j = 0; j < 5; j++) {
				printf(
					"The course ID are %d\n",
					st[i].cid[j]);
			}
			c = 1;
		}
		else
			printf(
				"The First Name not Found\n");
	}
}
