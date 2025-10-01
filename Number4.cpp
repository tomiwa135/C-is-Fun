//#include <iostream>
//#include <cmath>
//#include <string>
//
//using namespace std;
//
//const double PI = 3.14;
//
//int main() {
//	string shape;
//	double height;
//	double radius;
//	double width;
//	double length;
//
//	cout << "Enter the shape type (rectangle, circle, cylinder) ";
//	cin >> shape;
//	cout << endl;
//
//	if (shape == "rectangle" || shape == "Rectangle") 
//	{
//		cout << "Enter the length of the rectangle: ";
//		cin >> length;
//		cout << endl;
//
//		cout << "Enter the width of the rectangle: ";
//		cin >> width;
//		cout << endl;
//
//		cout << "Area of a rectangle = " << length * width << endl;
//		cout << "Perimeter of the rectangle = " << 2 * (length * width) << endl;
//	}
//	else if (shape == "circle" || shape == "Circle")
//	{
//		cout << "Enter the radius of the circle: ";
//		cin >> radius;
//		cout << endl;
//
//		cout << "Area of the circle = "
//			<< PI * pow(radius, 2.0) << endl;
//
//		cout << "Circumference of the circle = "
//			<< (2 * PI * radius) << endl;
//	}
//	else if (shape == "cylinder" || shape == "Cylinder")
//	{
//		cout << "Enter the height of the cylinder: ";
//		cin >> height;
//		cout << endl;
//
//		cout << "Enter the radius of the base of the cylinder: ";
//		cin >> radius;
//		cout << endl;
//
//		cout << "Surface area of the cylinder: "
//			<< 2 * PI * radius * height + 2 * PI * pow(radius, 2.0) << endl;
//
//		cout << "Volume of the cylinder = "
//		<< PI * pow(radius, 2.0) * height << endl;
//	}
//	else
//	{
//		cout << "Please enter a valid shape between a rectangle, circle, cylinder " << endl;
//	}
//
//	return 0;
//
//}