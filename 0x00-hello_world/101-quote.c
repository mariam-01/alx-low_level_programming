#include <unistd.h>
/**
* main -  UNIX
* Return: Always 1 (Success)
*/
int main(void)
{
char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int len = sizeof(str) - 1;
write(2, str, len);
return (1);
}
