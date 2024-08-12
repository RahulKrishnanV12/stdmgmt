#include "studentmgmt.h"

void find_rl()
{
	int x;
	printf("Enter the Roll Number"
		" of the student\n");
	scanf("%d", &x);
	for (int j = 1; j <= i; j++) {
		if (x == st[i].roll) {
			printf(
				"The Students Details are\n");
			printf(
				"The First name is %s\n",
				st[i].fname);
			printf(
				"The Last name is %s\n",
				st[i].lname);
			printf(
				"The CGPA is %f\n",
				st[i].cgpa);
			printf(
				"Enter the course ID"
				" of each course\n");
		}
		for (int j = 0; j < 5; j++) {
			printf(
				"The course ID are %d\n",
				st[i].cid[j]);
		}
		break;
	}
}
