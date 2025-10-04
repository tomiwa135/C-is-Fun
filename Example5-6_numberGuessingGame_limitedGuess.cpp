//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//using namespace std;
//
//int main() {
//	bool isGuessed;
//	int num;
//	int guess;
//	int numOfGuesses;
//
//	srand(time(0));
//	num = rand() % 100; //creates an int > 0 && < 100
//
//	isGuessed = false; //first-flag setting isGuessed to false
//	numOfGuesses = 0;
//
//	while ((numOfGuesses < 5) && !isGuessed) { //!isguessed = true, so while body executes
//
//		cout << "Welcome to the squid games. Let's play a number guessing game. You have 5 tries "
//			<< "Enter a number between 0 and 100: ";
//		cin >> guess;
//		cout << endl;
//
//		numOfGuesses++;
//
//		if (guess == num)
//		{
//			cout << "You guessed the correct number" << endl;
//			isGuessed = true; //once the number is guessed correctly, isGuessed becomes true and the value in the while loop expression !isGuessed = false and so it terminates
//		}
//		else if (guess < num)
//		{
//			cout << "The number you entered is lower than the random number \n" << endl;
//		}
//		else
//		{
//			cout << "The number you entered is higher than the random number \n" << endl;
//		}
//	}
//
//	if (!isGuessed) {
//		cout << "This is the random number: " << num << endl;
//	}
//
//
//
//	return 0;
//}