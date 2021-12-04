# Simple_Shell Project

![image](https://github.com/mcarrascopiaggio/simple_shell/blob/master/images/simple_shell.png)

We are Software Engineer students at  [Holberton School](https://www.holbertonschool.com/) and at the close of our first trimester we have to develop our own simple shell in c language.

![GitHub last commit](https://img.shields.io/github/last-commit/mcarrascopiaggio/simple_shell)
![GitHub code size in bytes](https://img.shields.io/github/languages/code-size/mcarrascopiaggio/simple_shell)
![Lines of code](https://img.shields.io/tokei/lines/github/mcarrascopiaggio/simple_shell)


## Project scope
- UNIX command line interpreter in interactive and non interactive mode.
- Handle command lines with arguments
- Handle the PATH
- Implement the exit built-in
- Implement the env built-in
- Handle Ctrl+C
- Implement the builtin command cd
- Implement the help built-in

## General Requirements
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- Code should use the Betty style. 
- The shell should not have any memory leaks
- No more than 5 functions per file
- Use system calls only when is needed to.

## Program flow
![image](https://github.com/mcarrascopiaggio/simple_shell/blob/main/images/flow_chart.png)

## File Structure
#### Header
In the header you can find, on one hand all the libraries used, as well as the prototype of all the functions developed for the purpose of this project. And on the other hand you can find the declaration of the used environment variables and the data structures  ​

#### Main
​Here is the core code of the project.

#### Auxiliary functions 
In these files you will find the developed functions linked to the critical processes of the program. These will be called by the main.c.
#### Builting functions
In this section are the functions developed for the implementation of the builtin specified in the scope section.
#### String functions

The list of functions allowed for use in the project left out many functions for handling strings that we need to use for the development of the functions mentioned above. In this section are the same.
## Compilation

This shell was compiled this way:

```sh
gcc -g -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```


---
#### Authors: 
@ [Eric Altez](https://github.com/EricAltez) &  [Marcela Carrasco](https://github.com/mcarrascopiaggio)
