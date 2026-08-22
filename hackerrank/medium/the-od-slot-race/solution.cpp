#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     int n;
     cin >> n;
     long long a[20000]; 
     for (int i=0; i<n;i++){
        cin>> a[i];
     }
     
     for (int i =0;i<n;i++){
        int count =0;
        for(int j=0;j<n;j++){
            if (a[i] ==a[j]){
                count++;
            }
        }
        if (count ==1){
            cout << a[i];
            return 0;
        }
     }
     
     cout <<-1;
    return 0;
}
