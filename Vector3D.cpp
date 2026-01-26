#include "Vector3D.hpp"
#include <cmath>
#include <iomanip> 
#include <iostream>

Vector3D::Vector3D() {
  x_ = 0.0;
  y_ = 0.0;
  x_ = 0.0;
}
Vector3D::Vector3D(double x, double y, double z) {
  x = x_;
  y = y_;
  z = z_;
}

double Vector3D::getX() const {
    return x_;
}
double Vector3D::getY() const {
    return y_;
}
double Vector3D::getZ() const {
    return z_;
}

void Vector3D::setX(double x) {
    x_ = x;
}
void Vector3D::setY(double y) {
    y_ = y;
}
void Vector3D::setZ(double z) {
    z_ = z;
}

double Vector3D::calculateMagnitude() const {
    return std::sqrt((x_ * x_) + (y_ * y_) + (z_ * z_));
}
void Vector3D::normalize() {
    double m = calculateMagnitude();
    if (m > 0) {
        x_ /= m;
        y_ /= m;
        z_ /= m;
    }
}
void Vector3D::display() const {
    std::cout << "Vector[" << std::fixed << std::setprecision(2) << x_ << ", " << y_ << ", " << z_ << "]" << std::endl;
}
