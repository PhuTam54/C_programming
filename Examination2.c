#include <stdio.h>

int main()
{
	float  rateOfInterstInPercent, interest,capitalSum, numberOfYear, sum;
	printf("Enter Capital Sum: \n");
	scanf("%f", &capitalSum);
	printf("Enter rate of interest in percent: \n");
	scanf("%f", &rateOfInterstInPercent);
	printf("Enter number of year: \n");
	scanf("%f", &numberOfYear);
	
	for (int i = 1; i <= numberOfYear; i ++){
		printf("\n%7s \t %20s \t %28s", "Year", "Interest", "Sum");
		interest = capitalSum * rateOfInterstInPercent / 100;
		capitalSum += interest;
		printf("\n   %d% \t\t\t     %.6f \t\t\t  %.6f\n", i, interest, capitalSum);
	}
	return 0;
}