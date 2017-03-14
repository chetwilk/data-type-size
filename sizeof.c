/* A simple program written in C that prints out the size of * each data type
 */

#include <stdio.h>

int main(void)
{
    printf("char is %lu\n", sizeof(char));
    printf("int is %lu\n", sizeof(int));
    printf("float is %lu\n", sizeof(float));
    printf("double is %lu\n", sizeof(double));
    printf("long long is %lu\n", sizeof(long long));
}
