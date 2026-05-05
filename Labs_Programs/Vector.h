#ifndef VECTOR_H
#define VECTOR_H

class Vector{
    private:
    double i,j,k;

    public:
    //constructor
    Vector();
    Vector(double ival, double jVal, double kVal);
     
    //Input /output
    void Get();
    void Show() const;

    //Mathimatical Operations 

    double Mod() const;
    double Dot(const Vector& B) const;
    Vector Cross(const Vector& B) const;
    Vector Add(const Vector& B) const;
};
#endif