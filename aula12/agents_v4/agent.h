#ifndef AGENT_H
#define AGENT_H

typedef enum {
    NO_ONE = 0,
    POLICE,
    THIEF,
    KILLER,
    VICTIM
} AGENT_TYPE;

typedef struct {
    AGENT_TYPE type;
    unsigned int ID;
    double energy;
} AGENT;

AGENT *agent_new(AGENT_TYPE type, unsigned int ID, double initial_energy);
void agent_destroy(AGENT *agent);

#endif
