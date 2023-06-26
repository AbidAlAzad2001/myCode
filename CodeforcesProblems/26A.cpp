#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    int arr[n+1] = {0};

    for(int i = 2; i <= n; i++){
        int isPrime = 0;
        for(int j = 2; j <= i/2; j++){
             if(i % j == 0){
                 isPrime = 1;
                 break;
             }
        }
           
        if(isPrime==0 && n != 1)
            arr[i] = 1;
    }

    int count = 0;
    for(int i = 6;i <= n;i++) {
        int sum = 0;
        for(int j = 2;j <= n;j++) {
            if(arr[j] == 1){
                if(i%j == 0) {
                    sum++;
                }
            }
        }
        if(sum == 2) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}