# ft_putchar_fd 

This function that write a single character to the standard output stream of the terminal 
this is one of the most basic and essential of all the functions in our library. we use the write function to achieve our desired output. the character we want to output it hold in the function parameter variable `char c` . This can be any printable character.


The first parameter in write() function is a file descriptor of where to write the output. 
you can either-use a file descriptor obtained from the open system call, or you can use 0, 1, or 2, to refer to the `standard input, standard output, or standard error, respectively . In this case we want to standard output so we use 1. 

```c
write(1, )
```

the next parameter is a null terminated character string of the content to write . We give the address to our char c parameter . 

```c
write(1, &c, );
```

the last parameter is the number of bytes to write . since we have one character we want that is 1 byte so we put a 1 as the parameter this will place our char c to the standard output . 


```c
write(1, &c, 1);
```