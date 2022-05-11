#include <stdio.h>
#include <assert.h>

#include <iostream>

// int Factorial(const int &n) {
int Factorial(int n) {
	assert (n >= 1);
	if (n == 1) return 1;
	else return n * Factorial(n - 1);
}

void TestFactorial() {
	int n = 0;
	int res = 0;
	while ((n = getchar()) != EOF) {
		if (n == '\n') continue;	/* escape return key */
		n = n - '0';
		res = Factorial(n);
		printf("Factorial(%d) = %d\n", n, res);
	}
	printf("end of TestFactorial\n");
}

int main(int argc, char *argv[]) {
	TestFactorial();
}
