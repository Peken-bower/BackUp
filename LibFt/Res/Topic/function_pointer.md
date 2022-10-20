# Function pointer

Function pointer is a special pointer that points to a function. yes a pointer can point to any object in C. Instead pointing at variable, a function pointer points at executable code.

we use function pointer to call a function or to pass reference of a function to another function which means you can pass a function to another function (using function pointers).

### Syntax 

```c 
return-type (* function_pointer_name)(parameter_list_type)
```

### Parameters : 

- return-type :  Return type of a function.
- function-pointer_name : Valid C identifier that specifies name of function pointer.
- parameter_list_type : list of parameter types the function accepts.

### How to declare function pointer? 

```c 
int (* fp) (int a, int b);
```
OR 

```c 
int *fp (int a, int b);
```
the above statement declares a function pointer (fp). it can point to all funcitions whose return type is int and accepts two integer parameters.



