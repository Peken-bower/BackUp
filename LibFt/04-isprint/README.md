# isprint() in C Library 

This function `isprint()` is used to check that the character is printable character if yes it returns non-zero value, else, returns zero. it is declared in `"ctype.h"` 

  the declaration of `isprint()` in C library it's declared like this :

   ```c
    int isprint(int c) 
   ```
- Parameters of Function : 

   * c : this is a C character to be checked if is printable or not.

- Return value :  
  
   In the case of character is `printable`, the function will return `non-zero` 
   but in case of character is not `printable` , the function will return `0`.

- Some Example :

 ```c
  #include <stdio.h>
  #include <ctype.h>

   int main (void)
   {
      char a,b,c;
      a = 'Q';
      b = '%';
      c = '\n';
      printf("if %c passed as argument function will return %d\n", a, isprint(a));
      printf("if %c passed as argument function will return %d\n", b, isprint(b));
      printf("if %c passed as argument function will return %d\n", c, isprint(c));
   }
 ```
 the output is : 

```shell
if 1 passed as argument function will return 8
if a passed as argument function will return 8
if $ passed as argument function will return 0
```

# ft_isprint

 The function will check if character is in rang of printed character : the rang of printed character it's from `32` to `126` or simple is from ` ` to `~` so let's do this condition in code :

 ```c
 if (c >= 32 && c <= 126)
 {
    
 }
 ```
so in the case of c is printed character my function will return 1;

```c
if (c >= 32 && c <= 126)
{
  return 1;
}
```
in other case we will return 0;

```c
if(c >= 32 && c <= 126)
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

int ft_isprint(int c)
{
  if (c >= ' ' && c <= '~')
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
int main(void)
{
  int c; 
  c = 'A'; 
  printf("if input is %c, the output of the function is %d\n",c,ft_isprint(c));
  return 0;
}
```

# Flow Char of ft_isprint
![isprint](../Res/image/isprint.svg)