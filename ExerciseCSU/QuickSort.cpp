#include"QuickSort.h"

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

int main() {
	int n;
	int arr[100000];
	std::cout << "Please input the number of array(no more than 100000): ";
	std::cin >> n;
	std::cout << "Please input the element of array: ";
	for (int i = 0; i < n; i++) std::cin >> arr[i];
	std::cout << "Clear!";
	QSort(arr, 0, n - 1);
	for (int i = 0; i < n; i++) std::cout << arr[i] << " ";
	system("pause");
	return 0;
}