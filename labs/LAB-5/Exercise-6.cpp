#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int countVowels(const string& text) {
    int vowelCount = 0;
    string vowels = "aeiouAEIOU";
    for (char c : text) {
        if (vowels.find(c) != string::npos) {
            vowelCount++;
        }
    }
    return vowelCount;
}

int main() {
    string fileName = "text.txt";
    ifstream file(fileName);
    if (file.is_open()) {
        string content((istreambuf_iterator<char>(file)), (istreambuf_iterator<char>()));
        file.close();
        int numVowels = countVowels(content);
        cout << "Number of vowels in the file: " << numVowels << endl;
    } else {
        cout << "Unable to open file." << endl;
    }
    return 0;
}