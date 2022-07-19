#include <bits/stdc++.h>
using namespace std;
bool isComposite(int i,int n){
    if(n==i){
        return false;
    }
    if(n%i==0){
        return true;
    }
    isComposite(i+1,n);
}
int main() {
    int n;
    cin>>n;
    bool result;
    result = isComposite(2,n);
    result?cout<<"yes":cout<<"no";
    return 0;
}
