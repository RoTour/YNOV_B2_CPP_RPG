#include "attack.h"
#include "mage.h"

#include <QtDebug>

bool Mage::attack(Mage assaillant, Mage victim, Attack assaillantAction, Defense victimAction)
{

}

bool Mage::isAlive() const
{
    return health() > 0;
}

QString Mage::name() const
{
    return m_name;
}

void Mage::setName(const QString &name)
{
    m_name = name;
}

int Mage::level() const
{
    return m_level;
}

void Mage::setLevel(int level)
{
    m_level = level;
}

int Mage::health() const
{
    return m_health;
}

void Mage::setHealth(int health)
{
    m_health = health;
}

int Mage::mana() const
{
    return m_mana;
}

void Mage::setMana(int mana)
{
    m_mana = mana;
}

QString Mage::status() const
{
    return m_status;
}

void Mage::setStatus(const QString &status)
{
    m_status = status;
}
