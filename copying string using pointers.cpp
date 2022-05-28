#include <iostream>
using namespace std;
int main(){
    char *str1="RedBlue";
    char str2[30];
    
    int i=0;
    for(i=0;i<str1[i]!='\0';i++){
        str2[i]=str1[i];
    }
    str2[i]='\0';
    cout << str2 << endl;
    return 0;
}
