#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> st;

    string str;
    int num;
    int a;
    cin>>num;
    for(int i=0;i<num;++i){
        cin>>str;

        if(str == "push"){
            cin>>a;
            st.push(a);
        }
        else if(str == "pop"){
            if(st.empty() == true){
                cout<<"-1\n";
            }else{
                cout<<st.top()<<"\n";
                st.pop();
            }
        }
        else if(str == "size"){
            cout<<st.size()<<"\n";
        }
        else if(str == "empty"){
            if(st.empty() == true){
                cout<<"1\n";
            }
            else{
                cout<<"0\n";
            }
        }
        else if(str == "top"){
            if(st.empty() == true){
                cout<<"-1\n";
            }
            else{
                cout<<st.top()<<"\n";
            }
        }
    }



}