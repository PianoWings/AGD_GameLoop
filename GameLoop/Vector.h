#pragma once
#include <iostream>
#include <algorithm>
using namespace std;
class Vector {

private:
    float v_x;
    float v_y;

public:
    Vector(float x, float y) {
        v_x = x;
        v_y = y;
    }

    Vector() {
        v_x = 0.0f;
        v_y = 0.0f;
    }

    float x() {
        return v_x;
    }

    float y() {
        return v_y;
    }

    void add(float x, float y) {
        this->v_x = this->v_x + x;
        this->v_y = this->v_y + y;
    }

    void sub(float x, float y) {
        this->v_x = this->v_x - x;
        this->v_y = this->v_y - y;
    }

    void mult(float z) {
        this->v_x = this->v_x * z;
        this->v_y = this->v_y * z;

    }

    void div(float z) {
        this->v_x = this->v_x / z;
        this->v_y = this->v_y / z;
    }

    bool equality(float x, float y) {
        if (this->v_x == x && this->v_y == y)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool inequality(float x, float y) {
        if (this->v_x != x || this->v_y != y) {
            return true;
        }
        else 
        {
            return false;
        }
    }

    float magnitude()
    {
        return abs(sqrt(pow(this->v_x, 2.0f) + pow(this->v_y, 2.0f)));
    }

    Vector normalized()
    {
        this->v_x = this->v_x / magnitude();
        this->v_y = this->v_y / magnitude();
    }

    float euclidean(float x, float y)
    {
        return sqrt(pow(this->v_x - x, 2.0f) + pow(this->v_y - y, 2.0f));
    }

    float manhattan(float x, float y)
    {
        return abs(this->v_x - x) + abs(this->v_y - y);
    }

    float chebyshev(float x, float y)
    {
        return max(abs(this->v_x - x), abs(this->v_y - y));
    }

};