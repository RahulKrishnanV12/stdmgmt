#include "studentmgmt.h"

void up_s()
{

	printf("Enter the roll number"
		" to update the entry : ");
	long int x;
	scanf("%ld", &x);
	for (int j = 0; j < i; j++) {
		if (st[j].roll == x) {
			printf("1. first name\n"
				"2. last name\n"
				"3. roll no.\n"
				"4. CGPA\n"
				"5. courses\n");
			int z;
			scanf("%d", &z);
			switch (z) {
			case 1:
				printf("Enter the new "
					"first name : \n");
				scanf("%s", st[j].fname);
				break;
			case 2:
				printf("Enter the new "
					"last name : \n");
				scanf("%s", st[j].lname);
				break;
			case 3:
				printf("Enter the new "
					"roll number : \n");
				scanf("%d", &st[j].roll);
				break;
			case 4:
				printf("Enter the new CGPA : \n");
				scanf("%f", &st[j].cgpa);
				break;
			case 5:
				printf("Enter the new courses \n");
				scanf(
					"%d%d%d%d%d", &st[j].cid[0],
					&st[j].cid[1], &st[j].cid[2],
					&st[j].cid[3], &st[j].cid[4]);
				break;
			}
			printf("UPDATED SUCCESSFULLY.\n");
		}
	}
}
