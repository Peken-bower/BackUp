# putstr() in Library : 

In C library function we have a function call `puts` with this function we can writes a string to stdout up to but not including the null characters. A newline character is appended to the output: 

  the declaration of `putstr` in C library it's declared like this :

   ```c
    int puts(const char *str) 
   ```
- Parameters of Function : 

   * str : this is the C string to be written.

- Return value :  
  
   In the case of successful, the function will return a non-negative value. 
   but in case of error, the function will return `EOF`. the Value of `EOF` is `-1`.

- Some Example :

 ```c
  #include <stdio.h>
  #include <string.h>

   int main ()
   {
      char myfirstName[9];
      strcpy(myfirstName, "Abdellah");
      puts(myfirstName);
      puts("This is my name")
   }
 ```
 the output is : 

```shell
Abdellah
Elmrabet
```
# ft_putstr_fd :

This function displays the string `s` to the standard output. we do this using Our [ft_putchar_fd]() function .
 
- we start by declaring a `size_t` variable i that we will use to move through our string. 
```c
size_t i;
```

- we set `i = 0` to start from beginning of the parameter string `s`. 

```c
i = 0;
```

- we do a simple loop starting that so long as we have not reached the end of our string we want the loop to continue: we do this until we reach the terminating '\0' of the string.

```c
while(s[i] != '\0')  
```
Or 
```c
while(s[i])
```

 in body off loop we will move to each index position of our string and place the character in that position as a parameter for our ft_putchar_fd() function.

```c
while(s[i])
{
   ft_putchar_fd(s[i]);
}
```

 the ft_putchar_fd() function will put that character in the standard output and then we increment the i variable to continue moving through the string.  

```c
while(s[i])
{
   ft_putchar_fd(s[i]);
   i++;
}
```