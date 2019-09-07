#include <stdlib.h>
#include <stdio.h>

int copy_bit(int src, int dst, int pos)
{
	int result = 0;
	int mask = 1 << pos;
	int value = 0;
	value = src & mask;
	return (dst & ~mask) | (value & mask);
}

#ifndef RunTests
int main()
{
	printf("%d", copy_bit(7, 12, 3));
}
#endif

///////////////////////////
/*
#include <stdlib.h>
#include <stdio.h>

int copy_bit(int src, int dst, int pos)
{
	int msk = 1 << pos;
	int val = 0;
	val = src & mask;
	int ret = (dst & ~mask) | (val & mask);
	return ret;
}


#ifndef RunTests
int main()
{
	printf("%d", copy_bit(7, 12, 3));
}
#endif
*/