#include <stdio.h>

int square(int i) {
	return i * i;
}

double natural_log_two(int numberOfTermsToUse) {
	double log_est = 0.0;

	for(int currentTerm = 1; currentTerm <= numberOfTermsToUse; currentTerm++) {
		if( currentTerm % 2 == 1) {
			log_est = log_est + (1.0 / (double) currentTerm);
		}
		else
			log_est = log_est - (1.0 / (double) currentTerm);
	}
	printf("final results: %f\n", log_est);

	return log_est;
}

void printf_many_types()
{

}