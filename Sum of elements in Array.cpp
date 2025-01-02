#include <iostream>
using namespace std;
int SumofElements (int arr[], int size){    
    int Sum = 0;
    for(int i = 0 ; i<size ; i++){
        Sum = Sum + arr[i];
        }
    return Sum;
    
 }
int main() {int size;
cout << " Give size of array" << endl;
cin >> size ;
int num[100];
cout << " Give elements of array \n";
for(int i = 0 ; i<size ; i++){
    cin >> num[i];
}
 cout << " Sum of elements of array are \n"<< SumofElements(num,size);
}