# uppercase in C Library 

This function `toupper()` take a lowercase alphabet and convert it to a uppercase character the function it's declared in`"ctype.h"`.

  the declaration of `tolower()` in C library it's declared like this :

   ```c
    int tolower(int c); 
   ```
- Parameters of Function :

   * c : this is a C character to be converted to uppercase.

- How it work :  
  this function will take lowecase as an argument and we will substract 32 for `ASCII CODE` for converting from lowercase to uppercase .
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
    printf("if %c passed as argument function will return %c\n", a, toupper(a));
    printf("if %c passed as argument function will return %c\n", a, toupper(b));
    printf("if %c passed as argument function will return %c\n", a, toupper(c));
  }
 ```

 the output is : 

```shell
if a passed as argument function will print A
if b passed as argument function will print M
if b passed as argument function will print $
```

# ft_toupper 

 The function will check character if it lowecase.

 ```c
 if (c >= 97 && c <= 122)
 {

 }
 ```
 so in the case of c is a lowecase my function will convert it to uppercase : by substract diffrence between uppercase and lowercase in ascii code it 97 - 67 = 32;

```c
if (c >= 97 && c <= 122)
{
  c = c - 32
}
```
in the case of c is not a lowecase it we will return the same value;

```c
if(c >= 0 && c <= 127)
{
  c = c - 32
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

![toupper](../Res/image/toupper.svg)