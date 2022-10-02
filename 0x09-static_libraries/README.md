# **Static Libraries**

## **Description**

Static libraries are a collections of object files that are linked into the program during the linking phase of compilation, and are not relevant during runtime once the excutable file is created. [click the link to learn more](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)



This directory contains header file, archive (the '.a') file and a script for the static library project. Let's see what each projects do:



## *_main.h_*
Is a header file that contains the following list of prototypes.

**Prototypes**|
---

int _putchar(char c);

int _islower(int c);|

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

<<<<<<< HEAD


=======


>>>>>>> 40b7c06c7609da79d016140194a96b82e9bd88e6
## **libmy.a**

<p>This file is archive, a static library. Different '.c' files with the above functions are wrapped up as an object '.o' files. so it's easier to share the codes between projectes. Let's see how to make a static library</p>



#### How do I create a static library ?

1. **gcc** **-c** ***.c**

* This step compiles all the '.c' files and an object '.o' files are then created.

2. **ar** **rc** **libmy.a** ***.o**

* 'ar' stands for archiver, it creates a static library and then add all the object files within it. The 'r' flag tells 'ar' if the .a file is already exist it will then update the entire object files within it. The 'c' flag tells the 'ar' to create a library if it doesn't exist.

3. **ranlib** **libmy.a**

* There is a need to indext the archiver after its creation to speed up symbols looking up during compilation.

4. **ar** **-t** **libmy.a**

* To see all the created object files

5. **nm** **libmy.a**

* The nm command lists the names that are stored

inside the archive. as seen below.

## **create_static_lib.sh**

A script that can create a static library. The above procedure is use to create it.
