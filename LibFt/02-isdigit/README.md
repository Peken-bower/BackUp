# isdigit in C Library 

This function `isdigti()` is used to check that the character is digit or not. it returns zero, if the character is not digit . the function it's declared in`"ctype.h"`.

  the declaration of `isdigit()` in C library it's declared like this :

  ```c
    int isdigit(int c); 
  ```
- Parameters of Function :

   * c : this is a C character to be checked if is digit or no.

- How it work :  
  
  this function will take integer as an argument we will check this argument by converting it to `ASCII CODE` and after this will check if this value is in Range of the numbers in ASCII CODE.  

- Return value :  
  
   In the case of character is `digit`, the function will return `Non-zero integer` 
   but in case of character is not `digit` , the function will return `0`.

- Some Example :

 ```c
 #include<stdio.h>
 #include<ctype.h>
  
  void main(void)
  {
    char a,b; 
    a = '9';
    b = '(';
    printf("if %c passed as argument function will return %d\n", a, isdigit(a));
    printf("if %c passed as argument function will return %d\n", a, isdigit(b));
  }
 ```
 the output is : 

```
if 9 passed as argument function will return 2048
if ( passed as argument function will return 0
```

# ft_isdigit 

The function will check if character is in rang of digits : the rang of digits it's from `0` to `9`  so let's do this condition in code :

```c
if (c <= '0' && c >= '9')
{

}
```
so in the case of c is digit my function will return 1;

```c
if (c <= '0' && c >= '9')
{
  return 1;
}
```
in other case we will return 0;

```c
if(c <= '0' && c >= '9')
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

int ft_isdigit(int c)
{
  if ((c >= '0' && c <= 'Z')|| (c >= 'a' && c <=' z'))
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
  printf("if input is %c, the output of the function is %d\n",c,ft_isdigit(c));
  return 0;
}
```

# Flow Char of isdigit

![isdigit](../Res/image/isdigit.svg)