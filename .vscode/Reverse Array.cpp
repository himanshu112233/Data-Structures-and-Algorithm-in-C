#include <iostream>
using namespace std;
void reverseArray (int arr[], int size){
    int start = 0;
    int end = size-1;    
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
        }
 }
int main() {int size;
cout << " Give size of array" << endl;
cin >> size ;

int num[100];

cout << " Give elements of array \n";
for(int i = 0 ; i<size ; i++){
    cin >> num[i];
}

reverseArray(num,size);

for(int i = 0 ; i<size ; i++){
    cout<< num[i]<<" ";
}
}