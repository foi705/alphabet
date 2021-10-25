#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <iostream>
#include <string>
#include <map>

using namespace std;

typedef void (*rawFunction)();

void helloWorld();

class ConsoleApplication {
private:
    map<string, rawFunction> handlers;
public:
    ConsoleApplication(): handlers() {
        handlers["hello"] = helloWorld;
    }
    void addCommandHandler(string command, rawFunction handler);
    void run();
};

#endif // APPLICATION_HPP
