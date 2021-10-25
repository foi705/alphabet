#include "application.hpp"

#include <algorithm>
#include <cstdint>

void helloWorld() {
    cout << "hello, world!" << endl;
}

string loweredCaseString(string str) {
    string loweredCaseStr = str;
    transform(
              str.begin(),
              str.end(),
              str.begin(),
              ::tolower
              );
    return loweredCaseStr;
}

void ConsoleApplication::addCommandHandler(string command, rawFunction handler) {
    handlers[loweredCaseString(command)] = handler;
}

void ConsoleApplication::run() {
    cout << "Alphabet application started!" << endl;
    while (true) {
        cout << "List of commands: " << endl;
        for (
             map<string, rawFunction>::iterator it = handlers.begin();
             it != handlers.end();
             ++it) {
            cout << it->first << endl;
        }
        string chosenCommand;
        cin >> chosenCommand;
        handlers[loweredCaseString(chosenCommand)]();
    }
}
