#include <bits/stdc++.h>
using namespace std;
void encode(int i,string str){
    char temp;
    if(str[i]=='\0'){
        return;
    }
    temp=str[i];
    if(str[i]>='X'){
        temp=str[i]-23;
        cout<<temp;
    }
    else{
        temp=str[i]+3;
        cout<<temp;
    }
    encode(i+1,str);
}
int main() {
    // Write C++ code here
    string str;
    cin>>str;
    encode(0,str);
    return 0;
}
