#include <iostream>
#include <string>
using namespace std;

// class Shape {
// public:
//     virtual double getArea() const = 0;
// };
// class Rectangle : public Shape {
// private:
//     double width;
//     double length;
// public:
//     Rectangle(double length, double width) : length(length), width(width) {
//     }

//     double getArea() const override {
//         return length * width;
//     }
// };
// class Circle : public Shape {
// private:
//     double radius;

// public:
//     Circle(double radius) : radius(radius) {
//     }

//     double getArea() const override {
//         return 3.14 * radius * radius;
//     }
// };
// class RightTriangle : public Shape {
// private:
//     double height;
//     double base;
// public:
//     RightTriangle(double base, double height) : base(base), height(height) {
//     }

//     double getArea() const override {
//         return 0.5 * base * height;
//     }
// };
// class Trapezoid : public Shape {
// private:
//     double height;
//     double upperBase;
//     double lowerBase;
// public:
//     Trapezoid(double upperBase, double lowerBase, double height) : upperBase(upperBase), lowerBase(lowerBase), height(height) {
//     }

//     double getArea() const override {
//         return 0.5 * (upperBase + lowerBase) * height;
//     }
// };


// class Employer {
// public:
//     virtual void showInfo() const = 0;
// };
// class President : public Employer {
// public:
//     void showInfo() const override {
//         cout << "President" << endl;
//     }
// };
// class Manager : public Employer {
// public:
//     void showInfo() const override {
//         cout << "Manager" << endl;
//     }
// };
// class Worker : public Employer {
// public:
//     void showInfo() const override {
//         cout << "Worker" << endl;
//     }
// };
// int main() {
// const int numShapes = 4;
//     const Shape* shapes[numShapes];

//     Rectangle rectangle(3.3, 2.2);
//     Circle circle(4.4);
//     RightTriangle triangle(4.4, 2.2);
//     Trapezoid trapezoid(3.3, 6.6, 4.4);

//     shapes[0] = &rectangle;
//     shapes[1] = &circle;
//     shapes[2] = &triangle;
//     shapes[3] = &trapezoid;


//     for (int i = 0; i < numShapes; ++i) {
//         cout <<i + 1 <<"th shapes area is " << shapes[i]->getArea() << endl;
//     }


//     President president;
//     Manager manager;
//     Worker worker;

//     president.showInfo();
//     manager.showInfo();
//     worker.showInfo();

// }


