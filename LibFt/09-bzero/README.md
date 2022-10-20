
# bzero in C Library 

the function bzero set the first parety of an object to null bytes 

   ```c
    void bzero(void *s, size_t n)
   ```

- Parameters of Function :

   * *s : Points to a buffer that zeros are copied into
   * n :  this is the number of zeros to be copied into the buffer

- Return Value : 
 
   `NONE`.

- How it work :  

  according the manual of this function copies `n` bytes, each with a value of zero, into string s.

- Some Example :

 ```c
  #include<stdio.h>
  #include<string.h>
  
  int main(void)
  {
    char str[] = "Abdellah";
    printf("The value before use bzero function is : %s\n",str);
    bzero(str,4);
    printf("The value after use bzero function is : %s\n",str);
    return 0;
  }
 ```

 the output is : 

```
The value before use bzero function is : Abdellah
The value after use bzero function is : 
```

# ft_bzero
 
 this function set the first parety of an object to null bytes  this function is included in `string.h`.
 
 in this function i use `memset()` function you can check it [here](../08-memset/README.md)
 
 ```c
 void bzero(void *s, size_t n)
 {
    ft_memset(s, 0, n);
 }
 ```

 Here we will set the secound parameter of memset to `0` to replace Our Value with 0 in the ASCII 0 is '/0' Check [Here](../Res/ASCII-Table.svg).
 