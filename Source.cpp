#include <iostream>

using namespace std;

int main() {
	int num, dividend, divider, flag = 0;

	cout << "enter a number \n";
	cin >> num;


	for (dividend = 2; dividend < num; dividend++) 
	{
		flag = 1;
		for (divider = 2; divider <= sqrt(dividend); divider++)  
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

	return 0;
}