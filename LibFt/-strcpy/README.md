# Library strcpy()

In C library function `char *strcpy(char *dest, const char *src)` copies the string pointed to , by `src` to `dest`

  the declaration of `strcpy` in C library it's declared like this :

```c
    char *strcpy(char *dest, const char *src)
```
- Parameters of Function : 

   * dest : this is the pointer to the destination array where the content is to be copied
   * src  : this is the string to be copied

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
