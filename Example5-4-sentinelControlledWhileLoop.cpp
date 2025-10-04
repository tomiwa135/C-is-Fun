#include <iostream>
#include <string>

using namespace std;

const string SENTINEL = "-1";

int main() {
	string name;
	int numOfBoxesSold;
	int totalNumofBoxesSold;
	double costOfBox;
	int numOfStudents;

	cout << "Enter the name of the student and the number of boxes sold separated by a space ending with a -1: ";

	totalNumofBoxesSold = 0;
	numOfStudents = 0; //data that needs to be read, unknown piece of information as compared to counter-controlled where this is asked as an input

	cin >> name; //initialize LCV

	while (name != SENTINEL) { //while the LCV is not equal to the sentinel string of -1, do the following things
		//cout << "Enter the number of boxes sold: ";
		cin >> numOfBoxesSold; //prompt user to enter num of boxes sold

		totalNumofBoxesSold = totalNumofBoxesSold + numOfBoxesSold; //total boxes sold now becomes 0 + value

		numOfStudents++; //increment the unknown piece of information by 1
		cin >> name; //read and store the next name value into name
	}

	cout << endl;

	cout << "This is the total number of boxes sold for the school event " << totalNumofBoxesSold << endl;
	if (numOfStudents != 0) {
		cout << "This is the average number of boxes sold by each student " << totalNumofBoxesSold / numOfStudents << endl;
	}
	else {
		cout << "No input" << endl;
	}
	cout << endl;
	cout << "Enter the cost of one box of cookies: $";
	cin >> costOfBox;
	cout << endl;
	cout << "This is the total revenue generated for the school event: $" << totalNumofBoxesSold * costOfBox << endl;

	return 0;

}
