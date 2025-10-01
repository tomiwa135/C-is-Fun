//#include <iostream>
//
//using namespace std;
//
//int main() {
//	double totalNumberOfCookies, numberOfCookiesInBox, cookieBoxesInContainer;
//
//
//	cout << "Enter the total number of cookies: ";
//	cin >> totalNumberOfCookies;
//	cout << endl;
//
//	cout << "Enter the number of cookies in a box: ";
//	cin >> numberOfCookiesInBox;
//	cout << endl;
//
//	cout << "Enter the number of cookie boxes in a container: ";
//	cin >> cookieBoxesInContainer;
//	cout << endl;
//
//	cout << "This is the number of boxes required for shipping the cookies: " << totalNumberOfCookies / numberOfCookiesInBox << endl;
//	
//	if (numberOfCookiesInBox < 24) 
//	{
//		cout << "This is the leftover cookies in the package: " << numberOfCookiesInBox % 24 << endl;
//	}
//	else
//	{
//		cout << "This is the number of containers for the boxes of cookies: " << cookieBoxesInContainer/75 << endl;
//	}
//
//	return 0;
//}