#include <vector>
#include <iostream>

using namespace std;

void showReverseArr(vector<int> filledArr, int counter)
{
	cout << "\n reverse array: \n";

	for (size_t i = counter - 1; i > 0; i--) {
		cout << filledArr[i] << "\n";
	}
};

void showOddItems(vector<int> filledArr, int counter)
{
	for (size_t i = 0; i < counter; i++) {
		if (filledArr[i] % 2 != 0)
		{
			cout << "odd number: " << filledArr[i] << "\n";
		}
	}
}

void searchAverage(vector<int> filledArr, int counter)
{
	int average = 0;

	for (size_t i = 0; i < counter; i++) {
		average += filledArr[i];
	}

	cout << "\n average number" << (average /= counter) << "\n";
}

void doMethWithArray(vector<int> filledArr, int counter)
{
	searchAverage(filledArr, counter);
	showOddItems(filledArr, counter);
	showReverseArr(filledArr, counter);
};

void fillingDynamicArray()
{
	int iLength = 2, iCounter = 0, iNum = 1;

	vector<int> piArray;
	piArray.resize(iLength);

	cout << "Enter a numbers separated by Enter. To stop entering numbers, enter 0. \n";

	while (iNum != 0)
	{
		cin >> iNum;
		if (iNum != 0)
		{
			piArray[iCounter] = iNum;
			iCounter++;
		}

		if (iCounter >= iLength) {
			iLength += 1;
			piArray.resize(iLength);
		}
	}

	doMethWithArray(piArray, iCounter);

	cout << "sizeof: " << sizeof(piArray) << "\n";
	piArray.clear();
}

int main()
{
	fillingDynamicArray();

	return 0;
}