#include <iostream>

using namespace std;

int main() {
    int var;
    cin >> var;

    if (var >= 0&&var <= 9) {
        cout << "Satuan";
    } else if (var >= 10 && var <= 99) {
        cout << "Puluhan";
    } else if (var >= 100 && var <= 999) {
        cout << "Ratusan";
    } else {
        cout << "Tidak Tahu";
    }
        return 0;

}
