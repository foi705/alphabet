#include "screen.hpp"

#include <cmath>
#include <iostream>

void Screen::next(string str) {
    if (matrix.size() <= current) {
        matrix.push_back(vector<string>(current == 0 ? sizes.size() : sizes.size() - 1, ""));
    }
    else {
        for (int i = matrix.at(current).size()+1; i < sizes.size(); ++i) {
            matrix.at(current).push_back("");
        }
    }
    matrix.at(current++).push_back(str);
    if (current == 1) {
        sizes.push_back(str.size());
    }
    else {
        sizes[sizes.size() - 1] = std::max(
                                           sizes[sizes.size() - 1],
                                           static_cast<uint32_t>(str.size())
                                           );
    }
}

void Screen::next(const char* str) {
    next(string(str));
}

void Screen::nextLetter() {
    current = 0;
}

void Screen::print() {
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix.at(0).size(); ++j) {
            uint32_t valSize = matrix.at(i).size() > j ? matrix.at(i).at(j).size() : 0;
            if (valSize != 0) cout << matrix.at(i).at(j);
            for (int k = valSize; k < sizes.at(j); ++k) {
                cout << " ";
            }
            cout << "  "; /// 2 spaces;
        }
        cout << endl;
    }
}

void Screen::clear() {
    matrix.clear();
    sizes.clear();
    current = 0;
}

void Letter::next(string str) {
    lines.push_back(str);
}

Letter& operator<<(Letter& letter, const string& str) {
    letter.next(str);
    return letter;
}

Letter& operator<<(Letter& letter, const char* str) {
    operator<<(letter, string(str));
    return letter;
}

Letter& operator<<(Letter& letter, const signed char* str) {
    return operator<<(letter, (const char*) str);
}

Letter& operator<<(Letter& letter, const unsigned char* str) {
    return operator<<(letter, (const char*) str);
}

void Letter::render(Screen& screen) {
    for (string str: lines) {
        screen.next(str);
    }
    screen.nextLetter();
}

Letter& operator<<(const LetterFactory& factory, const string& str) {
    Letter* letter = new Letter();
    operator<<(*letter, str);
    return *letter;
}

Letter& operator<<(const LetterFactory& factory, const char* str) {
    return operator<<(factory, string(str));
}

Letter& operator<<(const LetterFactory& factory, const signed char* str) {
    return operator<<(factory, (const char*) str);
}

Letter& operator<<(const LetterFactory& factory, const unsigned char* str) {
    return operator<<(factory, (const char*) str);
}
