# isascii in C Library 

This function `isascii()` is used to check that the character can represented as a valid 7-bit ASCII character . the function it's declared in`"ctype.h"`.

  the declaration of `isascii()` in C library it's declared like this :

   ```c
    int isascii(int c); 
   ```
- Parameters of Function :

   * c : this is a C character to be checked if is an ascii or no.

- How it work :  
  this function will take integer as an argument we will check this argument by converting it to `ASCII CODE` and after this will check if this value is in Range of all character of ASCII CODE.  

- Return value :  
   In the case of character is `ascii`, the function will return `non-zero` 
   but in case of character is not `ascii` , the function will return `0`.

- Some Example :

 ```c
 #include <stdio.h>
 #include <ctype.h>

  void main (void)
  {
    char a,b; 
    a = '0';
    b = '€';
    printf("if %c passed as argument function will return %d\n", a, isascii(a));
    printf("if %c passed as argument function will return %d\n", b, isascii(b));    
    printf("if € passed as argument function will return %d\n", isascii(b));    
  }
 ```
 the output is :

```shell
if 0 passed as argument function will return 1
if � passed as argument function will return 0
if € passed as argument function will return 0
```
# ft_isascii

 The function will check if character is in rang of ascii code : the rang of ascii code is  from `0` to `127` so let's do this condition in code :

 ```c
 if (c >= 0 && c <= 127)
 {

 }
 ```
 so in the case of c is a ascii code my function will return 1;

```c
if (c >= 0 && c <= 127)
{
  return 1;
}
```
in other case we will return 0;

```c
if(c >= 0 && c <= 127)
{
  return 1;
}
else
{
  return 0;
}
```
# Main function 

We have many options to Use Main function and test our function but the simple way to do it is this: 

```c 
#include <stdio.h>

int ft_isascii(int c)
{
  if (c >= 0 && c <= 127)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
void main(void)
{
  int c; 
  c = 'A'; 
  printf("if input is %c, the output of the function is %d\n",c,ft_isascii(c));
}
```

# Flow Char of isascii

![isascii](../Res/image/isascii.svg)