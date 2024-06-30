#define _CRT_SECURE_NO_WARNINGS  
#include <iostream>
#include <Windows.h>
#include <string.h>
using namespace std;

void UserInput(char* user, char* wordSearch, int maxUserLength, int maxWordLength) {
    cout << "������ �����: ";
    cin.getline(user, maxUserLength);
    cout << "������ ����� ��� ���������: ";
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