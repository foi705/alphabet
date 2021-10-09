#include "screen.hpp"

#include <iostream>

void Screen::next(string str) {
    if (matrix.size() <= current) {
        for (int i = 0; i <= current; ++i) matrix.push_back(vector<string>());
    }
    matrix.at(current++).push_back(str);
}

void Screen::next(const char* str) {
    next(string(str));
}

void Screen::nextLetter() {
    current = 0;
}

void Screen::print() {
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix.at(i).size(); ++j) {
            cout << matrix.at(i).at(j) << "  "; /// 2 spaces
        }
        cout << endl;
    }
}

void Screen::clear() {
    matrix.clear();
    current = 0;
}

void Letter::next(string str) {
    cout << &lines << " " << this << endl;
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
    cout << "const signed char*" << endl;
    return operator<<(factory, (const char*) str);
}

Letter& operator<<(const LetterFactory& factory, const unsigned char* str) {
    cout << "const unsigned char*" << endl;
    return operator<<(factory, (const char*) str);
}
