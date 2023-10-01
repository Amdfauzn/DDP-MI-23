#include <iostream>
using namespace std;

int main() {
    char var ;
    cin >> var;
    
    switch (var){
        case 'A':
                cout << "Nilai kamu 100" << endl;
            break;
            
        case 'B':
            cout << "Nilai kamu 76 - 99 " << endl;
            
        case 'C': "Nilai kamu dibawah 76 " << endl;
            break;
            
            default:
            cout << "Nilai Invalid" endl;
            
            return 0;
        
}