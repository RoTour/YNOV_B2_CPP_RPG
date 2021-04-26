#ifndef ATTACK_H
#define ATTACK_H

#include "QString"
#include "actions.h"

class Attack : public Actions
{
    int m_PhysicalDmg;
    int m_FireDmg;
    int m_IceDmg;
    int m_WindDmg;
    QString NewStatus = "";

public:
    Attack();

    int PhysicalDmg() const;
    void setPhysicalDmg(int PhysicalDmg);
    int FireDmg() const;
    void setFireDmg(int FireDmg);
    int IceDmg() const;
    void setIceDmg(int IceDmg);
    int WindDmg() const;
    void setWindDmg(int WindDmg);
    QString getNewStatus() const;
    void setNewStatus(const QString &value);
};

#endif // ATTACK_H
