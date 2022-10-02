# **0x09. C - Static libraries**

## **Description**

I've learned what static library is, how to create one, and how to use it.

>Static library is a collections of object files that are linked into the program during the linking phase of compilation, and are not relevant during runtime. [learn more here](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)





This directory contains test file, header file, archive (the `.a`) file and a script.



* [test](https://github.com/Bantamlak12/alx-low_level_programming/tree/master/0x09-static_libraries/test) - is a directory that contains a  `main.c` file provided by ALX Africa partnership with Holberton School to test a `C` task in this project.



* [main.h](https://github.com/Bantamlak12/alx-low_level_programming/blob/master/0x09-static_libraries/main.h) - is a header file that contains the following prototypes.



    ```

        int _putchar(char c);

        int _islower(int c);

        int _isalpha(int c);

        int _abs(int n);

        int _isupper(int c);

        int _isdigit(int c);

        int _strlen(char *s);

        void _puts(char *s);

        char *_strcpy(char *dest, char *src);

        int _atoi(char *s);

        char *_strcat(char *dest, char *src);

        char *_strncat(char *dest, char *src, int n);

        char *_strncpy(char *dest, char *src, int n);

        int _strcmp(char *s1, char *s2);

        char *_memset(char *s, char b, unsigned int n);

        char *_memcpy(char *dest, char *src, unsigned int n);

        char *_strchr(char *s, char c);

        unsigned int _strspn(char *s, char *accept);

        char *_strpbrk(char *s, char *accept);

        char *_strstr(char *haystack, char *needle);

    ```





## Usage



`ar`, `ranlib`, and `nm` are the basic commands used for this project.



* [libmy.a](https://github.com/Bantamlak12/alx-low_level_programming/blob/master/0x09-static_libraries/libmy.a) - this file is archive, a static library. Different `.c` files with the above functions are wrapped up as`.o` ( objects ) files. so it's easier to share the codes between projectes. Let's see how to make a static library.

    * **How do I create a static library ?**



        1. ` gcc -c *.c` - This step compiles all the `.c` files and a `.o` object files are then created.



        1. `ar rc libmy.a *.o` - `ar` stands for archiver, it creates a static library and then add all the object files into it. The `r` flag tells `ar` if the `.a` file is already exist it will then update the entire object files within it. The `c` flag tells the `ar` to create a library if it doesn't exist.



        1. `ranlib libmy.a` - There is a need to indext the archiver after its creation to speed up symbols looking up during compilation.

        1. `ar -t libmy.a` - To see all the created object files

        1. `nm libmy.a` - The nm command lists the names that are stored inside the archive.



* [create_static_lib.sh](https://github.com/Bantamlak12/alx-low_level_programming/blob/master/0x09-static_libraries/create_static_lib.sh) - a bash script that can create a static library. The above procedures are used to create one.
