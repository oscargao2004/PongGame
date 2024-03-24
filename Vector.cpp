#include "Vector.h"

Vector Vector::add(Vector vec)
{
    return Vector(x + vec.x, y + vec.y);
}

Vector Vector::subtract(Vector vec)
{
    return Vector(x - vec.x, y - vec.y);
}

bool Vector::isEqual(Vector vec)
{
    if (x == vec.x && y == vec.y)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Vector::magnitude()
{
    return _gridLength;
}

Vector Vector::up()
{
    return Vector(0,1);
}

Vector Vector::down()
{
    return Vector(0,-1);
}

Vector Vector::right()
{
    return Vector(1,0);
}

Vector Vector::left()
{
    return Vector(-1,0);
}
