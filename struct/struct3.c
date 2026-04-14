#include <stdio.h>
struct car {
    char *name;
    float price;
    int speed;
};
void set_price(struct car *c, float new_price)
{
    c->price = new_price;
}
int main(void)
{
    struct car civic = {.speed = 200, .name = "Honda Civic 2009"};
    set_price(&civic, 799.99);
    printf("Price: %f\n", civic.price);
}
