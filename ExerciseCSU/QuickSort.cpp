#include"QuickSort.h"

int main() {
	int n;
	int arr[100000];
	std::cout << "Please input the number of array(no more than 100000): ";
	std::cin >> n;
	for (int i = 0; i < n; i++) std::cin >> arr[i];
	QSort(arr, 0, n - 1);
	for (int i = 0; i < n; i++) std::cout << arr[i];
	return 0;
}

void QSort(int arr[], int low, int high) {
	int l = low;
	int h = high;
	int p = arr[low];
	while (l < h) {
		while (l < h && arr[h] > p) h--;
		if (l < h) {
			int t = arr[l];
			arr[l] = arr[h];
			arr[h] = t;
		}
		while (l < h && arr[l] < p) l++;
		if (l < h) {
			int t = arr[l];
			arr[l] = arr[h];
			arr[h] = t;
		}
		if (l > low) QSort(arr, low, l - 1);
		if (h < high) QSort(arr, l + 1, high);
	}
}