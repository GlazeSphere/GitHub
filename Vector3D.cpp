#include "Vector3D.hpp"
#include <cmath>
#include <iomanip> 
#include <iostream>

/**
* @pre: None
* @param: None
* @post: Initializes x_, y_, and z_ to 0.0.
*/
Vector3D::Vector3D() { 
  x_ = 0.0;
  y_ = 0.0;
  z_ = 0.0;
}

/**
* @pre: None
* @param x: The value to set for x_ component.
* @param y: The value to set for y_ component.
* @param z: The value to set for z_ component.
* @post: Initializes x_, y_, and z_ to the provided values.
*/
Vector3D::Vector3D(double x, double y, double z) { 
  x_ = x;
  y_ = y;
  z_ = z;
}

/**
* @pre: None
* @param: None
* @post: return the value of the x_ component.
*/
double Vector3D::getX() const { 
    return x_;
}

/**
* @pre: None
* @param: None
* @post: return the value of the y_ component.
*/
double Vector3D::getY() const { 
    return y_;
}

/**
* @pre: None
* @param: None
* @post: return the value of the z_ component.
*/
double Vector3D::getZ() const { 
    return z_;
}

/**
* @pre: None
* @param x: The value to set for the x_ component.
* @post: Updates the x_ component.
*/
void Vector3D::setX(double x) { 
    x_ = x;
}

/**
* @pre: None
* @param y: The value to set for the y_ component.
* @post: Updates the y_ component.
*/
void Vector3D::setY(double y) { 
    y_ = y;
}

/**
* @pre: None
* @param z: The value to set for the z_ component.
* @post: Updates the z_ component.
*/
void Vector3D::setZ(double z) { 
    z_ = z;
}

/**
* @pre: None
* @param: None
* @post: return the Euclidean magnitude (length) of the vector: sqrt(x^2 + y^2 +
z^2).
*/
double Vector3D::calculateMagnitude() const { 
    return std::sqrt((x_ * x_) + (y_ * y_) + (z_ * z_));
}

/**
* @pre: None
* @param: None
* @post: If magnitude > 0, each component is divided by the magnitude to
create a unit vector.
* If magnitude is 0, no change is made.
*/
void Vector3D::normalize() { 
    double m = calculateMagnitude();
    if (m > 0) {
        x_ /= m;
        y_ /= m;
        z_ /= m;
    }
}

/**
* @pre: None
* @param: None
* @post: Displays the vector in the format: Vector[x, y, z] (values to 2
decimal places) with a newline at the end.
*/
void Vector3D::display() const { 
    std::cout << "Vector[" << std::fixed << std::setprecision(2) << x_ << ", " << y_ << ", " << z_ << "]" << std::endl;
}
