#include <iostream>
using namespace std;

bool linearSearch (int arr[], int size, int key){    
    for(int i = 0 ; i<size ; i++){
        if(key == arr[i]){
            return 1;
         }
    }
    return 0;
    }
int main() {int size;
cout << " Give size of array" << endl;
cin >> size ;
int num[100];
cout << " Give elements of array \n";
for(int i = 0 ; i<size ; i++){
    cin >> num[i];
}
int key ;
cout << " Give key to be found \n";
cin >> key;

 bool found = linearSearch(num,size,key);
 if (found){
cout<<"the element "<< key << " is present in array "<<endl;
 }
 else{
cout<<key<<" not found";
 }
}