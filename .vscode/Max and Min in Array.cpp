#include <iostream>
#include<climits>
using namespace std;
 
 int maximum (int arr[], int size){
    int Max = INT_MIN;
    for(int i = 0 ; i<size ; i++){        // 1st method
        if(arr[i]>Max){                  // or Max = max(arr[i],Max)
            Max = arr[i];
        }
    }
    return Max;
 }
 
 int minimum (int arr[], int size){    
    int Min = INT_MAX;
    for(int i = 0 ; i<size ; i++){
        Min = min(arr[i],Min);          // 2nd method
        }
    return Min;
    
 }
int main() {int size;
cout << " Give size of array" << endl;
cin >> size ;
int num[100];
cout << " Give elements of array \n";
for(int i = 0 ; i<size ; i++){
    cin >> num[i];
}
   cout<<"the max element of array is \n"<< maximum(num,size)<<endl;
   cout<<"the min element of array is \n"<< minimum(num,size)<<endl;
}