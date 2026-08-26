#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    int vowels = 0;

    cout << "Enter a word: ";
    cin >> word;

    for (int i = 0; i < word.length(); i++) {
        char ch = word[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u') {
            vowels++;
        }
    }

    cout << "Number of vowels: " << vowels << endl;

    return 0;
}
