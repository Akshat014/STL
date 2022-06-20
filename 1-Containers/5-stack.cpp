#include<iostream>
#include<stack>

using namespace std;
int main(){
//LIFO - last in first out  
//we can not directly go to an element in stack  
    stack<string> s;
    s.push("Akshat");//i = 4
    s.push("Grover");//i = 3
    s.push("Lalit");//i = 2
    s.push("Versha"); //i = 1
    s.push("parent grover"); //i =0

    cout<<s.top()<<endl;

    // for (int i =0; i<s.size(); i++){
    //     cout << s.at(i)<<" "; //so we can not directly go to an element in stack

    // }
    
    
    
    
    return 0;
}