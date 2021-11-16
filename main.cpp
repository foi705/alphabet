#include <iostream>
#include "letters.hpp"
#include "screen.hpp"

using namespace std;
using namespace alphabet;

int main()
{
    Screen screen;
    renderFrom(screen, "QWERTYUIOP");
    screen.print();
    screen.clear();
    cout << endl;
    renderFrom(screen, "ASDFGHJKL");
    screen.print();
    screen.clear();
    cout << endl;
    renderFrom(screen, "ZXCVBNM");
    screen.print();
    screen.clear();
    cout << endl;
    renderFrom(screen, "COOKIES");
    screen.print();
    screen.clear();
    cout << endl;
    renderFrom(screen, "ALGEBRA");
    screen.print();
    screen.clear();
    cout << endl;
    renderFrom(screen, "BOOM");
    screen.print();
    screen.clear();
    cout << endl;
    renderFrom(screen, "PUSTMISHA");
    screen.print();
    screen.clear();
    cout << endl;
    return 0;
}
