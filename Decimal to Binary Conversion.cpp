#include <iostream>
#include <math.h>
using namespace std;

int main() {
int n;
cin >> n;
int i = 0;
int ans = 0;
while (n!=0){
    int bit = n&1;
    ans = (bit*pow(10,i))+ ans;  //this is for reverse,as bits are placed from right to left
    n = n >> 1;                  //for straight number seq ans = (ans*10)+digit
    i++;
}
cout <<ans<< endl;

}