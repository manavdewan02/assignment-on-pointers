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
    int j=n-1;
    int i=0;
    while(i<j){
        swap(ptr[i],ptr[j]);
        i++;
        j--;
    }
    cout << "element after reverse: " << endl;
    for(int i=0;i<n;i++){
        cout << ptr[i] << " ";
    }
}