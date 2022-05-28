#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter size of an array: ";
    cin >> n;
    char arr[n];
    char *ptr=arr;
    cout << "enter elements of an array: ";
    for(int i=0;i<n;i++){
        cin >> ptr[i];
    }
    int countv=0;
    for(int i=0;i<n;i++){
        if(ptr[i]=='a'||ptr[i]=='e'||ptr[i]=='i'||ptr[i]=='o'||ptr[i]=='u'){
            countv++;
        }
    }
    cout << "vowels in an array: " << countv << endl;
}