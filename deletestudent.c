#include"studentmgmt.h"

void del_s()
{
	int a;
	printf("Enter the Roll Number"
		" which you want "
		"to delete\n");
	scanf("%d", &a);
	for (int j = 1; j <= i; j++) {
		if (a == st[j].roll) {
			for (int k = j; k < 49; k++)
				st[k] = st[k + 1];
			i--;
		}
	}
	printf("The Roll Number"
		" is removed Successfully\n");
}
