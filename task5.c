#include <stdio.h>

struct Car {
    char* brand;
    char* model;
    int price;
};

struct Car* maxCarPrice(struct Car cars[], int n) {
    int max = cars[0].price;
    struct Car *index = &cars[0];
    for (int i = 1; i < n; i++) {
        if (max < cars[i].price) {
            max = cars[i].price;
            index = &cars[i];
        }
    }
    return index;
}

int main() {
    struct Car cars[3] = {{"BMW", "X5", 1800000}, {"Ferrari", "F40", 2350000}, {"Lada", "Priora", 215000}}; 
    int n = 3;
    struct Car* Car_max = maxCarPrice(cars, n);
    printf("Бренд=%s\nМодель=%s\nЦена=%d\n", Car_max->brand, Car_max->model, Car_max->price);
    return 0;
}
