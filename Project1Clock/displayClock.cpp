
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include "StartClock.h"
#include <unistd.h>
#include "displayMenu.h"

using namespace std;
using std::cout;
using std::endl;




void displayClock(int Hours, int Min, int Sec){


//Set constants for menu titles for clock type
const string twelveHour = "12 Hour Clock";
const string twentyFourHour = "24 Hour Clock";
// set string variables in order to display meridiem choice and type
string AM = "A M";
string PM = "P M";
string meridiemType;

// create variables local to this function only and assign them to the variables passed in from start clock function
int myHour, myMin,  mySec;

  myHour = Hours;
  myMin = Min;
  mySec = Sec;


    // assign the meridiemType based on the hour value
	if (myHour < 12){
		meridiemType = AM;
	}

	if(myHour >= 12){
		meridiemType = PM;

	}


	std::cout<<"**************************"<<"     "<<"**************************"<<std::endl;
	std::cout<<"*    "<<twelveHour<<"       *     "<<"*    "<<twentyFourHour<<"       *"<<std::endl;
	std::cout<<"*    "<<setfill('0')<<setw(2)<<myHour<<":"<<setfill('0') << setw(2)<<myMin<<":"<<setfill('0') << setw(2) <<mySec<<" "<<meridiemType<<"        *"<<"     "<<"*    "<<setfill('0') << setw(2)<<myHour<<":"<<setfill('0') << setw(2)<<myMin<<":"<<setfill('0') << setw(2) <<mySec<<"            *"<<std::endl; //setw()=sets the field width,
	//setfill()=set character as the streams fill character.
	std::cout<<"**************************"<<"     "<<"**************************"<<std::endl;


   cout<<endl;

   //get input from the user while the clock is displayed
   char clearScreen='N';



   while((clearScreen == 'N') || (clearScreen == 'n')){


	cout<<"Would you like to change the time? Press Y to change the time or N to continue."<<endl;
//
//	//get the input choice from the user
	std::cin>>clearScreen;

	// allow them to enter a capital or lower case N,n
	if ((clearScreen == 'N') || (clearScreen == 'n')){

	/* control the clock display to move as a normal clock, if seconds are 59, adding a second changes seconds
	 * to zero, and increments minutes by one */
	if(mySec == 59){
		mySec = 0;
		myMin+=1;

	}
	/*  if minutes are 59, they move to 0 and the hour is incremented by one to mimic normal clock movement*/
	else if(myMin == 59){
		myMin = 0;
		myHour+=1;
	}
	// if the hour is at 23, it moves to 0, to imitate the movement of a normal clock
	else if(myHour == 23){
		myHour = 0;
	}
	// if none of the above apply, just add a second
	else{
	mySec+= 1;
	}


//	int input=displayMenu(input);
	usleep(1000000); // wait a second and then display the clock

	displayClock(myHour, myMin, mySec);



	}// end if clearScreen = N

// if user chooses Y to change the time, enter this function to display the menu. User can use Y or y
	 if ((clearScreen == 'Y') || (clearScreen == 'y')){


        // set input from user and pass it to the display menu function
	int input=displayMenu(input);

		// if the users input is valid, enable them to change the selection of the menu
		char inputValid = 'Y';
		while(inputValid == 'Y'){
		if(input ==1){
			// hour cannot be more than 23, same rule as above
			if(myHour == 23){
	         myHour = 0;
			}else{
				myHour+=1;
			}
			displayClock(myHour,myMin,mySec);
			break;
		}
		else if(input ==2){
			// minute cannot be more than 59, same rule as above
			if(myMin == 59){
				myMin = 0;
				myHour+=1;
				}else {
			     myMin += 1;
				}
			displayClock(myHour, myMin, mySec);
			break;
		}
		else if(input ==3){
			// second cannot be more than 59, same rule as above
			if(mySec == 59){
				mySec = 0;
				myHour +=1;
			}else {
			mySec += 1;
			}
			displayClock(myHour, myMin, mySec);
			break;
		}
		else if(input == 4){
			//wait one second and then end program
			usleep(1000000);
			std::cout<<"Program Ended"<<endl;
		//	break;
			exit(0);

		}
		else if(input == 5){
			// restart the clock with latest input from ctime library
			startClock();
			break;

		}
		// user must enter a number between 1 and 5 to match the menu or start over
		else if ((input > 5)|| (input <=0)){
			inputValid = 'N';
			cout<<"Please enter a number from one to five inclusive"<<endl;
			displayClock(myHour, myMin, mySec);
			int inputAgain = displayMenu(inputAgain);


		} // end else if
		}//end while

	} //clear screen y


}//end while

}// end function
