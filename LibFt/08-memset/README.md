# memset(memory setter) in C Library 

This function `memset()`  or (memory setter) it used to fill a block of memory with a particular value. the function it's declared in  `"string.h"`.
  the declaration of `memset()` in C library it's declared like this :

   ```c
    void *memset(void *str, int c, size_t n)
   ```

- Parameters of Function :
   * *str : This is a pointer to the block of Memory to fill. 
   * c : this value to be set.
   * n : this is the number of bytes to be set to the value.
- Return Value : 
 
   The memset() function returns a pointer to the memory area `str`.

- How it work :  
  according the manual of this function will sets the first count bytes of `dest` to the value c . the value of C converted to an unsigned character.

- Notes : 

 * `*str` it's a void pointer, because we want pass any type of pointer to this function [check here](../Res/Topic/void_pointer.md) for more information about this void pointer.
 
 * `c` it's passed as an int data type but function fills the block of memory using the unsigned char conversion of this value. [check here](../Res/Topic/type_casting.md) for more info about typecasting

 * `n` because it number of bytes to be set to the value so we need to Benefit from size_t . it's It is the greatest value we have. [check here](../Res/Topic/Size_t.md) for more info.

- Some Example :

 ```c
  #include<stdio.h>
  #include<string.h>
  
  int main(void)
  {
    char str[9] = "Abdellah";
    printf("The value before use memset function is : %s\n",str);
    memset(str + 4,'.',4*sizeof(char));
    printf("The value after use memset function is : %s\n",str);
    return 0;
  }
 ```

 the output is : 

```
The value before use memset function is : Abdellah
The value after use memset function is : Abde....
```

# ft_memset
 
 this function is a copy of the memset function in the `string.h`.
 
 we starting by creating a char string of p. this is what we will use to hold a cast version of our void `b parameter`.
 ```c
 void *memset(void *str, int c, size_t n)
 {
  char *p 
 }
 ```

 Here we will set p equal to a char cast version of b.
 ```c
 char *p 
 p = (char *)b;
 ```
so i will now start my loop. the loop need to check the size of `len` that is passed into it's parameter. my loop need to work in general piece of memory not just in '\0'
terminate string. so we can not have our loop's condition based on the usual idea that we will reach the end of a string so in this case we say so long as the given len is greater than 0 we will continue the loop.
 ```c
 void *memset(void *str, int c, size_t n)
 {
  char *p 
  while(len > 0)
  {
  }
 }
 ```
 We than move backwards through the string `p` placing the int c inside of each index position.
 we do `len -1` because we are compensating for the terminating '\0' at the end of the string that we do not want to replace.

 ```c 
 void *memset(void *str, int c, size_t n)
 {
  char *p 
  while(len > 0)
  {
    p(len - 1) = c;
  }
 }
 ``` 
 we decrement len and then start the loop ever again until len is noo longer greater than 0.

 ```c
  void *memset(void *str, int c, size_t n)
 {
  char *p 
  while(len > 0)
  {
    p(len - 1) = c;
    len--;
  }
 }
 ```
 we than return b .

 ```c 
  void *memset(void *str, int c, size_t n)
 {
  char *p 
  while(len > 0)
  {
    p(len - 1) = c;
    len--
  }
  retrun 0;
 }
 ```


# Main function 

We have many options to Use Main function and test our function but the simple way to do it is this: 

```c
  void *ft_memset(void *str, int c, size_t n)
{
 char *p 
 while(len > 0)
 {
   p(len - 1) = c;
   len--
 }
 retrun 0;
}
 
 int main(void)
 {
   char str[9] = "Abdellah";
   printf("The value before use memset function is : %s\n",str);
   ft_memset(str + 4,'.',4*sizeof(char));
   printf("The value after use memset function is : %s\n",str);
   return 0;
 }
```


# Remember: 

The memset performs copy operation byte by byte: 

```c
#include <stdio.h>
#include <string.h>

void parray(int arr[], int n)
{
  int i;
  for( i = 0; i<n; i++)
  {
    printf("The address is 0x%x\n",arr[i]);
  }
}
int main(void)
{
    int arr[5];
    memset(arr" ,1,sizeof(arr));
    parray(arr,5);
    return 0;
}
```

# Output: 

```
The address is 0x1010101
The address is 0x1010101
The address is 0x1010101
The address is 0x1010101
The address is 0x1010101
```

* We can use the memset for any memory buffer either we can use memest with structure, array or anyother data type.
* in the case of memory buffer is not correct the memset will show you undefined behavior.
* in the memset we take value which you want to copy and will convert it to unsigned char.

