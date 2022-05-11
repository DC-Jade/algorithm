#include <stdio.h>

#include <vector>

using std::vector;

/* find pivot pos in place in iv[begin, end) */
/* and place lower element in left, greater in right on pivot_pos */
int Partition(vector<int> &iv, int begin, int end) {
	int pivot = iv[end - 1];
	/* pivot pos should be placed */
	int target_pos = begin;
	for (int i = begin; i < end - 1; ++i) {
		if (iv[i] <= pivot) {
			/* place lower element in pivot's left */
			std::swap(iv[target_pos], iv[i]);
			++target_pos;
		}
	}
	/* place pivot in right place */
	std::swap(iv[target_pos], iv[end - 1]);
	return target_pos;
}

void QuickSort(vector<int> &iv, int begin, int end) {
	if (end - begin > 1) {
		int pivot = Partition(iv, begin, end);
		QuickSort(iv, begin, pivot);
		QuickSort(iv, pivot + 1, end);
	}   
}

void TestQuickSort() {
	vector<int> iv;
	int size = 0;
	while (scanf("%d", &size) != EOF) {
		for (int i = 0; i < size; ++i) iv.push_back(size - i - 1);
		printf("unsorted:\n");
		for (int i = 0; i < size; ++i) printf("%d ", iv[i]);
		printf("\n");

		QuickSort(iv, 0, size);
		printf("sorted:\n");
		for (int i = 0; i < size; ++i) printf("%d ", iv[i]);
		printf("\n");
	}
}

int main() {
	TestQuickSort();
}
