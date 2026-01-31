#pragma once

class Vector3D {
  private:
    double x_;
    double y_;
    double z_;
  public:
    /**
    * @pre: None
    * @param: None
    * @post: A Vector3D object is created with x, y, and z being initialized to 0.0
    */
    Vector3D();
     
    /**
    * @pre: None
    * @param x: The double value for the x-coordinate
    * @param y: The double value for the y-coordinate
    * @param z: The double value for the z-coordinate
    * @post: A Vector3D object is created to update the coordinates for x_, y_, and z_ from the given corrdinates in the parameter
    */
    Vector3D(double x, double y, double z); 
    
    /**
    * @pre: None
    * @param: None
    * @post: all the getters return the value of their corresponding x_, y_, z_ component.
    */
    double getX() const;
    double getY() const;
    double getZ() const;
     
    /**
    * @pre: None
    * @param: x, y, z in each of the setters give the new double value for each corresponding coordinates
    * @post: The x, y, z coordinates are updated to the provided value in the parameter
    */
    void setX(double x);
    void setY(double y);
    void setZ(double z);
    
    /**
    * @pre: None
    * @param: None
    * @post: The member functions (or methods) perform the actions or calculations
    */
    double calculateMagnitude() const;
    void normalize();
    void display() const;
};
