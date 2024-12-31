#include<iostream>
using namespace std;

int main(){int n;
cout<<" what is the number of terms in the fibonacci series "<<endl;
           cin >> n;
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i = 2; i<n ; i++){    // i starting from 2 as we already printed 0 and 1
          int next = a + b;       // i<n because starting from 0 so 1 term will be extra if i<=n
          cout<<next<<" ";
          a = b;
          b = next;
    }
}