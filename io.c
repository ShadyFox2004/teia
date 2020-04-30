#include <common>

/*
 * 	Source code for io.h
 *
 * 	Function definition
 * 		clearBuffer()
 * 		readIntput()
 */

#ifndef clearBuffer	//	Clear the stdin buffer
int clearBuffer ()
{
	int c = 0;
	while ( c != '\n' && c != EOF )
	{
		c = getchar();
	}
}
#endif	//	clearBuffer
