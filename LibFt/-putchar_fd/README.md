# ft_putchar_fd

This function it the same as our simple [ft_putchar_fd()](../putchar/README.md)

```c
 void ft_putchar_fd(char c)
 {
    write(1, &c ,1);
 }
```

the difference between [ft_putchar_fd()](../putchar/README.md) and ft_putchar_fd() 
is simple `fd` is means file descriptor. so this function requires the file descriptor of where 
to write the output as a parameter. So, rather than automatically writing to the standard output, we choose if we want the to use a file descriptor obtained from  the open system call, or we use (`0, 1, ,2`) to refer to the standard input , standard output, or standard error, respectively. we use the write function as we did in the ft_putchar_fd.