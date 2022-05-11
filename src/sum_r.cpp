#include <stdio.h>
#include <assert.h>

#include <vector>

using std::vector;

int Sum(const vector<int> &iv, int n) {
	if (n == 0) return 0;
	else return iv[n - 1] + Sum(iv, n - 1);
}

void TestSum() {
	int n; int sum;
	while (scanf("%d", &n) != EOF) {
		assert(n >= 0);
		vector<int> iv;
		sum = 0;

		for (int i = 0; i < n; ++i) iv.push_back(i);
		sum = Sum(iv, n);
		printf("Sum[0, %d) = %d\n", n, sum);
	}
	printf("end of TestSum\n");
}

int main(int argc, char **argv) {
	TestSum();
}

