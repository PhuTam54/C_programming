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
	
	interest = capitalSum * rateOfInterstInPercent * numberOfYear / 100;
	printf("\n%7s \t %20s \t %25s", "Year", "Interest", "Sum");
	printf("\n");
	//capitalSum = in
	for (int i = 1; i <= numberOfYear; i ++){
		capitalSum += interest;
		interest = capitalSum * rateOfInterstInPercent * numberOfYear / 100;
		printf("\n   %d% \t\t\t     %.2f \t\t\t  %.2f", i, interest, capitalSum);
	}
	return 0;
}
