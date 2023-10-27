#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int M[A][B];
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < B; j++) {
            cin >> M[i][j];
        }
    }
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < B; j++) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
