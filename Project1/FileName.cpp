#define _CRT_SECURE_NO_WARNINGS  
#include <iostream>
#include <Windows.h>
#include <string.h>
using namespace std;

void UserInput(char* user, char* wordSearch, int maxUserLength, int maxWordLength) {
    cout << "¬вед≥ть р€док: ";
    cin.getline(user, maxUserLength);
    cout << "¬вед≥ть слово дл€ п≥драхунку: ";
    cin.getline(wordSearch, maxWordLength);
}

bool Ident(const char* word1, const char* word2) {
    while (*word1 && *word2) {
        if (*word1 != *word2) {
            return false;
        }
        word1++;
        word2++;
    }
    return true;
}

int CountIdent(char* user, const char* wordSearch, const char* pattern) {
    int count = 0;
    char* word = strtok(user, pattern);
    while (word != nullptr) {
        if (Ident(word, wordSearch)) {
            count++;
        }
        word = strtok(nullptr, pattern);
    }
    return count;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int max = 500;
    char user[max];
    char wordSearch[50];
    const char* pattern = " .,!?;:";
    UserInput(user, wordSearch, max, 50);
    int count = CountIdent(user, wordSearch, pattern);

    return 0;
}