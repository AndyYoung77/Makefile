#include <stdio.h>
#include "add.h"
#include "min.h"
#include "multi.h"
#include "div.h"


int main(void)
{
	printf("add is %d \r\n", add(2, 7));
	printf("min is %d \r\n", min(2, 7));
	printf("multi is %d \r\n", multi(2, 7));
	printf("div is %d \r\n", div(8, 2));

	return 0;
}
