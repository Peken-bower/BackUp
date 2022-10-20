# Library putnbr()

We don't have any similar function in Public Library we just use printf.

# ft_putnbr 

This function will display the integer n on the standard output. 
this function is similar to `ft_itoa` function because we will be doing it recusively
We will be breaking down int number as a whole into individual single digit numbers and we will convert those int numbers into characters . 
that we will display on the standard output using our ft_putchar_fd function.

So the function don't need to return any value . but need number for doing its mission . 
we will declare function like this :

```c
void ft_putnbr(int nbr)
{

}
```

In body of function we start by seeing if the int passed in parameter is equal to -2147483648 . 
2147483648 This number is the largest number an int variable can possibly hold. 
when a negative sign is placed in front of it our function is not able to handle it .  so we check to see if a negative version has been given and if so we just immediately return it

```c
void ft_putnbr(int nbr)
{
    if (nbr == -2147483648)
    {
        ft_putstr_fd("-2147483648");
    }
}
```

so if nbr is not equal to -2147483648 , we will check another condition if the nbr is a negative number . if number is last than 0 . we will immediately use ft_putchar_fd(-) to display the minus to the standard output . and we will call ft_putnbr() again on a negative version of the variable n . 
and in Mathematics -(-5) = 5 , so the number we will make it positive using this Method.so we will do this : 

```c
void ft_putnbr(int nbr)
{
    if (nbr == -2147483648)
    {
        ft_putstr_fd("-2147483648");
    }
    else if (nbr < 0)
    {
        ft_putchar_fd(nbr);
        ft_putnbr(-nbr);
    }
}
```

if our given number is not negative so we will move to the next else if and we will check to see if the number is grater than or equal to 10. if it is we begin to break down the number recursively to each individual digit, where we will then convert it into a character. 
so we will going to use a division by `10` and a modulus by `10`. The division by 10 will take us further into the recursion until we finaly reach the very first number in our int. if you look at the modulus 10 we use a + 48 to convert the number into a char value.Though this seem like it will be put to the standard output immediately, it will actually happen last since it will be the last thing to happen when we backtrack out of our recursion. 
We will use ft_putchar_fd on this digit to display it on the standard output and then back track through our recursion until every individual digit has been displayed.


```c
void ft_putnbr(int nbr)
{
    if (nbr == -2147483648)
    {
        ft_putstr_fd("-2147483648");
    }
    else if (nbr < 0)
    {
        ft_putchar_fd('-');
        ft_putnbr(-nbr);
    }
    else if (nbr >= 10)
    {
        ft_putnbr(nbr / 10);
        ft_putchar_fd(nbr % 10 + 48);
    }
    else 
    {
        ft_putchar_fd(nbr + 48);
    }
}
```

### Remark : 
   if you have any difficulty understanding recusion you should write out the steps this function
   will take on a pice of paper .

- [Recursion](https://www.geeksforgeeks.org/recursion/)<br>
- [Recursive function](https://www.geeksforgeeks.org/recursive-functions/)<br>