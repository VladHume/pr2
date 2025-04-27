#include <stdio.h>
#include <time.h>
#include <limits.h>

int main(){
	printf("Max int 32 bit: %d\n", INT_MAX);
	printf("Max int 64 bit: %ld\n", LONG_MAX);
	
	time_t max_32 = (time_t)INT_MAX;
	time_t max_64 = (time_t)LONG_MAX;
	time_t s_max_64 = (time_t)(LONG_MAX /1000);

	printf("32 bit: %s\n", ctime(&max_32));
	printf("64 bit: %s\n", ctime(&max_64));
	printf("%s\n", ctime(&s_max_64));

	return 0;
}
