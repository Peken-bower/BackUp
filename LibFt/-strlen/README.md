# Size_t

some info about [size_t](../putstr/README.md)

# Library strlen

In C library function we have a function call `strlen` with this function we can computes the length of the string `str` . but we compute with out including the terminating null character . 

  the declaration of `strlen` in C library it's declared like this :

```c
    size_t strlen(const char *str) 
```
- Parameters of Function : 

   * str : this is the string whose length is to be found.

- Return value :  
  
   the function returns the length of string.

- Some Example :

 ```c
  #include <stdio.h>
  #include <string.h>

   int main ()
   {
      char str[9];
      int len;

      strcpy(str, "Abdellah");
      len = strlen(str);
      printf("length of {%s} is {%d}", str,len);
      return 0;
   }
 ```

  the output is : 

```shell
Length of {Abdellah} is {8}
```

# ft_strlen : 


This function computes the length of the string `str` . 

- So we will start by declaring a `index` or `length` varaibale that we will use to moce through our stirng .

```c
size_t len;
```

- And we will set `len = 0` to start from beginning of the parameter string `str` . 

```c
len = 0;
```

- we do a simple loop starting that so long as we have not reached the end of our string we want the loop to continue : we do this until we reach the terminating `'\0'` of the string .

```c
while(str[len] != '\0')
```

or 

```c
while(str[len])
```

- in body off loop we will just increament the `len` for every time loop not reached the end of string we will increament `len` by one .

```c
while(str[len])
{
    len++;
}
```

- so after the while get the end of String and this condition `str[len] = '\0'` was true we will go the the next line of this function is `return len`.

```c
while (str[len])
{
    len++;
}
return (len);
```