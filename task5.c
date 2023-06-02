#include <stdio.h>

struct Car {
    char brand[50];
    int year;
    float price;
};
int sumCarPrice(struct Car *cars, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (cars + i)->price;
    }
    return sum;
}
int main() {
    struct Car cars[3];
    int size = sizeof(cars) / sizeof(cars[0]);
    strcpy(cars[0].brand, "BMV");
    cars[0].year = 2022;
    cars[0].price = 5490000.0;
    strcpy(cars[1].brand, "Mercedec");
    cars[1].year = 2021;
    cars[1].price = 3900000.0;
    strcpy(cars[2].brand, "Lamborgini");
    cars[2].year = 2019;
    cars[2].price = 25999000.0;
    int totalPrice = sumCarPrice(cars, size);
    printf("%d\n", totalPrice);
    return 0;
}

