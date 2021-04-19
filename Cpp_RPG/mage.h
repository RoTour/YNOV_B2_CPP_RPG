#ifndef MAGE_H
#define MAGE_H

#include "action.h"

#include <QMap>
#include <QString>
#include <QVector>

class Mage
{
private:

    QString m_name;
    int m_level;
    int m_maxHealth;
    int m_health;
    int m_maxMana;
    int m_mana;
    QString m_status;

public:
    static bool attack(Mage assaillant, Mage victim, Attack assaillantAction, Defense victimAction);

    QString name() const;
    void setName(const QString &name);

    int level() const;
    void setLevel(int level);

    int health() const;
    void setHealth(int health);

    int mana() const;
    void setMana(int mana);

    QString status() const;
    void setStatus(const QString &status);
};

#endif // MAGE_H
