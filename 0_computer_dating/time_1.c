#include <stdio.h>
#include <time.h>

int main(void) {
	/* time_t is basically a typedef of long, which is a 64-bit interger
	 * on 64-bit machines. however, the 32-bit max. value is used inste-
	 * ad of the 64-bit long because the tm structure is defined as reg-
	 * ular ints (32-bit) in Apple's implementation on Mac OS X */
	time_t max = 0x7fffffff;

	/* gmtime() returns a pointer to a tm structure so we store that po-
	 * inter into a pointer to a tm structure */ 
	struct tm *t = gmtime(&max);

	/* acstime() takes a pointer to a tm structure, converts them, and
	 * then retures an ASCII string with newline and null terminator */ 
	printf("max. : %s", asctime(t));

	return 0;
}
