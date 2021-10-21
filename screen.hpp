#ifndef SCREEN_HPP
#define SCREEN_HPP

#include <vector>
#include <string>
#include <inttypes.h>

using namespace std;

class Screen {
private:
    vector<vector<string> > matrix;
    vector<uint32_t> sizes;
    uint16_t current;
public:
    Screen(): matrix(vector<vector<string> >()), current(0), sizes(vector<uint32_t>()) {}
    void next(string str);
    void next(const char* str);
    void nextLetter();
    void print();
    void clear();
};

class Letter {
private:
    vector<string> lines;
public:
    Letter(): lines(vector<string>()) {};
    void next(string line);
    void render(Screen& screen);
};

class LetterFactory {

};

const LetterFactory letter;

Letter& operator<<(Letter& letter, const string& str);
Letter& operator<<(Letter& letter, const char* str);
Letter& operator<<(Letter& letter, const signed char* str);
Letter& operator<<(Letter& letter, const unsigned char* str);
Letter& operator<<(const LetterFactory& factory, const string& str);
Letter& operator<<(const LetterFactory& factory, const char* str);
Letter& operator<<(const LetterFactory& factory, const signed char* str);
Letter& operator<<(const LetterFactory& factory, const unsigned char* str);

#endif
