#include <iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;
    
    for(int i = 0; i < n * 2; i++){
        for(int j = i; j < n + i; j++){
            if (j % 2 == 0){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }    
}
