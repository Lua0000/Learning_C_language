#include <stdio.h>

void Print(int Number, int *pointer);
void Update(int *New_pointer);

int main(void){

    int Number = 15;
    int *pointer = &Number;
    Print(Number, pointer);
    Update(&Number);
    Print(Number, pointer);
    return 0;
}


void Print(int Number, int *pointer){
    printf("-----------------------------------------------------\n");
    printf(" >Number Variable valour -> %d\n", Number);
    printf(" >Number Variable Address -> %p\n", &Number);
    printf(" >Variable Number printed by Pointer %d\n", *pointer);
    printf(" >Variable Address printed by Pointer %p\n", pointer);
    printf(" >Pointer Address Is -> %p\n", &pointer);

}

void Update(int *New_pointer)
{
    *New_pointer = *New_pointer + 1;
}
