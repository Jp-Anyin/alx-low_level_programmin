#include <unistd.h> 
* Return: On success 1. 
/** 
int _putchar(char c) 
{ 
#include "main.h" 
* @c: The character to print 
*/ 
return (write(1, &c, 1)); 
* 
* On error, -1 is returned, and errno is set appropriately. 
* _putchar - writes the character c to stdout 
}
