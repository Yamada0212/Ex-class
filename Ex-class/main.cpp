#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

/// <summary>
/// •¨‘Ì‚Ì’è‹`
/// </summary>
class Solid {
public:
    virtual double GetVolume() = 0;
    virtual double GetSurface() = 0;
};

/// <summary>
/// ” Œ^
/// </summary>
class Box :Solid {
private:
    double width;
    double height;
    double depth;

public:
    Box(
        double width,   //•
        double height,  //‚‚³
        double depth) {//‰œs
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
        this->radius = radius;//”¼Œa
        this->height = height;//‚‚³
        this->busline = busline;//•êü
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
    double rabius;//”¼Œa
    double heught;//‚‚³
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
    double rabius;//”¼Œa
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
    cout << "box‚Ì‘ÌÏ=" << box.GetVolume() << endl;
    cout << "box‚Ì•\–ÊÏ=" << box.GetSurface() << endl;
    Cone cone{ 3,2.5,5 };
    cout << " Cone‚Ì‘ÌÏ=" << cone.GetVolume() << endl;
    cout << " Cone‚Ì•\–ÊÏ=" << cone.GetSurface() << endl;
    Cylinder cylinder{ 3,2.5 };
    cout << "Cylinder‚Ì‘ÌÏ=" << cylinder.GetVolume() << endl;
    cout << "Cylinder‚Ì•\–ÊÏ=" << cylinder.GetSurface() << endl;
    Sphere sphere{ 3 };
    cout << " Sphere‚Ì‘ÌÏ=" << sphere.GetVolume() << endl;
    cout << " Sphere‚Ì•\–ÊÏ=" << sphere.GetSurface() << endl;
}