#include<stdio>
/**
 * main - Entry point
 *
 * Result: Always (success)
 */
int main(void)

{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'q')
continue;

else if (alphabet -== 'e')
continue;

putchar(alphabet);
}

putchar('\n');

return (0);
}

