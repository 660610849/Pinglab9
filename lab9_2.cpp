#include<iostream>
using namespace std;
int printO(int n, int m){
    if(n <= 0 || m <= 0){
        cout << "Invalid input";
        }
    for(int x=0; x < n; x++){
        for(int y = 0; y < m; y++){
            cout << "O";
            }
        cout <<endl;    
        }
    return 0;
    }