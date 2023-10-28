## Chapter2 Constant, Variable, Assignment,Expression
### 2.1 Hello World Pro
- more flexible comment
```c
int main() {
    // comment in single line
    /*
    comment cross line
    */
   return 0;
}
```
- Escape Sequence

![image-20231028224425736](D:\code\self-learn\linux_c\images\fig2.1_escape_sequence)

### 2.2 Constant
- character constant
- number constant
- enum constant
let's finish a format string output with printf
```c
#include <stdio.h>

void printfSpecial() {
    printf("i can print %%\n");
    return;
}

int main() {
    printf("char: %c\nint: %d\nfloat: %f\n",'a',12,3.4);
    printfSpecial();
    return 0;
}
```
- result
```shell
char: a
int: 12
float: 3.400000
i can print %
```

### 2.3&2.4 Variable && assignment
- Declaration Example
```c
char firstletter;
char lastletter;
int hour;
int minute;
```
- Definition Example
```c
char firstletter = 'a';
char lastletter  = 'z';
int hour = 10;
int minute = 30;
```
Declaration doesn't assign memory to the var. 
Definition will assign that. 

### 2.5 expression
- expression is combined by values and operators.
just show the codes.
```c
void expressExample() {
    int hour = 10;
    int minute = 30;
    int totalMinutes = hour*60 + minute;
    printf("all minutes is %d\n", totalMinutes);
    return;
}
```
- floor && ceiling case
```c
#include <math.h>
//we can use floor && ceil function
//create our own function
#include <stdio.h>
#include <math.h>
void printfSpecial() {
    printf("i can print %%\n");
    return;
}

void expressExample() {
    int hour = 10;
    int minute = 30;
    int totalMinutes = hour*60 + minute;
    printf("all minutes is %d\n", totalMinutes);
    return;
}

int myFloor(double x) {
    if (x > 0) {
        return (int)x;
    } else {
        return (int)x-1;
    }
}

int myCeil(double x) {
    if (x > 0) {
        return (int)x+1;
    } else {
        return (int)x;
    }
}

void floorCeilExample() {
    double money = 18;
    double number = 4;
    double price = money/number;
    int priceFloor = floor(price);
    int priceCeil  = ceil(price);
    printf("Floor Price : %d\nCeil Price : %d\n", priceFloor, priceCeil);
    printf("negative floor response : %f\n", floor(-3.3));
    printf("negative my floor response : %d\n", myFloor(-3.3));
    printf("negative ceil response : %f\n", ceil(-3.3));
    printf("negative my ceil response : %d\n", myCeil(-3.3));
} 

int main() {
    printf("char: %c\nint: %d\nfloat: %f\n",'a',12,3.4);
    printfSpecial();
    expressExample();
    floorCeilExample();
    return 0;
}
```
- result 
**Tips: we use the <math.h>, so we should add the -lm option to ensure the compiler as following**
```makefile
all:
	$(CC) -o $(TARGET) $(SRC) -lm
```
```shell
$ make run
./format
char: a
int: 12
float: 3.400000
i can print %
all minutes is 630
Floor Price : 4
Ceil Price : 5
negative floor response : -4.000000
negative my floor response : -4
negative ceil response : -3.000000
negative my ceil response : -3
```