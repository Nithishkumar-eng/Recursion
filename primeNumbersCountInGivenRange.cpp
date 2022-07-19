#include <bits/stdc++.h>
using namespace std;
bool isPrime(int i,int n){
    if(n==i){
        return true;
    }
    if(n%i==0){
        return false;
    }
    isPrime(i+1,n);
}
int main() {
    int l,r,count=0;
    cin>>l>>r;
    bool result;
    while(l<=r){
        result = isPrime(2,l);
        if(result)
        count++;
        l++;
    }
    cout<<count;
    return 0;
}
