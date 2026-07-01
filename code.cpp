#include <iostream>
using namespace std;
int main() {
    int n = 4;
    for(int i = 0; i < n; i++){
        char ch = '@';

        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }

        for(int j = 1; j <= i+1; j++){
            ch = ch + 1;
            cout << ch;
        }

        for(int j = i; j >= 1; j--){
            ch = ch - 1;
            cout << ch;
        }

        cout << endl;
    }
    return 0;
}