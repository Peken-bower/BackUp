**Libft**
* [What is Libft?](#What-is-Libft)
* [What's in it ?](#whats-in-it)
* [How does it Work?]()
* [How do I use the library?]()
* [Example usage]()

# What is Libft ?
[Libft](https://github.com/Peken-bower/LibFt/blob/main/Res/Project/fr.subject.pdf) is the first Project at [42 Network](https://www.42network.org/) , in this Lib we will create some standard C library function including some additional ones that can be used later to build a library of useful function for the rest of program . 

We re-create this function in order to deepen our understanding of C . this philosophy is the best to fully understand that machine that you're using and how it all works together . As a result , we avoid treating even these basic functions as black-boxes. 

# What's in it ? 
As you can see from the Project of libft . there are 4 sections ;
 1. **Libc functions** Some of the standard C functions .
 2. **Additional functions** This Function will be useful for later project .
 3. **Bonus Functions** This Function we will used in Linked List .
 
|Libc functions | Additional functions | Bonus Functions |
|----------- |----------- | -----------|
| isalpha		| putchar_fd| lstnew	    |
| isdigit       | putstr_fd	| lstadd_front	|
| isalum		| putnbr_fd	| lstsize	    | 
| isprint		| putendl_fd| lstlast	    |
| isascii		| strjoin	| lstadd_back   | 
| tolower		| split	    | lstdelone     |
| toupper		| itoa	    | lstclear      |
| bzero		    | strmapi	| lstiter       | 
| memset		| striteri	| lstmap        | 
| memcpy		| strtrim	|	|
| memmove		| substr	|	|
| memchar		| 	        |	|
| memcmp        |           |   |
| strlen		|        	|	|
| strlcpy		|         	|	|
| strlcat		|        	|	|
| strchar		|       	|	|
| strrchar		|       	|	|
| strncmp		|        	|	|
| strnstr	    |        	| 	|
| atoi	        |       	|	|
| calloc		|        	|	|
| strdup		|       	|	|

Notes :  
- All the files and functions are namespaced with an **ft_** in front . It strands for Fourty two 
- The project instructions require that we put all the source files in the root directory . 

### How does it work? 

the goal is to create a library called libft.a from the source files so I can later use that library from my other projects . 
The create that Library , after cloning this project , **cd** to folder of this projec5t and call make : 
```shell
git clone git@github.com:Peken-bower/LibFt.git
cd LibFt
make
```
You should see a *libft.a* file and some object files (*.o). 
Now to clean up (remove this .o files) , Call `make clean`.

### How do I use the library? 

When compiling , you have to tell the file where your library resides and which library it is using: 
```shell
gcc -L. -lft -o nameofbinary.out nameofSource.c
```
-L takes the path to your library. `.` in this case<br>
-l takes the name of your library. This is the set of characters that come after `lib` in your library name. 

That's it . Now run it using `./nameofbinary.out`

### Example usage 

this is a list of my project that use Libft extensivly : 

* [get the next line]()

### Board of project : 

i use Trello Board to Manage all the task of this project check [here](https://trello.com/b/ZkZv5Lcq).
