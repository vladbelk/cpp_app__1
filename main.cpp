#include <iostream>
#include <random>

using namespace std;

int main() {
    int array1[5][10];
    int array2[5][5];

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, 50);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            array1[i][j] = dist(gen);
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == 0) {
                array2[i][j] = array1[i][0] + array1[i][1];
            }
            else {
                array2[i][j] = array1[i][2 * j] + array1[i][2 * j + 1];
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << array2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
