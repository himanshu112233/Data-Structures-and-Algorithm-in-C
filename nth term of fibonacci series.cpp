#include <iostream>
using namespace std;
int fib(int n){
    int a = 0;
    int b = 1;
    int next ;
    for(int i = 2; i<n ; i++){
         next = a + b;
          a = b;
          b = next;
    }
    return next;
}
int main() { int n;
cout<<" which nth term to be found "<<endl;
cin >> n;
cout<<fib(n);
    return 0;
}