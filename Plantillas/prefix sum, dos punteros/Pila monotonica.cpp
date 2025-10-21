#include <bits/stdc++.h>
using namespace std;


// --- Next Smaller to Left ---
vector<int> nextSmallerLeft(const vector<int>& a) {
    int n = a.size();
    vector<int> left(n, -1);
    stack<int> st;
    for (int i = 0; i < n; i++) {
        while (!st.empty() && a[st.top()] >= a[i]) st.pop();
        if (!st.empty()) left[i] = st.top();
        st.push(i);
    }
    return left;
}

// --- Next Smaller to Right ---
vector<int> nextSmallerRight(const vector<int>& a) {
    int n = a.size();
    vector<int> right(n, n);
    stack<int> st;
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && a[st.top()] >= a[i]) st.pop();
        if (!st.empty()) right[i] = st.top();
        st.push(i);
    }
    return right;
}

// --- Next Greater to Left ---
vector<int> nextGreaterLeft(const vector<int>& a) {
    int n = a.size();
    vector<int> left(n, -1);
    stack<int> st;
    for (int i = 0; i < n; i++) {
        while (!st.empty() && a[st.top()] <= a[i]) st.pop();
        if (!st.empty()) left[i] = st.top();
        st.push(i);
    }
    return left;
}

// --- Next Greater to Right ---
vector<int> nextGreaterRight(const vector<int>& a) {
    int n = a.size();
    vector<int> right(n, n);
    stack<int> st;
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && a[st.top()] <= a[i]) st.pop();
        if (!st.empty()) right[i] = st.top();
        st.push(i);
    }
    return right;
}

/*Para lso valores del arreglo*/
vector<int> nextSmallerLeftValue(const vector<int>& a) {
    int n = a.size();
    vector<int> val(n, -1);
    stack<int> st;
    for (int i = 0; i < n; i++) {
        while (!st.empty() && a[st.top()] >= a[i]) st.pop();
        if (!st.empty()) val[i] = a[st.top()];
        st.push(i);
    }
    return val;
}

vector<int> nextSmallerRightValue(const vector<int>& a) {
    int n = a.size();
    vector<int> val(n, -1);
    stack<int> st;
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && a[st.top()] >= a[i]) st.pop();
        if (!st.empty()) val[i] = a[st.top()];
        st.push(i);
    }
    return val;
}

vector<int> nextGreaterLeftValue(const vector<int>& a) {
    int n = a.size();
    vector<int> val(n, -1);
    stack<int> st;
    for (int i = 0; i < n; i++) {
        while (!st.empty() && a[st.top()] <= a[i]) st.pop();
        if (!st.empty()) val[i] = a[st.top()];
        st.push(i);
    }
    return val;
}

vector<int> nextGreaterRightValue(const vector<int>& a) {
    int n = a.size();
    vector<int> val(n, -1);
    stack<int> st;
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && a[st.top()] <= a[i]) st.pop();
        if (!st.empty()) val[i] = a[st.top()];
        st.push(i);
    }
    return val;
}

