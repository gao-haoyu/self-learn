## Chapter1 Basic Concept of programming
### 1.1 Program && Program Language
program is a set of instructions, it usually includes input, output, operator, loop, etc.
|type|example language|example statement|
|--|--|--|
|high-level language | C language / C++ / Golang / Java | a = b+1|
|low-level language | Assemble language  | mov -0xc(%ebp),%eax <br />add $0x1,%eax<br />mov %eax,-0x8(%ebp) |
|low-level language | Machine Language | 8b 45 f4 <br />83 c0 01 <br />89 45 f8 |

source code   --------> executable file

![image-20231025220931862](D:\code\self-learn\linux_c\images\fig1.1_compiler_exec)

fig1.1 progress of compiler executable

![image-20231025221351437](D:\code\self-learn\linux_c\images\fig1.2_interpreter_exec)

fig1.2 progress of interpreter executable

### 1.2&1.3 natural language, formal language, debug
- natural language : language for life,which is usually developed with long time, such as english, chinese ......
- formal language : language for some specfic application,such as c , c++, java ......
- debug : find the bug and try to fix in code.
for compiler language ,there are three kinds of errors
- compiler error
- running error
- logic error
for interpreter language, it won't have compiler error type.

### 1.4 hello world
we will not show you the basic source code and just print the "hello world". In fact, we try to create the engineer product, which follows more standards. In engineer product, we should at least have two parts, source code and makefile file. For some library, install and run shell file is also necessary.  
#### 1.4.1 source code
```c
#include<stdio.h>

int main() {
    printf("Hello,World!\n");
    //printf(1);
    return 0;
}
```
```shell
#with printf(1),the gcc info as following:
$ gcc -Wall 01_hello_world.c 
01_hello_world.c: In function ‘main’:
01_hello_world.c:7:12: warning: passing argument 1 of ‘printf’ makes pointer from integer without a cast [-Wint-conversion]
    7 |     printf(1);
      |            ^
      |            |
      |            int
In file included from 01_hello_world.c:1:
/usr/include/stdio.h:356:43: note: expected ‘const char * restrict’ but argument is of type ‘int’
  356 | extern int printf (const char *__restrict __format, ...);
      |                    ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~
01_hello_world.c:7:5: warning: format not a string literal and no format arguments [-Wformat-security]
    7 |     printf(1);
      |     ^~~~~~
```
#### 1.4.2 compiler and run command
- compiler with basic args
```shell
$ gcc $code_file # you will get the a.out file, it's a default file.
$ ./a.out # exec the file, you will see the output context
Hello,World!
```
- compiler with specific args
```shell
# -Wall : print all warning infos.
$ gcc -Wall 01_hello_world.c 
# -o : use it to define the output file name.
$ gcc -Wall 01_hello_world.c -o hw
$ ls
01_hello_world.c  a.out  hw
$ ./hw
Hello,World!
```
#### 1.4.3 makefile and shell file
what's the makefile? how to use it?
- Simplely define, it's a set of build and run command. It can help to easily run code. 
- Creat the Makefile and define the make command.
```makefile

```