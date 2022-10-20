# Pointer Incrementation By Address and By value 


```
ptr++;    // Pointer moves to the next int position (as if it was an array)
++ptr;    // Pointer moves to the next int position (as if it was an array)
++*ptr;   // The value pointed at by ptr is incremented
++(*ptr); // The value pointed at by ptr is incremented
++*(ptr); // The value pointed at by ptr is incremented
*ptr++;   // Pointer moves to the next int position (as if it was an array). But returns the old content
(*ptr)++; // The value pointed at by ptr is incremented
*(ptr)++; // Pointer moves to the next int position (as if it was an array). But returns the old content
*++ptr;   // Pointer moves to the next int position, and then get's accessed, with your code, segfault
*(++ptr); // Pointer moves to the next int position, and then get's accessed, with your code, segfault
```

# Example : 

```c 
#include <stdio.h>
int main()
{
    int a = 4;
    int b[4] = {1,2,3,4};
    char c = 'A';
    char d[4] = "abcd";

    int *p;
    char *ptr;
    printf("")
}
```

