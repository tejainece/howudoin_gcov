#include <stdio.h>

int main() {
	int const cond1 = 10;

	printf("Executing first condition:");

	if(cond1 < 50) {
		printf("Less than 50!");
	} else if(cond1 > 50) {
		printf("Greater than 50!");
	} else {
		printf("Equal to 50!");
	}
	
	printf("\n");

	printf("Second condition:");

	switch(cond1) {
		case 5:
			printf("Is 5!");
			break;
		case 10:
			printf("Is 10!");
			break;
		case 15:
			printf("Is 15!");
			break;
		default:
			printf("Is 5!");
			break;
	}

	printf("\n");
}
