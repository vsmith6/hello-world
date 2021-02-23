
#include <iostream>
#include<string.h>
#include <iomanip>//needed for setFill, setw
using namespace std;
using std::cout; // using std::cout to clear cout buffer
using std::endl;

// method used to display the selection menu for the user if they input Y to change a number
int displayMenu(int input){

		std::cout<<"Please select a number to change your selection :"<<std::endl;

	std::cout << setfill('*') << setw(26) << "" << std::endl;
	std::cout << "* 1 - Add One Hour       *" << std::endl;
	std::cout << "* 2 - Add One Minute     *" << std::endl;
	std::cout << "* 3 - Add One Second     *" << std::endl;
	std::cout << "* 4 - Exit Program       *" << std::endl;
	std::cout << "* 5 - Start Clock        *" << std::endl;
	std::cout << setfill('*') << setw(26) << "" << std::endl;
	cin >> input;
	while(cin.fail()) { //prevent infinite loop when user enters a string instead of number
	    cin.clear();
	    cin.ignore(5000,'\n');
	    cout << "Invalid input, please enter a number." << endl;
	}//end while fail

	return input;

}//end displaymenu
