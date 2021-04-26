#include "defense.h"

int Defense::getPhysicalDamageReduction() const
{
    return PhysicalDamageReduction;
}

void Defense::setPhysicalDamageReduction(int value)
{
    PhysicalDamageReduction = value;
}

int Defense::getFireDamageReduction() const
{
    return FireDamageReduction;
}

void Defense::setFireDamageReduction(int value)
{
    FireDamageReduction = value;
}

int Defense::getIceDamageReduction() const
{
    return IceDamageReduction;
}

void Defense::setIceDamageReduction(int value)
{
    IceDamageReduction = value;
}

int Defense::getWindDamageReduction() const
{
    return WindDamageReduction;
}

void Defense::setWindDamageReduction(int value)
{
    WindDamageReduction = value;
}

Defense::Defense(int phDmgRed, int fireDmgRed, int iceDmgRed, int windDmgRed)
    : PhysicalDamageReduction(phDmgRed), FireDamageReduction(fireDmgRed), IceDamageReduction(iceDmgRed), WindDamageReduction(windDmgRed)
{

}
