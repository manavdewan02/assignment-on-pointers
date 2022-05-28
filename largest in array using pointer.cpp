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
    int maxi=INT32_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,ptr[i]);
    }
    cout << "maximum element: " << maxi << endl;
    return 0;
}