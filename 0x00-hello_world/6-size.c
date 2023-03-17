#include <stdio.h>
/*
 *int main(void): is the entry point
 *This is a c code that prints a char using printf function
 *return: 0 means that the execution has succeded
*/
int main(void)
/*
 *int main(void): is the entry point
*/
{
printf("Size of a char: %u byte(s)\n", sizeof(char));
printf("Size of an int: %u byte(s)\n", sizeof(int));
printf("Size of a long int: %u byte(s)\n", sizeof(long int));
printf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
printf("Size of a float: %u byte(s)\n", sizeof(float));
return (0);
}
