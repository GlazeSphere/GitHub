#pragma once

class Vector3D {
  private:
    double x_;
    double y_;
    double z_;
  public:
    Vector3D()
    Vector3D(double x, double y, double z);
    
    double getX() const;
    double getY() const;
    double getZ() const;
      
    void setX(double x);
    void setY(double y);
    void setZ(double z);

    double calculateMagnitude() const;
    void normalize();
    void display() const;
};
