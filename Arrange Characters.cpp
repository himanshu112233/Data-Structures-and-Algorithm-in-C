#include<iostream>
using namespace std;
int main (){
    char ch ;
    cin >> ch ;
    if (ch>='a' && ch<='z'){
cout <<ch<< " is lowercase character "<<endl;
    }
    else if (ch>='A' && ch<='Z'){
cout <<ch<< " is uppercase character "<<endl;
    }
    
     else {
cout <<ch << " is a number "<<endl;
    }
    return 0;
}

