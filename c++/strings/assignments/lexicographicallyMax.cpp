#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string s = "proud to be pwians";
    stringstream ss(s);
    string word, maxWord = "";

    while (ss >> word) {
        if (word > maxWord) {
            maxWord = word;
        }
    }

    cout << maxWord;
    return 0;
}
