#ifndef DEFENSES_H
#define DEFENSES_H

#include "defense.h"

class Parade : public Defense {
public:
    Parade();
};

class WaterWall: public Defense {
public:
    WaterWall();
};

class FireWall : public Defense {
public:
    FireWall();
};

class WindShield : public Defense {
public:
    WindShield();
};

#endif // DEFENSES_H
