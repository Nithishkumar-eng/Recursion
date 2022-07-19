#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string str,int l,int r){
    if(l>r){
        return true;
    }
    if(str[l]!=str[r]){
        return false;
    }
    return isPalindrome(str,l+1,r-1);
}
int main() {
    // Write C++ code here
    string str;
    cin>>str;
    bool result = isPalindrome(str,0,str.length()-1);
    result?cout<<"yes":cout<<"no";
    return 0;
}
