#include <stdio.h>
#include <math.h>


int main(void)
{
	double a, b, c;
	double discriminant, root1, root2;

	printf("Enter a: ");
	scanf("%lf", &a);

	printf("Enter b: ");
	scanf("%lf", &b);

	printf("Enter c: ");
	scanf("%lf", &c);


	
	
	if (a == 0)
	{
		printf("Invalid input: Coeffifient 'a' cannot be zero");
	}

	
	discriminant = b * b - 4 * a * c;

	if (discriminant > 0)
	{
		root1 = (-b + sqrt(discriminant)) /(2 * a);
		root2 = (-b - sqrt(discriminant)) /(2 * a);
		printf("Roots are reeal and distinct:\n");
		printf("Root 1 = %.2lf\n", root1);
		printf("Root 2 = %.2lf\n", root2);
	}
	else if(discriminant == 0)
	{
		root1 = -b / (2 * a);
		printf("Roots are real and repeated\n");
		printf("Root = %.2lf\n", root1);
	}
	else{
		printf("Invalid input: No real roots (discriminant = %.2lf < 0).\n", discriminant);
		printf("The roots are complex and cannot be computed in real numbers.\n");

	}
	return 0;
}




