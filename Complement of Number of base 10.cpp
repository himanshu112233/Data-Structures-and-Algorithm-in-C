#include <iostream>
using namespace std;
int main() {int n;
cin >> n;
    int mask =0;
    int temp = n;
    if(n==0){ cout<<1;
        return 0;
    }
    while(temp!=0){
        mask = (mask<<1) | 1;
        temp = temp>>1;
    }
      int ans = (~n) & mask;
      cout<<ans ;
      return 0;
    }
