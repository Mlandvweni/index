#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    void inputDimensions() {
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
    }

    double calculateArea() const {
        return length * width;
    }

    double calculatePerimeter() const {
        return 2 * (length + width);
    }

    void displayDetails() const {
        cout << "\nRectangle Dimensions:" << endl;
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

int main() {
    Rectangle rect;
    rect.inputDimensions();
    rect.displayDetails();

    return 0;
}

