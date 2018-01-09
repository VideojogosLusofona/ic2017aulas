#include "car.h"
#include <stdio.h>

int main() {

    CAR *car1, *car2;

    car1 = car_new(GASOLINE, 1100, 2000.0);
    car2 = car_new(DIESEL, 1900, 2350.5);

    car_accelerate(car1, 0.5, 5);
    car_accelerate(car2, 0.25, 4);

    printf("Car 1 speed: %f\n", car_get_speed(car1));
    printf("Car 2 speed: %f\n", car_get_speed(car2));

    car_destroy(car1);
    car_destroy(car2);

    return 0;
}
