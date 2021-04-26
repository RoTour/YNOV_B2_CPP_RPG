#ifndef MELEE_H
#define MELEE_H

#include "attack.h"

class Melee : public Attack
{
    
public:
    Melee();
};

class Fireball : public Attack
{
public:
    Fireball();
};

class IcedArrow : public Attack
{
public:
    IcedArrow();
};

class WindBlade : public Attack
{
public:
    WindBlade();
};






#endif // MELEE_H
