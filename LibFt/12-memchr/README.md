# memchr in C Library 

the function memchr is used to searches for the first occurrence of the character `c` (this c is an unsigned char) in the first `n` bytes of the string pointed to, by the argument `str`.
the prototype of the function in `string.h` is like this : 
```c
void *memchr(const void *str, int c, size_t n)
```

- Parameter of the function :

* str : this is the pointer to the block of memory where the search is performed  
* c :  this is the value to be passed as an int, but the function performs a byte per byte search using the `unsigned char convertation` of this value.
* n : this is the number of bytes to be analyzed.


- Return Value : 

This function returns a pointer to the matching byte but if the character does not occur in the given memory area will return NULL ٫

- Example : 

```c
#include <stdio.h>
int main()
{
    const char str[] = "Abdellah";
    char oc = 'e';
    char *dst; 

    dst = memchr(str,oc,8);
    printf("%s",dst);
    return 0;
}
```

- Output: 

```
ellah
```

# ft_memchr : 

this function is a copy of the memmove function in the `string.h`.

According the man this function locates the first occurence of `c` (converted to unsigned char) in `string.h` . the ft_memchr will return a pointer to the byte located, or NULL if no such byte exists within n bytes

```c
void *ft_memchr(const void *str, int c, size_t n)
```

so i will start by creating a char of pointer `cststr` that we will be placing a casted version of our `str` parameter into. we also create a `size_t` variable `i` that i will use it as a counter of `str`. so why is `size_t` not a `int` because i need to compare it to my given `size_t` in parameter in our Loop. 
i will start my `i` with 0 since we will also be using it to strat at the beginning of our string `cststr` . the next step i will cast my `str` parameter as a char pointer and place it inside our `cststr` variable.


```c
void *memchr(void *str, int c, size_t n)
{
    char *cststr;
    size_t i; 

    i = 0; 
    cststr = (char *)str;
}
```

while our `i` variable is less than the parameter `n` we will have our loop continue.

```c
void *memchr(void *str, int c, size_t n)
{
    char *cststr;
    size_t i; 

    i = 0; 
    cststr = (char *)str;
    while(i < n)
}
```

Inside Our loop we want to see if the current index position that has be casted as unsingeed char is equal to the parameter  `c` that has also been casted as unsigned char .

```c
void *memchr(void *str, int c, size_t n)
{
    char *cststr;
    size_t i; 

    i = 0; 
    cststr = (char *)str;
    while(i < n)
        if((unsigned char)str[i] == (unsigned char)c)
}
```
if this statement is true we will return a char casted pointer to the index position that contains `c` .

```c
void *memchr(void *str, int c, size_t n)
{
    char *cststr;
    size_t i; 

    i = 0; 
    cststr = (char *)str;
    while(i < n)
        if((unsigned char)str[i] == (unsigned char)c)
            return ((char *) s + i);
}
```
else `n` is less than `i` and we still have not located c. we will increment our counter(`i`).
```c
void *memchr(void *str, int c, size_t n)
{
    char *cststr;
    size_t i; 

    i = 0; 
    cststr = (char *)str;
    while(i < n)
        if((unsigned char)str[i] == (unsigned char)c)
            return ((char *) s + i);
        else
            i++;
}
```
in the last step if no such bytes exists within `n` bytes we will return NULL; 

```c
void *memchr(void *str, int c, size_t n)
{
    char *cststr;
    size_t i; 

    i = 0; 
    cststr = (char *)str;
    while(i < n)
        if((unsigned char)str[i] == (unsigned char)c)
            return ((char *) s + i);
        else
            i++;
    return NULL;
}
```

# Main function 

We have many options to Use Main function and test our function but the simple way to do it is this: 

```c 
  void *memmove(void *str, int c, size_t n)
 {
  char *cstdst;
  char *cstsrc;

  csrdst = (char *)dst;
  cstsrc = (char *)src;
  if(cstsrc > cstdst)
    while(len--)
      *(cstdst++) = *(cstsrc++);
  else
    while(len--)
    *(cstsrc + len) = *(cstsrc + len);
  return (dst);
 }
 
int main(void)
{
  char src1[8] = "Abdellah";
  char dst1[8] = "Abde";
  ft_memmove(dst1, src1,8);
  printf("%s\n",dst1);
    return 0;
}
```
# Flow char of Algorithm 

![memchr](../Res/image/memchr.svg)