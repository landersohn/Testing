#include "stdio.h"

int main(int argc, char *argv[])
{
#ifdef __WIN32__
	printf("hello MS\n");
#else
	printf("hello gcc\n");
#endif
	return 0;
} 
