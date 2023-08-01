#include<iostream>
#include<cstring>
#include<stack>
#include<bits/stdc++.h>
using namespace std;


int main() {
    char str[20];
    char ch;
    cin >> str;
    stack<char> s; //LINE-1

    for(int i = 0; i < strlen(str); i+=2)
        s.push(str[i]); //LINE-2

    int len = s.size();

    for(int i = 0; i < len; i++) {

    	ch = s.top();  //LINE-3

        cout << ch;

        s.pop();
    }
    return 0;
}