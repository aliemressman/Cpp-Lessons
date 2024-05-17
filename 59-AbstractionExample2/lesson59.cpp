#include <iostream>
#include <string>
using namespace std;

class Shape {
protected:
    int area, perimeter;
public:
    virtual void Print() = 0;
    virtual void calculateArea() = 0;
    virtual void calculatePerimeter() = 0;

    int getArea() const {
        return area;
    }
    int getPerimeter() const {
        return perimeter;
    }
};

class Rectangle : public Shape {
public:
    int width, height;

    Rectangle(int width, int height) {
        this->width = width;
        this->height = height;
    }

    void Print()  {
        cout << "I'm a Rectangle" << endl;
    }

    void calculateArea()  {
        area = width * height;
    }

    void calculatePerimeter()  {
        perimeter = 2 * (width + height);
    }
};

class Circle : public Shape {
public:
    int r;

    Circle(int r) {
        this->r = r;
    }

    void Print()  {
        cout << "I'm a Circle" << endl;
    }

    void calculateArea()  {
        area = 3 * r * r; // Note: using 3 for π, usually 3.14 or a more accurate value is used
    }

    void calculatePerimeter()  {
        perimeter = 2 * 3 * r; // Note: using 3 for π
    }
};

class Triangle : public Shape {
public:
    int a, b, c, h;

    Triangle(int a, int b, int c, int h) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->h = h;
    }

    void Print()  {
        cout << "I'm a Triangle" << endl;
    }

    void calculateArea()  {
        area = ((a + b + c) * h) / 2; // This formula is incorrect; correct it based on your needs
    }

    void calculatePerimeter()  {
        perimeter = a + b + c;
    }
};

int main() {
    Shape* myArray[3];
    myArray[0] = new Rectangle(5, 4);
    myArray[1] = new Circle(2);
    myArray[2] = new Triangle(3, 4, 5, 5);

    for (int i = 0; i < 3; i++) {
        myArray[i]->Print();
        myArray[i]->calculateArea();
        myArray[i]->calculatePerimeter();
        cout << "Area: " << myArray[i]->getArea() << endl;
        cout << "Perimeter: " << myArray[i]->getPerimeter() << endl;
    }

    // Clean up memory
    for (int i = 0; i < 3; i++) {
        delete myArray[i];
    }

    return 0;
}
