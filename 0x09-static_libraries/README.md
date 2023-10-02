A static library is an “archive” containing the object files of different functions. The usual file extension is “.a”. Using libraries enable us to call functions without hard coding them inside the source code file as we can call a lot of different functions depending on the program we are creating.

How they work
When linking the static library, its content is put inside the executable file along the source code so that it has everything it needs during runtime. The content of the archive is indexed and the executable knows where to quickly find the right function.


The files are linked together into one file
How to create static libraries
Let’s imagine we want to create a library with two simple functions inside, one checks if the character is alphabetic while the other checks if the integer is even. First, we create a header file with the prototypes of our functions:


The content of the header file
After that, we create the source code files of the functions:


The _islpha function inside isalpha.c

The _iseven function inside iseven.c
Then we obtain the object files of our functions by stopping at the “assembly” step with: gcc -c *.c. By using “*.c”, all the “.c” files present in the current directory are processed at the same time.

Finally, we create the static library using: ar rcs libname.a *.o

ar: create, modify, and extract from archives
r: Insert the files member... into archive (with replacement)
c: Create the archive
s: Add an index to the archive, or update it if it already exists
We can also use the “r” and “c” flags without the “s” one and then index the archive by using ranlib libname.a. This version is more common than using “rcs” together directly. We can look at the function stored inside the library by using ar -t libname.a.

ar: create, modify, and extract from archives
t: Display a table listing the contents of archive, or those of the files listed in member... that are present in the archive
It’s also possible to look at the indexation with nm libname.a.

nm: list symbols from object files

Creation of the archive
How to use them
Let’s create a simple program that will call both of the functions:


The main.c file calling both functions
When we compile our source code file with GCC, we link the library to the file by using the command gcc file.c -L. -lname.

gcc: GNU project C and C++ compiler
-Ldir: Add directory dir to the list of directories to be searched for -l. Here dir is "." (current directory)
-lname: link with a library. The "lib" at the beginning of the name and the extension are omitted

The library and the code file combined into an executable
Static libraries are as simple as that to use! If we were to modify our functions or wanted to add more to the archive, the whole process must be repeated.

Conclusion
A static library is an archive of object files
It’s created by using ar
The indexation is done either by ar rcs during the creation or ranlib
nm is used to see the indexation symbols
To link the library to the “.c” file -Ldir and -lname are used with GCC

