#include <stdio.h>
#include <stdbool.h>


bool isIncludedInArray(char input, int acceptedCharacters[], int size) {
	for(int i = 0; i < size; ++i) {
		if(input == acceptedCharacters[i]) return true;
		return false;
	}
}

int main() {
	int acceptedCharacters[] = {'+', '-', '*', '/'};
	int sizeAcceptedCharacters = sizeof(acceptedCharacters) / sizeof(acceptedCharacters[0]);
	char op; // declare op to store operator for input
	double first, second; // declaring 2 doubles called first and second.
	printf("Enter an operator: ");
	scanf("%c", &op); // specify the input of op, &op means to replace the content of the address holding op to that of the input 
	if(!isIncludedInArray(op, acceptedCharacters, sizeAcceptedCharacters)) return -1;
	printf("Enter two operands:\n");
	scanf("%lf %lf", &first, &second);



	switch(op) {
		case '+':
			printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
			break;
		case '-':
			printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
			break;
		case '*':
			printf("%.1lf - %.1lf = %.1lf", first, second, first * second);
			break;
		case '/':
			printf("%.1lf - %.1lf = %.1lf", first, second, first / second);
			break;
		//default: 
			//printf("%s", "error");
	}
	return 0;
}
