#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float num, counter, S = 0;

	cout << "enter num: \n";
	
	cin >> num;

	for (counter = 0; counter < num; counter++) {
		S += counter / (num * (num - counter));
	}

	cout << "S = " << S << "\n";
}