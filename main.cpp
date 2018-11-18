#include "arraystack.h"

int main() {
    AStack P;
    P.push(10);
    P.push(20);
    P.push(30);
    P.push(40);
    P.push(50);
    P.print();
    int x = P.pop();
    x = P.pop();
    P.print();
    return 0;
}