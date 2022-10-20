# ft_putstr_fd

This function is exactly same as our [ft_putstr_fd](../02-putstr/README.md) function excepet in [ft_putstr_fd](../02-putstr/README.md) we don't have `fd` as parameter , and in this function
we are requiring a file desciptor in the parameter. 
in [ft_putchar_fd](../12-putchar_fd/README.md) 

- we use a file descriptor obtained from the open system call. so let's declare our function .

```c
void ft_putstr_fd(char const *s, int fd)
{

}
```

- now we will use the `fd` parameter as the first parameter in our write function. 

```c
void ft_putstr_fd(char const *s, int fd)
{
   write(fd, );
}
```

- now we place our string as write's next parameter.

```c
void ft_putstr_fd(char const *s, int fd)
{
   write(fd, s, );
}
```
- new we will use ft_strlen on our string so we know how many bytes will need to be written, which is the same as the length of given string . write will then write string s to the desired output 

```c
void ft_putstr_fd(char const *s, int fd)
{
   write(fd, s, ft_strlen(s));
}
```