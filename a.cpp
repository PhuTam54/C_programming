#include <stdio.h>

int main() {
	int week;
	//char ch = 'a';
	printf("\nEnter a day in week (1-7) ");
	scanf("%d", &week);
	switch(week){
		case 1:
			printf("\nIts Monday");
			break;
		case 2:\
			printf("\nIts Tuesday");
			break;
		case 3:
			printf("\nIts Wednesday");
			break;
		case 4:
			printf("\nIts Thursday");
			break;
		case 5:
			printf("\nIts Friday");
			break;
		case 6:
			printf("\nIts satuday");
			break;
		case 7:
			printf("\nIts Sunday");
			break;
		default:
			printf("Wrong input");
			break;
	}
	return 0;
}
