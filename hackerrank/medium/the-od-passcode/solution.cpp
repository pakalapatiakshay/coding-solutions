#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin >>s;
    for(char c : s){
        if (c != 'A' && c != 'E' && c!='I' && c!='O' && c!='U'){
            cout << (char)tolower(c);
        }
        
    }  
    return 0;
}
