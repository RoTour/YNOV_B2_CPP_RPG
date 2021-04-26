#include "attack.h"

int Attack::PhysicalDmg() const
{
    return m_PhysicalDmg;
}

void Attack::setPhysicalDmg(int PhysicalDmg)
{
    m_PhysicalDmg = PhysicalDmg;
}

int Attack::FireDmg() const
{
    return m_FireDmg;
}

void Attack::setFireDmg(int FireDmg)
{
    m_FireDmg = FireDmg;
}

int Attack::IceDmg() const
{
    return m_IceDmg;
}

void Attack::setIceDmg(int IceDmg)
{
    m_IceDmg = IceDmg;
}

int Attack::WindDmg() const
{
    return m_WindDmg;
}

void Attack::setWindDmg(int WindDmg)
{
    m_WindDmg = WindDmg;
}

Attack::Attack()
{

}
