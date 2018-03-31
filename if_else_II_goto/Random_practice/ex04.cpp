#include <stdio.h>

main() {

	int intNum1 = 100, intNum2 = 0;

	if (intNum1 == 0)
		goto error_num1_zero; // jumps to the label error_num1_zero

	if (intNum2 == 0)
		goto error_num2_zero; // jumps to the label error_num2_zero

	// the two lines below will be executed if both the numbers are non-zero, else it will continue executing any one of the label
	int result = intNum1 / intNum2;
	printf("Result is %d", result);
	goto end;

    error_num1_zero:
        printf("\nFirst number is zero and hence result will be zero");// prints the error message and continues with rest of the statements

	error_num2_zero:
	    printf("\nResults in Division by zero!"); // prints the error message and continues with rest of the statements
        goto end;

    end:
	printf("\nEnd of the program!");
}
