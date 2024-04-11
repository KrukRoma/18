#include <iostream>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:

    Fraction() {
        numerator = 0;
        denominator = 1; 
    }

    Fraction(int num, int den) {
        numerator = num;
        if (den != 0) {
            denominator = den;
        }
        else {
            cout << "Denominator cannot be zero." << endl;
            denominator = 1;
        }
    }

    void input() {
        cout << "Enter numerator: ";
        cin >> numerator;
        cout << "Enter denominator: ";
        cin >> denominator;
        if (denominator == 0) {
            cout << "Denominator cannot be zero." << endl;
            denominator = 1;
        }
    }

    Fraction add(Fraction other) {
        Fraction result;
        result.numerator = numerator * other.denominator + other.numerator * denominator;
        result.denominator = denominator * other.denominator;
        return result;
    }

    Fraction subtract(Fraction other) {
        Fraction result;
        result.numerator = numerator * other.denominator - other.numerator * denominator;
        result.denominator = denominator * other.denominator;
        return result;
    }

    Fraction multiply(Fraction other) {
        Fraction result;
        result.numerator = numerator * other.numerator;
        result.denominator = denominator * other.denominator;
        return result;
    }

    Fraction divide(Fraction other) {
        Fraction result;
        result.numerator = numerator * other.denominator;
        result.denominator = denominator * other.numerator;
        return result;
    }

    void display() {
        cout << numerator << "/" << denominator;
    }
};

int main() {
    Fraction frac1, frac2, result;

    cout << "Enter the first fraction:" << endl;
    frac1.input();

    cout << "Enter the second fraction:" << endl;
    frac2.input();

    result = frac1.add(frac2);
    cout << "Sum: ";
    result.display();
    cout << endl;

    result = frac1.subtract(frac2);
    cout << "Difference: ";
    result.display();
    cout << endl;

    result = frac1.multiply(frac2);
    cout << "Multiply: ";
    result.display();
    cout << endl;

    result = frac1.divide(frac2);
    cout << "Divide: ";
    result.display();
    cout << endl;
}
