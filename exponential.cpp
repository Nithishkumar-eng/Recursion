// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int exponential(int i,int n,int power){
    if(i==power)
    return n;
    return n*exponential(i+1,n,power);
}
int main() {
    // Write C++ code here
    int n,power,result;
    cin>>n>>power;
    result=exponential(1,n,power);
    cout<<result;
    return 0;
}
