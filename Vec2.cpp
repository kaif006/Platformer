#include <math.h>
#include "Vec2.hpp"

    Vec2::Vec2(){}

    Vec2::Vec2(int x, int y): x(x), y(y){}

    bool Vec2::operator == (const Vec2 & v2) const
    {
        return (x == v2.x && y == v2.y);
    }

    bool Vec2::operator != (const Vec2 & v2) const
    {
        return (x != v2.x && y != v2.y);
    }

    Vec2 Vec2::operator + (const Vec2 & v2) const
    {
        return Vec2(x + v2.x, y + v2.y);
    }
    Vec2 Vec2::operator - (const Vec2 & v2) const
    {
        return Vec2(x - v2.x, y - v2.y);
    }
    Vec2 Vec2::operator * (const float val) const
    {
        return Vec2(x * val, y * val);
    }
    Vec2 Vec2::operator / (const float val) const
    {
        return Vec2(x / val, y / val);
    }

    void Vec2::operator += (const Vec2 & v2)
    {
        x += v2.x;
        y += v2.y;
    }
    void Vec2::operator -= (const Vec2 & v2)
    {
        x -= v2.x;
        y -= v2.y;
    }
    void Vec2::operator *= (const float val)
    {
        x *= val;
        y *= val;
    }
    void Vec2::operator /= (const float val)
    {
        x /= val;
        y /= val;
    }

    float Vec2::dist(const Vec2 & v2) const
    {
        float dx = v2.x - x;
        float dy = v2.y - y;
        return sqrt(dx * dx + dy * dy);
    }

    float Vec2::getX() const
    {
        return x;
    }

    float Vec2::getY() const
    {
        return y;
    }

    void Vec2::setX(const float num)
    {
        x = num;
    }

    void Vec2::setY(const float num)
    {
        y = num;
    }


