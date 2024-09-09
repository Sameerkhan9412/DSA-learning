/*
STACK:ek esa DS jisme element/items last in first out order ko follow krke rakhi or nikali jati hai.ex undo operation
->underflow:jis case me stack empty ho or hm element remove krna charhe ho , wo hota hai underflow.
->overflow:jis case me stack full ho or hm element add krna chahte hai , use kete hai overflow.
*/

// c++ STL

// 1) Creation:
    #include<stack>
    stack<int>st;
    stack<char> std;
    stack<string>st;
    stack<node> s;
// 2) Insertion
    st.push(4);
// 3)remove:
    st.pop();
// 4) size:
    st.size()
// 5) empty or not:
    st.empty();
// 6) get top element:
    st.top();
