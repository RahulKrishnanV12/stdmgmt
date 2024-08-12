#include "studentmgmt.h"

void find_c()
{
	int id;
	printf("Enter the course ID \n");
	scanf("%d", &id);
	int c = 0;

	for (int j = 1; j <= i; j++) {
		for (int d = 0; d < 5; d++) {
			if (id == st[j].cid[d]) {

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

				c = 1;

				break;
			}
			else
				printf(
					"The First Name not Found\n");
		}
	}
}
