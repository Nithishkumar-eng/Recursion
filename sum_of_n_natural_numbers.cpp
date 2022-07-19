// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int naturalNumberSum(int n){
    if(n==1)
    return 1;
    return n+naturalNumberSum(n-1);
}
int main() {
    // Write C++ code here
    int n,sum;
    cin>>n;
    sum=naturalNumberSum(n);
    cout<<sum;
    return 0;
}
