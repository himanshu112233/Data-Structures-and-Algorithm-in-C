#include <iostream>
using namespace std;
int counting(int n){
    int count = 0;        //this how you count 1 bit in a number using & logical operator
    while(n!=0){          //if n&1 is 1 then its true so loop works untill it's false i.e n&1 is 0
        if(n&1){
            count++;}
            n = n >> 1;
    }
    return count;
}

int main() {
    int a,b ;
    cin >> a >> b;
    int sum = counting(a) + counting(b);

    cout<< "Sum of 1 bit in two numbers is " <<sum<< endl;
    return 0;
}