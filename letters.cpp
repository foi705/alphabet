#include "letters.hpp"
#include <map>
#include <functional>
#include <string>

map<char, Letter> letters;

void initLetters() {
    letters['A'] = alphabet::upperA();
    letters['B'] = alphabet::upperB();
    letters['C'] = alphabet::upperC();
    letters['D'] = alphabet::upperD();
    letters['E'] = alphabet::upperE();
    letters['F'] = alphabet::upperF();
    letters['G'] = alphabet::upperG();
    letters['H'] = alphabet::upperH();
    letters['I'] = alphabet::upperI();
    letters['J'] = alphabet::upperJ();
    letters['K'] = alphabet::upperK();
    letters['L'] = alphabet::upperL();
    letters['M'] = alphabet::upperM();
    letters['N'] = alphabet::upperN();
    letters['O'] = alphabet::upperO();
    letters['P'] = alphabet::upperP();
    letters['Q'] = alphabet::upperQ();
    letters['R'] = alphabet::upperR();
    letters['S'] = alphabet::upperS();
    letters['T'] = alphabet::upperT();
    letters['U'] = alphabet::upperU();
    letters['V'] = alphabet::upperV();
    letters['W'] = alphabet::upperW();
    letters['X'] = alphabet::upperX();
    letters['Y'] = alphabet::upperY();
    letters['Z'] = alphabet::upperZ();
}

void alphabet::renderFrom(Screen& screen, std::string word) {
    if (letters.empty()) initLetters();
    for (char c: word) {
        letters[c].render(screen);
    }
}

Letter& alphabet::upperA() {
    return letter
    << "    /\\    "
    << "   /  \\   "
    << "  /----\\  "
    << " /------\\ "
    << "/        \\";
}

Letter& alphabet::upperB() {
    return letter
    << "|==== "
    << "|    |"
    << "|==== "
    << "|    |"
    << "|____|";
}

Letter& alphabet::upperC() {
    return letter
    << "======"
    << "==    "
    << "==    "
    << "==    "
    << "======";
}

Letter& alphabet::upperD() {
    return letter
    << "|====\\"
    << "|    |"
    << "|    |"
    << "|    |"
    << "|====/";
}

Letter& alphabet::upperE() {
    return letter
    << "|---"
    << "|   "
    << "|---"
    << "|   "
    << "|---";
}

Letter& alphabet::upperF() {
        return letter
    << "||======"
    << "||      "
    << "||====  "
    << "||      "
    << "||      ";
}

Letter& alphabet::upperG() {
    return letter
    << "======"
    << "=     "
    << "=  ==="
    << "=    ="
    << "======";

}

Letter& alphabet::upperH() {
    return letter
    << "||   ||"
    << "||   ||"
    << "||===||"
    << "||   ||"
    << "||   ||";
}

Letter& alphabet::upperI() {
    return letter
    << "-----"
    << "  |  "
    << "  |  "
    << "  |  "
    << "-----";
}

Letter& alphabet::upperJ() {
    return letter
    << "   ||"
    << "   ||"
    << "   ||"
    << "|  ||"
    << "|__||";
}

Letter& alphabet::upperK() {
    return letter
    << "==  =="
    << "== == "
    << "====  "
    << "== == "
    << "==  ==";

}

Letter& alphabet::upperL() {
    return letter
    << "||    "
    << "||    "
    << "||    "
    << "||    "
    << "||____";
}

Letter& alphabet::upperM() {
    return letter
    << "|\\    /|"
    << "| \\  / |"
    << "|  \\/  |"
    << "|      |"
    << "|      |";
}

Letter& alphabet::upperN() {
    return letter
    << "|\\    |"
    << "| \\   |"
    << "|  \\  |"
    << "|   \\ |"
    << "|    \\|";
}

Letter& alphabet::upperO() {
    return letter
    << " ==== "
    << "|    |"
    << "|    |"
    << "|    |"
    << " ==== ";
}

Letter& alphabet::upperP() {
   return letter
    << "|==== "
    << "|    |"
    << "|==== "
    << "|     "
    << "|     ";
}

Letter& alphabet::upperQ() {
    return letter
    << "________ "
    << "|      | "
    << "|      | "
    << "|______\\ "
    << "        \\";
}

Letter& alphabet::upperR() {
    return letter
    << "||=== "
    << "||   |"
    << "||=== "
    << "|| \\  "
    << "||  \\_";
}


Letter& alphabet::upperS() {
    return letter
    << "======"
    << "=     "
    << "======"
    << "     ="
    << "======";
}

Letter& alphabet::upperT() {
    return letter
    << "======"
    << "  ||  "
    << "  ||  "
    << "  ||  "
    << "  ||  ";
}

Letter& alphabet::upperU() {
    return letter
    << "|     |"
    << "|     |"
    << "|     |"
    << "|     |"
    << "\_____/";
}

Letter& alphabet::upperV() {
    return letter
    << "\\        /"
    << " \\      / "
    << "  \\    /  "
    << "   \\  /   "
    << "    \\/    ";
}

Letter& alphabet::upperW() {
    return letter
    << "\\            /"
    << " \\          / "
    << "  \\  \\  /  /  "
    << "   \\  \\/  /   "
    << "    \\ /\\ /    ";
}

Letter& alphabet::upperX() {
    return letter
    << "\\    /"
    << " \\  / "
    << "  \\/  "
    << "  /\\ "
    << " /  \\";
}

Letter& alphabet::upperY() {
    return letter
    << "\\    /"
    << " \\  / "
    << "  \\/  "
    << "  ||  "
    << "  ||  ";
}

Letter& alphabet::upperZ() {
    return letter
    << "===="
    << "  / "
    << " /  "
    << "/   "
    << "====";
}
