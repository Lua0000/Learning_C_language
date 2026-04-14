#include <stdio.h>

struct car {
    char *name;
    float price;
    int speed;
};

struct car saturn = {"Saturn SL/2", 16000.99, 175};

int main(void){
    printf("Name:           %s\n", saturn.name);
    printf("Price (USD):    %f\n", saturn.price);
    printf("Top Speed (km): %d\n", saturn.speed);
}
