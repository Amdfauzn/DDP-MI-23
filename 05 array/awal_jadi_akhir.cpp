#include <iostream>
using namespace std;
int main(){
 int d;
    cin >> d;
    getchar();
    
    string arr[d];
    for (int i =0; i <d; i++){
        getline (cin, arr[i]);
    }
    for (int i = d-1; i >= 0; i--){
        cout << arr [i] << endl;
    }
}
