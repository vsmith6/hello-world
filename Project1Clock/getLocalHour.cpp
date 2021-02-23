#include <ctime>
/* using similar methods and ctime library to get just the local hour and
 store it in a temporary variable */
int getLocalHour(int temp1){
	time_t currentTime = time(0);
	struct tm *localTime;

	time( &currentTime);
	localTime = localtime( &currentTime);
	 temp1=localTime->tm_hour;
return temp1;
}
