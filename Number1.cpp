#include <iostream>

using namespace std;

int main() {
	int num;

	cout << "Please enter a number: ";
	cin >> num;
	cout << endl;

	if (num > 0) {
		cout << "This is a positive number " << num << endl;
	}
	else if (num == 0) {
		cout << "This number is zero " << num << endl;
	}
	else if (num < 0) {
		cout << "This is a negative number " << num << endl;
	}
	else {
		cout << "This is not a number" << endl;
	}

	return 0;
}
