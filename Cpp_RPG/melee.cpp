#include "melee.h"

Melee::Melee() : Attack(5, 0, 0, 0, "")
{

}

Fireball::Fireball() : Attack(0, 5, 0, 0, "")
{

}

IcedArrow::IcedArrow() : Attack(0, 0, 5, 0, "frozen")
{

}

WindBlade::WindBlade() : Attack(0, 0, 0, 5, "")
{

}
