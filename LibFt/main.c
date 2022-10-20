#include <stdio.h>
#include <string.h>
int main()
{
    const char str[] = "Abdellah";
    char oc = 'e';
    char *dst; 

    dst = memchr(str,oc,8);
    printf("%s",dst);
    return 0;
}