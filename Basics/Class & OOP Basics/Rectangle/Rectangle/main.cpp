#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() 
{
	int userLength;
	int userWidth;

	cin >> userLength;
	cin >> userWidth;

	Rectangle(userLength, userWidth);

	return 0;
}