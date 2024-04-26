#include "pair.h"
#include "ellipse.h"
#include <iostream>
using namespace std;

int main() {
    Pair p(3, 4);
    p.print();
    cout << " Product: " << p.product() << endl;

    Ellipse e(5, 3);
    e.print();

    return 0;
}