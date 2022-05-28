#include <iostream>
using namespace std;
int main(){
    string str="india";
    int n=str.length();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(str[j]-97>str[j+1]-97){
                swap(str[j],str[j+1]);
            }
        }
    }
    cout << str << endl;
    return 0;
}