// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
bool perfectSquare(int i,int pro){
    if(i*i==pro)
    return true;
    if(i*i>pro)
    return false;
    perfectSquare(i+1,pro);
}
int main() {
    // Write C++ code here
    int n,m,product;
    cin>>n>>m;
    product=n*m;
    bool result;
    result=perfectSquare(1,product);
    result?cout<<"yes":cout<<"no";
    return 0;
}
