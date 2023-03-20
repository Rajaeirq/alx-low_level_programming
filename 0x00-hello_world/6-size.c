#include <stdio.h>

/**
* You should produce the exact same output as in the example
* Warnings are allowed
*
* Your program should return 0
*/
int main(void)
{
        char c;
        int i;
        long li;
        long long lli;                         
        float f;

        print("size of a char: %ld byte(s)\n", sizeof(c));
        print("size of a int: %ld byte(s)\n", sizeof(i));
        print("size of a long: %ld byte(s)\n", sizeof(li));
        print("size of a long long: %ld byte(s)\n", sizeof(lli));
        print("size of a float: %ld byte(s)\n", sizeof(f)); 
        return (0);
}
