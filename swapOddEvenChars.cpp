#include <bits/stdc++.h>
using namespace std;
void swapOddEvenChars(int a,int b,string str){
    if(a>str.length()||b>str.length()){
        return;
    }
    cout<<str[b]<<str[a];
    swapOddEvenChars(a+2,b+2,str);
}
int main() {
    // Write C++ code here
    string str;
    cin>>str;
    swapOddEvenChars(0,1,str);
    return 0;
}
