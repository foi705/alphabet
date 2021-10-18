#include <iostream>
#include "letters.hpp"
#include "screen.hpp"
#include "letters.hpp"

using namespace std;
using namespace alphabet;

int main()
{
    Screen screen;
    upperA().render(screen);
    upperB().render(screen);
    upperC().render(screen);
    upperD().render(screen);
    upperE().render(screen);
    upperF().render(screen);
    screen.print();
    screen.clear();
    upperG().render(screen);
    upperH().render(screen);
    upperI().render(screen);
    upperJ().render(screen);
    upperK().render(screen);
    upperL().render(screen);
    screen.print();
    screen.clear();
    upperM().render(screen);
    upperN().render(screen);
    upperO().render(screen);
    upperP().render(screen);
    upperQ().render(screen);
    upperR().render(screen);
    screen.print();
    screen.clear();
    upperS().render(screen);
    upperT().render(screen);
    upperU().render(screen);
    upperV().render(screen);
    upperW().render(screen);
    upperX().render(screen);
    screen.print();
    screen.clear();
    upperY().render(screen);
    upperZ().render(screen);
    screen.print();
    screen.clear();
    return 0;
}
