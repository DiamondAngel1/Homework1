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

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int max = 500;
    char user[max];
    char wordSearch[50];
    const char* pattern = " .,!?;:";
    UserInput(user, wordSearch, max, 50);

    return 0;
}