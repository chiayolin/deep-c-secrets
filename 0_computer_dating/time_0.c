#include <stdio.h>
#include <limits.h>
#include <time.h>

int main(void) {
	struct tm _time_max = { 
		.tm_sec = 59,
		.tm_min = 59,
		.tm_hour = 23,
		.tm_mday = 31,
		.tm_mon = 12,
		.tm_year = INT_MAX - 1 };

	time_t time_max = mktime(&_time_max),
		   time_now, time_diff;
	
	time(&time_now);
	time_diff = difftime(time_max, time_now);
	
	printf("now  : %s", ctime(&time_now));
	printf("max. : %s", ctime(&time_max));
	printf("diff : %s", ctime(&time_diff));

	return 0;
}
