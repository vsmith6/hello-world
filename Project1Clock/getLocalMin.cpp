#include <ctime>
/* using similar functionality of the getLocalSecond funtion and the ctime library to get the
 local minutes and store in a temporary variable and return it */
int getLocalMin(int temp2){
	time_t currentTime = time(0);
	struct tm *localTime;

	time( &currentTime);
	localTime = localtime( &currentTime);

	temp2 = localTime->tm_min;

return temp2;
}
