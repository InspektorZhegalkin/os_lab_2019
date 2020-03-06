#include "swap.h"

void Swap(char *left, char *right)
{
	char buffer1;
	buffer1 = *left;
	*left = *right;
	*right = buffer1;
}
