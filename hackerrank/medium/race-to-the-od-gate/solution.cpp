#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;


int main() {
       int n;
       long long k;
       cin >> n >> k;
       vector<long long> A(n);
       for (int i =0; i<n ;i++){
        cin >> A[i];
       }
       int left =0;
       int right = n-1;
       while( left < right){
        long long sum = A[left] + A[right] ; 
          if ( sum == k){
            cout<< "YES";
            return 0;
          }
          else if(sum < k) {
            left++;
            
          }
          else {
            right--;
          }
          }
        cout <<"NO";
        return 0;
      
        }
        
