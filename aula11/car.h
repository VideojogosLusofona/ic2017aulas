#ifndef CAR_H
#define CAR_H

typedef enum { GASOLINE, DIESEL } FUEL;

typedef struct {
    FUEL fuel_type;
    int cc;
    float weight;
    float speed;
} CAR;

CAR *car_new(FUEL ftype, int cc, float w);
void car_destroy(CAR *car);

void car_accelerate(CAR *car, float percent, float seconds);
void car_break(CAR *car, float percent, float seconds);
float car_get_speed(CAR *car);

#endif
