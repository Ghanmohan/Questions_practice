#include <stdio.h>

int main()
{
	int height[10], weight[10], sum1 = 0, sum2 = 0, choice;
	int gender[10];
	float avg1, avg2, ratio;

	printf("Enter HEIGHT of 5 users: \n");

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &height[i]);
		sum1 += height[i];
	}
	printf("Enter WEIGHT of 5 users: \n");

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &weight[i]);
		sum2 += weight[i];
	}
	printf("Enter GENDER(1 for MALE and 0 for female) of 5 users: \n");
	int m = 0, f = 0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &gender[i]);
		if (gender[i] == 1)
			m += 1;
		else if (gender[i] == 0)
			f += 1;

	}

	printf("\n Press 1 to calculate the average of height \n Press 2 to calculate the average of Weight \n Press 3 to calculate the ratio of male and female\n Press 4 to EXIT ");
	printf("\n Enter your choice: ");
	scanf("%d", &choice);
	switch (choice)
	{

	case 1:
	{
		printf("\n The average of height is: ");
		avg1 = sum1 / 5.0;
		printf("%f", avg1);
		break;
	}
	case 2:
	{
		printf("\n The Average of weight is: ");
		avg2 = sum2 / 5.0;
		printf("%f", avg2);
		break;
	}
	case 3:
	{
		printf("\n The ratio of male and female is: ");
		ratio = m / f;
		printf("%f", ratio);
		break;
	}
	case 4:
	{
		break;
	}
	default : printf("\n Wrong choice");
		break;
	}
	return 0;
}



