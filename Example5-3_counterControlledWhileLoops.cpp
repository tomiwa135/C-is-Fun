#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	string name;
	int numOfBoxesSold;
	int totalNumofBoxesSold;
	double costOfBox;
	int counter;
	int numOfStudents;

	counter = 0;
	totalNumofBoxesSold = 0;

	cout << "Please enter the number of students that participated in the volunteer event: ";
	cin >> numOfStudents; //in a counter-controlled, the data to be read is known or requested for
	cout << endl;

	while (counter < numOfStudents) {

		cout << "Please enter the student's name and the number of boxes sold: ";
		cin >> name >> numOfBoxesSold;
		cout << endl;

		totalNumofBoxesSold = totalNumofBoxesSold + numOfBoxesSold;

		counter++;

	}

	cout << "This is the total number of boxes sold for the school event " << totalNumofBoxesSold << endl;
	if (counter != 0) {
		cout << "This is the average number of boxes sold by each student " << totalNumofBoxesSold / counter << endl;
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
