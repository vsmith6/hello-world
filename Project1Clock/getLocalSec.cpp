#include <ctime>
/* function will get the localtime seconds from the user's system using ctime library and store
 in temporary variable */
int getLocalSec(int temp3){
	// store local seconds
	time_t currentTime = time(0);
	// get values of seconds, minutes, and hours
	struct tm *localTime;

	time( &currentTime);

	localTime = localtime( &currentTime);
 // assign the value of the seconds to a temporary variable and return
	temp3 = localTime->tm_sec;

return temp3;
}
