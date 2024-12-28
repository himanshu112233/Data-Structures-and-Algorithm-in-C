#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n ;
    cin >> n ;
    float celsius = 0 ;
    float fahrenheit;

    while (celsius <= n ){
        fahrenheit = (9.0 / 5.0) * celsius + 32.0;
        cout << celsius << " " << fahrenheit << endl;
        celsius = celsius + 1;
        
        }
    return 0;
    }