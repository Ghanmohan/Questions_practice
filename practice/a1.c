#include <stdio.h>

int main()
{
	int roll, age;
	float per;
	char grp;


	printf("Enter roll_no , age and percentage : ");
	scanf("%d%d%f", &roll, &age, &per);


	if (age > 20)
	{
		if (roll <= 50)
		{
			printf("\nYOU ARE IN GROUP A");
		}
		else
		{
			printf("\nYOU ARE IN GROUP C");
		}
	}
	else
	{
		if (roll <= 50)
		{
			printf("\nYOU ARE IN GROUP B");
		}

		else
		{
			printf("\nYOU ARE IN GROUP D");
		}
	}

	/* Switch value of ch */
	switch (grp)
	{
	case 'a':
	case 'A':
		printf("You are in group A");
		break;
	case 'b':
	case 'B':
		printf("You are in group B");
		break;
	case 'c':
	case 'C':
		printf("You are in group C");
		break;
	case 'd':
	case 'D':
		printf("You are in group D");
		break;
	}

	return 0;
}