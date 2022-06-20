#include <iostream>
#include <queue>

using namespace std;
int main(){
//IN priority queue the unorder data is returned in a way that on the top the biggest number is stored (if max) smallest number is stored (if min)    
// we can not access the element at i'th index, therefore q.at(i) is not valid
    
// for max - top element will be largest 
    priority_queue<int> maxi;


//for min - top element will be smallest
//     priority_queue<int,vector <int> ,greater <int>> mini;


// //pushing data 
//     maxi.push(1);
//     maxi.push(3);
//     maxi.push(-1);
//     maxi.push(14);
//     maxi.push(1);

//     cout << "this is max heap - " <<endl;   
// //for printing heap 
//     int maxSize = maxi.size(); // since pop decreases size every time loop traverses - we want to traversse loop with the initial size

//     for (int i =0; i<maxSize; i++){
//         cout << maxi.top()<<" ";
//         maxi.pop(); //this removes the topmost element and brings the next element at top position for printing;
//     } 
// cout<<endl;

// //pushing data 
//     mini.push(1);
//     mini.push(3);
//     mini.push(-1);
//     mini.push(14);
//     mini.push(1);


//     cout << "this is min heap - " <<endl;   
// //for printing heap 
//     int minSize = mini.size(); // since pop decreases size every time loop traverses - we want to traversse loop with the initial size

//     for (int i =0; i<minSize; i++){
//         cout << mini.top()<<" ";
//         mini.pop(); //this removes the topmost element and brings the next element at top position for printing;
//     } 



//trying char

priority_queue<char> ch;
    ch.push('a');
    ch.push('1');
    ch.push('/');
    ch.push('"');
    ch.push('&');

// int charSize = ch.size(); // since pop decreases size every time loop traverses - we want to traversse loop with the initial size

//     for (int i =0; i<charSize; i++){
//         cout << ch.top()<<" ";
//         ch.pop(); //this removes the topmost element and brings the next element at top position for printing;
//     } 


//trying string - string is stored lexicographically
priority_queue<string> st;
    st.push("i");
    st.push("have");
    st.push("to");
    st.push("make");
    st.push("papa proud");

    int stringSize = st.size(); // since pop decreases size every time loop traverses - we want to traversse loop with the initial size

    for (int i =0; i<stringSize; i++){
        cout << st.top()<<" ";
        st.pop(); //this removes the topmost element and brings the next element at top position for printing;
    } 

    cout<<endl << st.empty();
    return 0;
}