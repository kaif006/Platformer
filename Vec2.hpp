#pragma once
#include <math.h>

class Vec2
{
private:
    float x = 0;
    float y = 0;
public:
    Vec2();
    Vec2(int x, int y);

    bool operator == (const Vec2 & v2) const;

    bool operator != (const Vec2 & v2) const;
    Vec2 operator + (const Vec2 & v2) const;
    Vec2 operator - (const Vec2 & v2) const;
    Vec2 operator * (const float val) const;
    Vec2 operator / (const float val) const;

    void operator += (const Vec2 & v2);
    void operator -= (const Vec2 & v2);
    void operator *= (const float val);
    void operator /= (const float val);

    float dist(const Vec2 & v2) const; 

    float getX() const;
    float getY() const;
    void setX(const float num);
    void setY(const float num);
};