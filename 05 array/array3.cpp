#include <iostream>
    using namespace std;
    int main(){
        int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        int size = sizeof (array) / sizeof(array[0]);
        int length = sizeof(array) / sizeof (array[0]);
        cout << "panjang array: "<< length<<endl;
        return 0;
}