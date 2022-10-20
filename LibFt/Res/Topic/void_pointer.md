# Void Pointer

A void pointer is a special pointer that can point to object of any type. A void pointer is type less ponter also known as generic pointer is an approach towards generic functions and generic programming in C. 

Note: Writing programs without being constrained by data type is know as `generic programming`. A generic function is a special function that `focuses on logic without confining to data type`. for example, logic to insert values in array is common for all types and hence can be transformed to generic function.
so as we know a void pointer is a pointer that has no associated data type with it. A void pointer can hold address of any data type and can be [typecasted](../Topic/type_casting.md) to any type.

## Syntax : 

```c
void * pointer_name;
```

## Example :

```c 
int a = 25;
char b = 'A';
void *p;
p = &a; // here this pointer pointe to int 
p = &b; // here this pointer pointe to char
```

## Advantages of void pointer: 

1. malloc() and calloc() return void * type and this allows these functions to be used to allocated memory of any data type (just because of void*).

2. void pointer cannot be dereferenced.
```c
#include <stdio.h>

int main()
{
    int a = 10;
    void *ptr = &a; 
    printf("%d",*ptr);
    return 0;
}
```
this program doesn't compile and the output be like this : 

```
Compiler Error: 'void*' is not a pointer-to-object type
```

Derefrencing is the procress of retrieving data from memory location pointed by a pointer. it's converts bock of raw memory bytes to a meaningful data (data is meningful if type os associated)

While dereferencing a `void` pointer, the C compuler does not have any clue about type of value pointed by the `void` pointer. Hence, dereferencing a `void` pointer is illegal in C ❌. But a pointer will become useless if you cannot dereference it back.

so to derefernce a void pointer we need to [typecast](../Topic/type_casting.md) to a valid pointer type.


### Example: 

```c 
#include <stdio.h>
int main()
{
    int num = 10; 
    void * p = &num; // void pointer pointing at num 

    int dp = *((int *s)p) // Here is dereferencing void Pointer.
}
```