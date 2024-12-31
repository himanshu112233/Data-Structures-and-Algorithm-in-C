#include <iostream>
using namespace std;
int main() {
    int n ;
    cin >> n;
    for(int x =1; x<=4; x++){
    switch(x){
case 1: { int p = n/100;
    cout << "100 rs notes are "<< p << endl;
         n = n%100 ;
         break;}
case 2: { int q = n/50;
    cout << "50 rs notes are "<< q << endl;
         n = n%50 ;
         break;}
case 3: { int r = n/20;
    cout << "20 rs notes are "<< r << endl;
         n = n%20 ;
         break;}
case 4: { int s = n/1;
    cout << "1 rs notes are "<< s << endl;
         n = n%1 ;
         break;}  
    }
}
    return 0;
}
