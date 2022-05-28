#include <iostream>
using namespace std;
int main(){
    char str[20]="india";
    char *s=str;
    int n=0;
    for(int i=0;s[i]!='\0';i++){
        n++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(s[j]-97>s[j+1]-97){
                swap(s[j],s[j+1]);
            }
        }
    }
    cout << str << endl;
    return 0;
}
