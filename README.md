# _printf

**_printf** is a function of the C language that allows texts of various types to be printed on the screen, fearing that in the beginning the text is placed between quotation marks and to specify the insertion point of the variable an indicator of% and the type of varible to show, as can be seen in the table.

**Format specifier**
Each of the variables represented in % will search for its corresponding variable or constant inscribed in the final list of the function, as described in the example:


```sh
Code: printf("color %s, number %d", "red", 1234567)
 - output:  Color red, Number 1234567.
```

note the format parameters that can be used

```sh
FORMAT =>	REPLACED
%i => replaced an integer variable
%d => repalced an decimal base 10
%c => replaced an character variable
%s => replaced a pointer char variable
%% => replaced by a single percent symbol
```


# Files
```sh
check_type.c
holberton.h
man_3_printf
print_c.c
print_di.c
_printf.c
print_number.c
print_s.c
_putchar.c
README.md
```

## Use _printf
First download the files or the repository with the clone or download button and attach the files to your project.

where you need it in your project, write _printf followed by opening parentheses, to indicate the function, then put the text to display in quotation marks (""), note that where a variable must be presented, the flag corresponding to the data you want to display must be placed, example % i to display integer numeric data. after the closing of quotation marks you must in the same order of the flags placed in the text the constants and / or variables that you need for the printing of the information.

### Compilation
Compilation with the following gcc is suggested:
```sh
gcc -Wall -Werror -Wextra -pedantic *.c
```
do not forget that after compiling it must be executed with
```sh
./a.out
```
which is obtained when compiling giving its generic executable file name

## Diagrams

Diagram _printf
https://drive.google.com/file/d/10Mrp-Kb_cqe_X_Lad57T8koYHkeYr7dJ/view?usp=sharing

Diagram check_type https://drive.google.com/file/d/17zgquaDk3QOPwyYOVWqJsgFr-jG6AXme/view?usp=sharing
