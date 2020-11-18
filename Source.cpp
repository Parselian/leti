#include <iostream>

using namespace std;

void findPrime(int);

int main() {
	int num;

	cout << "enter a number \n";
	cin >> num;

	if (num < 4) {
		for (int counter = 2; counter <= num; counter++) {
			cout << "prime num: " << counter << "\n";
		}
		return 0;
	}
	else {
		cout << "prime num: 2" << "\n";
		findPrime(num);
	}

	return 0;
}

void findPrime(int num)
{
	int dividend, divider, flag = 0;

	for (dividend = 3; dividend < num; dividend += 2)
	{
		flag = 1;
		for (divider = 3; divider <= sqrt(dividend); divider++)
		{
			if (dividend % divider == 0)
			{
				flag = 0;
				break;
			}
		}

		if (flag) {
			cout << "prime num: " << dividend << "\n";
		}
	}
}