#include "pair.h"
#include <iostream>
using namespace std;

Pair::Pair(double f, double s) : first(f), second(s) {
    if (f < 0 || s < 0) {
        cout << "Error: Negative values are not allowed." << endl;
        exit(1);
    }
}

void Pair::setFirst(double f) {
    if (f >= 0) first = f;
    else cout << "Error: Negative value." << endl;
}

void Pair::setSecond(double s) {
    if (s >= 0) second = s;
    else cout << "Error: Negative value." << endl;
}

double Pair::getFirst() const {
    return first;
}

double Pair::getSecond() const {
    return second;
}

double Pair::product() const {
    return first * second;
}

void Pair::print() const {
    cout << "(" << first << ", " << second << ")";
}