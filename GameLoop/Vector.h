#pragma once
#include <iostream>
#include <algorithm>

// <FEEDBACK> Don't use this in the global scope in a header file, it's dangerous.
// Read more about this: https://stackoverflow.com/questions/1452721/why-is-using-namespace-std-considered-bad-practice
// Use std::cout and std::endl.
using namespace std;
class Vector {

private:
    float v_x;
    float v_y;

public:
    // <FEEDBACK> Use intializers list for this constructor
    Vector(float x, float y) {
        v_x = x;
        v_y = y;
    }

    // <FEEDBACK> Use intializers list for this constructor
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
        // <FEEDBACK> You don't need to use this->pos_x and this->pos_y (use pos_x/pos_y directly). 
        // It makes the code unnecessarily more verbose.
        // Apply this to all functions below
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

    // <FEEDBACK> Check the spelling of your functions (it's "equal", not "euqal").
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

    // <FEEDBACK> Check the spelling of your functions (it's "unequal", not "uneuqal").
    // Optimization: you can actually return !equal(x,y), to avoid implementing the same logic twice.
    // (imagine that in the future you change what "equals" mean, you'd have to change this too).
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
        // <FEEDBACK> You don't need to call magnitude() twice. That makes the same operation, returning the same result, twice.
        // It it's expensive, you are doing the expensive twice for no reason. Call once and store result in a local variable.
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