#include <iostream>

using namespace std;

int main() {
    cout << "\n";

    // Верхня межа
    cout << (char)201;
    for (int i = 0; i < 55; i++) {
        cout << (char)205;
    }
    cout << (char)187 << endl;

    // Заголовок
    cout << (char)186 << "                        Pory Roku                      " << (char)186 << endl;

    // Середня межа
    cout << (char)204;
    for (int i = 0; i < 55; i++) {
        cout << (char)205;
    }
    cout << (char)185 << endl;

    // Рядки
    cout << (char)186 << "     Zyma     " << (char)186 << "    Vesna     " << (char)186 << "    Lito     " << (char)186 << "    Osin   " << (char)186 << endl;

    // Нижня межа
    cout << (char)200;
    for (int i = 0; i < 55; i++) {
        cout << (char)205;
    }
    cout << (char)188 << endl;

    return 0;
}

