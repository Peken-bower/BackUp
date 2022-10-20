# isalpha in ctype.h 

This function `isalpha()` is used to check that the character is alpha or not. it returns zero, if the character isn't an alphabet . the function it's declared in`"ctype.h"`.

  the declaration of `isalpha()` in  "ctype.h" it's declared like this :

   ```c
    int isalpha(int c); 
   ```
- Parameters of Function :

   * c : this is a C character to be checked if is an alphabet or no.

- How it work :  
  
  this function will take integer as an argument we will check this argument by converting it to `ASCII CODE` and after this will check if this value is in Range of the alphabet in ASCII CODE.  

- Return value :  

   In the case of character is `alphabet`, the function will return `Non-zero integer` 
   but in case of character is not `alphabet` , the function will return `0`.

- Some Example :

 ```c
 #include<stdio.h>
 #include<ctype.h>
  
  void main(void)
  {
    char a;
    a = 'a';
    printf("if %c passed as argument function will return %d\n",isalpha(c));
    char b;
    b = 'T';
    printf("if %c passed as argument function will return %d\n",isalpha(b));
    char c;
    c = '+';
    printf("if %c passed as argument function will return %d\n",isalpha(c));
  }
 ```
 the output is :

```shell
if a passed as argument function will return 2
if T passed as argument function will return 1
if + passed as argument function will return 0
```

# ft_isalpha

The function will check if character is in rang of alphabet : in lowercase if my character is grater or equal than 'a' and last or equal to 'z' so `it alphabet` example of `m` it >= `a` and it `z`. 
or if my character is uppercase i will check range of uppercase alphabet so if character is grater or equal than 'A' and last or equal to 'Z' so `it alphabet` example of N : it 'Z' <= N >= 'Z'. so let's do this condition in code :

```c
if ((c<='a' && c>= 'z')||(c<='A' && c>='Z'))
{

}
```
so in the case of c is alphabet my function will return 1;

```c
if ((c<='a' && c>= 'z')||(c<='A' && c>='Z'))
{
  return 1;
}
```
in other case we will return 0;

```c
if((c<='a' && c>= 'z')||(c<='A' && c>='Z'))
{
  return 1;
}
else
{
  return 0;
}
```

# Note 
we can use ascii code in our condition for example "A" = 65 and "Z" = 90 Or "a" =  97 and "z" = 122

Also we can use Binary Or Hexadecimal, for example "A" = 65 = 0x41.

# Main function 

We have many options to Use Main function and test our function but the simple way to do it is this: 

```c 
#include <stdio.h>

int ft_isalpha(int c)
{
  if ((c >= 'A' && c <= 'Z')|| (c >= 'a' && c <=' z'))
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
  printf("if input is %c, the output of the function is %d\n",c,ft_isalpha(c));
}
```

# Flow Char of isalpha

![isalpha](../Res/image/isalpha.svg)