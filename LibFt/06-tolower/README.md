# tolower in C Library 

This function `tolower()` take an uppercase alphabet and convert it to a lowercase character the function it's declared in`"ctype.h"`.

  the declaration of `tolower()` in C library it's declared like this :

   ```c
    int tolower(int c); 
   ```
- Parameters of Function :

   * c : this is a C character to be converted to lowercase.


- How it work :  
  this function will take uppercase as an argument and we will add 32 for `ASCII CODE` for converting from uppercase to lowercase .

- Some Example :

 ```c
  #include<stdio.h>
  #include<ctype.h>
  
  void main(void)
  {
    char a,b,c; 
    a = 'a';
    b = 'M';
    c = '$';
    printf("if %c passed as argument function will return %c\n", a, tolower(a));
    printf("if %c passed as argument function will return %c\n", a, tolower(b));
    printf("if %c passed as argument function will return %c\n", a, tolower(c));
  }
 ```

 the output is : 

```shell
if a passed as argument function will print a
if b passed as argument function will print m
if b passed as argument function will print $
```

# ft_tolower 

 The function will check character if it uppercase.

 ```c
 if (c >= 65 && c <= 90)
 {

 }
 ```
 so in the case of c is a uppercase my function will convert it to lowercase : by adding diffrence between uppercase and lowercase in ascii code it 97 - 67 = 32;

```c
if (c >= 65 && c <= 90)
{
  c = c + 32;
}
```
in the case of c is not a uppercase it we will return the same value;

```c
if(c >= 65 && c <= 90)
{
  c = c + 32;
  return (c);
}
else
{
  return (c);
}
```
# Main function 

We have many options to Use Main function and test our function but the simple way to do it is this: 

```c 
#include <stdio.h>

int ft_tolower(int c)
{
  if (c >= 65 && c <= 90)
  {
    c = c + 32;
    return (c);
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

# Flow Char of tolower

![tolower](../Res/image/tolower.svg)