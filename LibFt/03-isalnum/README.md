# isalnum in C Library 

This function `isalnum()` is used to check that the character is alphanumeric or not. it returns non-zero value, if the character is alphanumeric means letter or number otherwise, returns zero. it is declared in `"ctype.h"` 

  the declaration of `isalnum()` in C library it's declared like this :

   ```c
    int isalnum(int character) 
   ```
- Parameters of Function : 

   * character : this is a C character to be checked if is alphanumeric or no.

- Return value :  
  
   In the case of character is `alphanumeric`, the function will return `1` 
   but in case of character is not `alpha` or `digit` , the function will return `0`.

- Some Example :

 ```c
  #include <stdio.h>
  #include <ctype.h>

   int main (void)
   {
      int result;
      char a = '1';
      result = isalnum(a);
      printf("if %c passed as argument function will return %d\n", a, result);
      char b = 'a';
      result = isalnum(b);
      printf("if %c passed as argument function will return %d\n", b, result);
      char c = '$';
      result = isalnum(c);
      printf("if %c passed as argument function will return %d\n", c, result);
   }
 ```
 the output is : 

```shell
if 1 passed as argument function will return 8
if a passed as argument function will return 8
if $ passed as argument function will return 0
```

# ft_isalnum 

The function will check if character is in rang of digits or is in rang of alphabet : the rang of digits it's from `0` to `9` and range of alphabet is from `a` to `z` or from `A` to `Z`, we will use our both function [ft_isdigit](../06-isdigit/README.md) and [ft_isalpha](../05-isalpha/README.md) to do this . so let's do this condition in code :

```c
if ((ft_isdigit(c) == 1) || (ft_isalpha(c)== 1))
{
   
}
```
so in the case of c is digit my function will return 1;

```c
if ((ft_isdigit(c) == 1) || (ft_isalpha(c)== 1))
{
  return 1;
}
```
in other case we will return 0;

```c
if((ft_isdigit(c) == 1) || (ft_isalpha(c)== 1))
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

int ft_isalnum(int c)
{
  if ((ft_isdigit(c))||(ft_isalpha(c)))
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
  printf("if input is %c, the output of the function is %d\n",c,ft_isalnum(c));
  return 0;
}
```

# Flow Char of ft_isalnum

![isalnum](../Res/image/ft_isalnum.svg)