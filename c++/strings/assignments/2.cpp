#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        char c = tolower(s[i]);
        if (isalpha(c) && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
            count++;
        }
    }
    cout<<count;
}
