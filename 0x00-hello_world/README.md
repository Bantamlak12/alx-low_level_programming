# Project: 0x00. C - Hello, World

## Resources

#### Read or watch:

- [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie)
- [“C” Programming Language: Brian Kernighan](https://www.youtube.com/watch?v=de2Hsvxaf8M&ab_channel=Computerphile)
- [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA&ab_channel=HowTo)
- [Betty Coding Style](https://github.com/alx-tools/Betty/wiki)
- [Hash-bang under the hood](https://twitter.com/unix_byte/status/1024147947393495040?s=21)
- [Linus Torvalds on C vs. C++](https://harmful.cat-v.org/software/c++/linus)

#### man or help:

- gcc
- printf (3)
- puts
- putchar

## Learning Objectives

### General

- Why C programming is awesome
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
- What happens when you type gcc main.c
- What is an entry point
- What is main
- How to print text using printf, puts and putchar
- How to get the size of a specific type using the unary operator sizeof
- How to compile using gcc
- What is the default program name when compiling with gcc
- What is the official C coding style and how to check your code with betty-style
- How to find the right header to include in your source code when using a standard library function
- How does the main function influence the return value of the program

## Betty linter

To run the Betty linter just with command `betty <filename>`:

- Go to the [Betty](https://github.com/alx-tools/Betty) repository
- Clone the `repo` to your local machine
- `cd` into the Betty directory
- Install the linter with `sudo ./install.sh`
- `emacs` or `vi` a new file called `betty`, and copy the script below:

```
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```

- Once saved, exit file and change permissions to apply to all users with `chmod a+x betty`
- Move the `betty` file into `/bin/` directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`

You can now type betty <filename> to run the Betty linter!

## Tasks

| Task                                                                                                     | File                               |
| -------------------------------------------------------------------------------------------------------- | ---------------------------------- |
| 0. Preprocessor                                                                                          | [0-preprocessor](./0-preprocessor) |
| 1. Compiler                                                                                              | [1-compiler](./1-compiler)         |
| 2. Assembler                                                                                             | [2-assembler](./2-assembler)       |
| 3. Name                                                                                                  | [3-name](./3-name)                 |
| 4. Hello, puts                                                                                           | [4-puts.c](./4-puts.c)             |
| 5. Hello, printf                                                                                         | [5-printf.c](./5-printf.c)         |
| 6. Size is not grandeur, and territory does not make a nation                                            | [6-size.c](./6-size.c)             |
| 7. Intel                                                                                                 | [100-intel](./100-intel)           |
| 8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity | [101-quote.c](./101-quote.c)       |
