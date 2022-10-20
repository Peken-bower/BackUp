# memmove in C Library 

This function memmove() it's used to copier `n` character from `src` to `dst`.
  the declaration of `memset()` in C library it's declared like this :

   ```c
    void *memmove(void *dst, const void *src, size_t len)
   ```

- Parameters of Function :
 
   * *dst : This is a pointer to the destination array where the content is to be copied. 
   * *src : this is a pointer pointe to the source of data to be copied.
   * n : this is the number of bytes to be copied.

- Return Value : 
 
   The memmove() function returns a pointer to destination, which is `dst`.

- How it work :  

using this function we can copies `numBytes` Bytes from `address` to `address`


- Some Example :

 ```c
  #include <stdio.h>
  #include <string.h>
  
  int main(void)
  {
    char str[9] = "Abdellah";
    char dst[9];
    printf("The value before use memmove function is : %s\n",dst);
    memmove(dst, str, 8);
    printf("The value after use memmove function is : %s\n",dst);
    return 0;
  }
 ```

 the output is : 

```
The value before use memmove function is : 
The value after use memmove function is : Abdellah
```

# ft_memmove
 
 this function is a copy of the memmove function in the `string.h`.
 
 we starting by creating a char string of `cstdst`. this is what we will use to hold a cast version of our void `dst parameter`. and another variable `cstsrc` we will use it to hold a cast varsion of our void `src`.
 ```c
 void *memmove(void *dst, const void *src, size_t len)
 {
  char *cstdst;
  char *cstsrc;
 }
 ```

 Here we will set `cstdst` equal to a char cast version of `dst` and `cstsrc` equal to a char cast version of `src` .
 ```c
 void *memmove(void *dst, const void *src, size_t len)
 {
  char *cstdst;
  char *cstsrc;

  cstdst = (char *)dst;
  cstsrc = (char *)src;
 }
 ```
the next step is to build protection for my function, is just add own condition if `src` is `>` than `dst`.
 ```c
 void *memmove(void *dst, const void *src, size_t len)
 {
  char *cstdst;
  char *cstsrc;

  cstdst = (char *)dst;
  cstsrc = (char *)src;
  if (cstsrc > cstdst)
  {

  }
 }
 ```
Now we will specify what we will do if `(cstsrc > cstdst)` is `true`. if this condition is true we need to start `moving` our string from `src` to `dst`. so to moving a string from `src` to `dst` we need a loop Statment.  we will take `len` parameter as condition . if the `len--` is not equal to `'\0'` so we will execute our loop body.
 ```c 
 void *memmove(void *dst, const void *src, size_t len)
 {
  char *cstdst;
  char *cstsrc;

  cstdst = (char *)dst;
  cstsrc = (char *)src;
  if (cstsrc > cstdst)
  {
    while(len--)
    {
      //loop body
    }
  }
 }
 ``` 
 In the body loop we will start to move the current value pointed by the pointer `cststr` to `cstdst`.

 Note this : if you want increment or Decrement your pointer just remember this [Rules](../Res/Topic/Pointer_Incrementation.md); 
 ```c
  void *memmove(void *dst, const void *src, size_t len)
 {
  char *cstdst; 
  char *cstsrc;
  
  cstdst = (char *)dst;
  cstsrc = (char *)src;
  if(cstsrc > cstdst)
  {
    while(len--)
    {
      *(cstdst++) = *(cstsrc++);
    }
  }
 }
 ```
 So the `else` statement will be the cas normall or memmove() Function. so i will use loop statement and we will use the same condition of the old Loop to check if our `len` is not equal to `\0`. 

 ```c 
  void *memmove(void *str, int c, size_t n)
 {
  char *cstdst;
  char *cstsrc;

  csrdst = (char *)dst;
  cstsrc = (char *)src;
  if(cstsrc > cstdst)
    while(len--)
      *(cstdst++) = *(cstsrc++);
  else
    while(len--)
 }
 ```

Now we just move our Data from `*cstsrc` to `*cstdst` but we need to start from the last character: `*(cstdst + len)` and move it to `*(cstdst + len)`. 

 ```c 
  void *memmove(void *str, int c, size_t n)
 {
  char *cstdst;
  char *cstsrc;

  csrdst = (char *)dst;
  cstsrc = (char *)src;
  if(cstsrc > cstdst)
    while(len--)
      *(cstdst++) = *(cstsrc++);
  else
    while(len--)
    *(cstsrc + len) = *(cstsrc + len);
 }
 ```
 Now we just need to retrun (dst);

  ```c 
  void *memmove(void *str, int c, size_t n)
 {
  char *cstdst;
  char *cstsrc;

  csrdst = (char *)dst;
  cstsrc = (char *)src;
  if(cstsrc > cstdst)
    while(len--)
      *(cstdst++) = *(cstsrc++);
  else
    while(len--)
    *(cstsrc + len) = *(cstsrc + len);
 }
 return (dst);
 ```

# Main function 

We have many options to Use Main function and test our function but the simple way to do it is this: 

```c 
  void *memmove(void *str, int c, size_t n)
 {
  char *cstdst;
  char *cstsrc;

  csrdst = (char *)dst;
  cstsrc = (char *)src;
  if(cstsrc > cstdst)
    while(len--)
      *(cstdst++) = *(cstsrc++);
  else
    while(len--)
    *(cstsrc + len) = *(cstsrc + len);
  return (dst);
 }
 
int main(void)
{
  char src1[8] = "Abdellah";
  char dst1[8] = "Abde";
  ft_memmove(dst1, src1,8);
  printf("%s\n",dst1);
    return 0;
}
```

