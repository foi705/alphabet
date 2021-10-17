#include <iostream>
#include "letters.hpp"
#include "screen.hpp"

using namespace std;

int main()
{
        Screen screen;
        Letter letter_b = alphabet::upperB();
        letter_b.render(screen);
        screen.print();
        screen.clear();

    return 0;
}
