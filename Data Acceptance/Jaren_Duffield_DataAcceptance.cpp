/* Heading
Jaren Dufifeld - 9/26/17 Period 1

Data Acceptance : Take in Data

Display Data, Accept User Response, Display Changed Data 

*/

// Libraries
#include <iostream>
#include <conio.h>
#include <math.h>

// Namespaces
using namespace std;

// Function()
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// MAIN
void main() {
	// Variables
	int Chicken_Dinners;
	float sleep;
	double watermelons;
	bool doggo = true;
	char skrt;




	// User Queries
	cout << "How many Chicken Dinners do you get? ";
	cin >> Chicken_Dinners;
	cout << "How much sleep do you get in hours? ";
	cin >> sleep;
	cout << "How many watermelons are in my store? ";
	cin >> watermelons;
	cout << "Do you have doggo : Y/N ";
	cin >> skrt;
	if (skrt == 'Y' || skrt == 'y') {
		doggo = true;
	}

	cout << "You get " << Chicken_Dinners << " Chicken Dinners. \n";
	cout << "You get " << sleep << " hours of sleep." << endl;
	cout << "You think I have " << watermelons << " watermelons in my store." << '\n';
	cout << boolalpha << "The answer evaluation of you have doggo is " << doggo << endl;

	pause();

}
