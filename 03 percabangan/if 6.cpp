#include <iostream>

using namespace std;

int  main(){
    int var ;
    cin >> var;
    if (var<0){
        cout << "Negatif\n";
        
    } else if (var%2==0){
        cout << "Positif genap \n";
    }
    else if (var%2==1){
     cout << "Positif ganjil \n";
    }
    return 0;    
    
}