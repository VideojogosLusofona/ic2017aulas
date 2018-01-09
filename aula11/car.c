#include "car.h"
#include <stdlib.h>

CAR *car_new(FUEL ftype, int cc, float w) {
    CAR *car = (CAR *) malloc(sizeof(CAR));
    car->fuel_type = ftype;
    car->cc = cc;
    car->weight = w;
    car->speed = 0;
    return car;
}

void car_destroy(CAR *car) {
    free(car);
}

void car_accelerate(CAR *car, float percent, float seconds) {
    car->speed += (car->cc / 500.0) * (10000.0 / car->weight) * percent * seconds;
}

void car_break(CAR *car, float percent, float seconds) {
    car->speed -= (10000.0 / car->weight) * percent * seconds;
    if (car->speed < 0) car->speed = 0;
}

float car_get_speed(CAR *car) {
    return car->speed;
}

