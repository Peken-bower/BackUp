# Size_t  : 

size_t is defined in multiple header files such as `string.h`, `stdio.h`, `stddef.h`, `stdlib.h`, `string.h`, `time.h`, `wchar.h`
`size_t` must be large enough to represent the size of any 'object' in C, i.e Things in memory like strings .

`size_t` is defined as of C99 to be an `unsigned int` stored using at least `4 bytes of memory`.

`unsigned int` means `size_t` values cannot be negative.

Now the key takeaway here is that the rang of values that `size_t` can store is going to be grater than `int` as far as positive integers: 

`int` range is `-2,147,483,648` to `2,147,483,647`. 
`size_t` range is start from `0` because is an `unsigned` and we will use `4 bytes` so the max number we can store using `4 bytes` is `4,294,967,295`. so the `size_t` range it like `unsigned int` range .

But in C99 rang of `size_t` is dependent on your compiler, if your compiler is for 32bit so Range of `size_t` is the same of `unsigned int` but if your compiler is for 64bit so Range of `size_t` is the same of `unsigned long long` so let's try this : 

```c 
/* Case of compiler 64bit */
#include <stdio.h> 
 int main ()
 {
    printf("sizeof {size_t} : %ld\n", sizeof(size_t)); 
    printf("sizeof {unsigned long long} : %ld\n", sizeof(unsigned long long)); //llu is format to print unsigned long long
    printf("Max size of {size_t} : %zu\n", __SIZE_MAX__ ); //zu is format to print size_t
    printf("Max size of {unsigned long long} : %lu\n", __SIZE_MAX__); // llu is format to print unsigned long long or you can use lu
 }
```
* if you are use 64bit compiler output we be this :

```shell 
sizeof {size_t} : 8
sizeof {unsigned long long} : 8
Max size of {size_t} : 18446744073709551615
Max size of {unsigned long long} : 18446744073709551615
```

```c
/* case of compiler 32bit */
#include <stdio.h>
 int main ()
 {
    printf("sizeof {size_t} : %ld\n", sizeof(size_t)); 
    printf("sizeof {unsigned int} : %i\n", sizeof(unsigned long long)); //
    printf("Max size of {size_t} : %zu\n", __SIZE_MAX__ ); //zu is format to print size_t
    printf("Max size of {unsigned int} : %i\n", __SIZE_MAX__); // i or u format to print unsigned int
 }
```
* if you are use 32bit compiler output we be this :
```shell 
sizeof {size_t} : 4
sizeof {unsigned int} : 4
Max size of {size_t} : 4294967295
Max size of {unsigned int} : 4294967295
```

some goode references to learn more about this : 
 
[Microsoft](https://docs.microsoft.com/en-us/cpp/c-language/cpp-integer-limits?view=msvc-170)<br>
[geeksforgeeks](https://www.geeksforgeeks.org/size_t-data-type-c-language/)

### Resume
`size_t` it is guaranteed to be big enough to contain the size of the biggest object your system can handle. This way we can display the absolute biggest string that our computer can handle.