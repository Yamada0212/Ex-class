#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

/// <summary>
/// ¨ΜΜθ`
/// </summary>
class Solid {
public:
    virtual double GetVolume() = 0;
    virtual double GetSurface() = 0;
};

/// <summary>
///  ^
/// </summary>
class Box :Solid {
private:
    double width;
    double height;
    double depth;

public:
    Box(
        double width,   //
        double height,  //³
        double depth) {//s
        this->width = width;
        this->height = height;
        this->depth = depth;
    }
    double GetVolume() {
        return width * height * depth;
    }
    double GetSurface() {
        return (width * height + height * depth + depth * width) * 2;
    }


};

class Cone :Solid {
private:
    double radius;
    double height;
    double busline;

public:
    Cone(double radius, double height, double busline) {
        this->radius = radius;//Όa
        this->height = height;//³
        this->busline = busline;//κό
    }
    double GetVolume() {
        return radius * radius * M_PI * height * 1 / 3;
    }
    double GetSurface() {
        return M_PI * radius * (busline + radius);
    }
};
class  Cylinder :Solid {
private:
    double rabius;//Όa
    double heught;//³
public:
    Cylinder(double rabius, double heught) {
        this->rabius = rabius;
        this->heught = heught;
    }
    double GetVolume() {
        return rabius * rabius * M_PI * heught;
    }
    double GetSurface() {
        return 2 * M_PI * rabius * (heught + rabius);
    }
};

class Sphere :Solid {
private:
    double rabius;//Όa
public:
    Sphere(double rabius) {
        this->rabius = rabius;
    }
    double GetVolume() {
        return 4 / 3 * M_PI * rabius * rabius * rabius;
    }
    double GetSurface() {
        return 4 * M_PI * rabius * rabius;
    }
};

int main()
{
    Box box{ 3,5,2.5 };
    cout << "boxΜΜΟ=" << box.GetVolume() << endl;
    cout << "boxΜ\ΚΟ=" << box.GetSurface() << endl;
    Cone cone{ 3,2.5,5 };
    cout << " ConeΜΜΟ=" << cone.GetVolume() << endl;
    cout << " ConeΜ\ΚΟ=" << cone.GetSurface() << endl;
    Cylinder cylinder{ 3,2.5 };
    cout << "CylinderΜΜΟ=" << cylinder.GetVolume() << endl;
    cout << "CylinderΜ\ΚΟ=" << cylinder.GetSurface() << endl;
    Sphere sphere{ 3 };
    cout << " SphereΜΜΟ=" << sphere.GetVolume() << endl;
    cout << " SphereΜ\ΚΟ=" << sphere.GetSurface() << endl;
}