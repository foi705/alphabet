#include <iostream>
#include "screen.hpp"

using namespace std;

int main()
{
    Screen screen;
    Letter firstLetter = letter << "SOME" << "SOME";
    Letter secondLetter = letter << "EMOS" << "EMOS";
    firstLetter.render(screen);
    secondLetter.render(screen);
    screen.print();
    screen.clear();
    return 0;
}
