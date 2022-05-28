#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter size of an array: ";
    cin >> n;
    int arr[n];
    int *ptr=arr;
    cout << "enter elements of an array: ";
    for(int i=0;i<n;i++){
        cin >> ptr[i];
    }
    int key;
    cout << "enter key: ";
    cin >> key;
    for(int i=0;i<n;i++){
        if(ptr[i]==key){
            cout << i << endl;
            break;
        }
    }
    return 0;
}