#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int size = 14;
	int arr[14] = { -1,10,3,-6,10,-8,7,-1,6,7,7,6,4,9, };
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] < 0)
		{
			cout << "\nотрицательные числа:" << arr[i];
		}
	}

	return 0;
}