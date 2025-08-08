#include <stdio.h>
#include <unistd.h>

int main()
{
	while (1) {
		printf("Hello World!\n");
		fflush(stdout);
		sleep(3);
	}
	return 0;
}
