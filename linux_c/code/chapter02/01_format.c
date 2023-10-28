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