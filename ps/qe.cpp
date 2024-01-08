#include <iostream>
#include <iomanip>
#include <stack>
#include <string>
using namespace std;

int main(){
    int count_str=1;
    string a;

    getline(cin,a);

    if(a==" "){
        cout << 0;
        return 0;
    }
    for(int i=0;i<a.length();++i){
        if(a[i] == ' ' && i != a.length()-1 && i != 0){
            count_str+=1;
        }
    }
    cout<<count_str;
}