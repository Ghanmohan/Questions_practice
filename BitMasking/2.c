#include <stdio.h>

int main()
{
	int coupon_code;
	float amt, discount;
	printf("Enter the Total Amount : ");
	scanf("%f", &amt);
	coupon_code = (amt > 5000) ? 123 : 456;
	switch (coupon_code)
	{
	case 123:
		discount = .3 * amt;
		printf("Applying 30 percent discount\n");
		break;

	case 456:
		discount = .1 * amt;
		printf("Applying 10 percent discount\n");
		break;

	}

	printf("Amount after discount %.4f", amt - discount);

	return 0;
}