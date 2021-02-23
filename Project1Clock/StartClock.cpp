#include "getLocalHour.h"
#include "getLocalMin.h"
#include "getLocalSec.h"
#include "displayClock.h"



// function starts the clock by getting the localtime from the functions and then displaying the clock.
void startClock(){
	// set integer values to get the local time from the getLocal functions, which use the ctime library
	int temp1, temp2, temp3;


   // assign the variables to the local time function that will return their value
	temp1 = getLocalHour(temp1);
	temp2 = getLocalMin(temp2);
	temp3 = getLocalSec(temp3);


    // call the displayClock function with the initial values
	displayClock(temp1, temp2, temp3);


}
