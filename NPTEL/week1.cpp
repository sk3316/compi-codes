#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

void modify (int *arr){
    rotate(arr, arr+3,arr+5);
    rotate(arr, arr+2,arr+4);
}
int main()
{   
    // q1.
    // int n = 4;

    // // std::cout<<std::pow(n,2)<<" "<<std::sqrt(n);

    // cout<<pow(n,2)<<endl;
    // cout<<sqrt(n)<<endl;

    // vector<int> arr;
    // // int arr[3];
    // arr.resize(10);
    // for (int i = 0; i < 10; i++)
    // { 
    //     arr[i] = i+1;
    // }

    // string s = "programming in modern c++";
    // cout<<s.size()<<endl;
    // cout<<strlen(s)<<endl;
    // cout<<s.length(s)<<endl;
    // cout<<strlen(s.c_str())<<endl;


    // int data[] = {50,30,40,10,20};
    // sort(&data[2],&data[5]);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<data[i]<<" ";
    // }


    // string str1 = "welcome ";
    // string str2 = "students";
    // str1+=str2;
    // // strcat(str1, str2);
    // str1.append(str2);
    // // str1.insert(str2);
    // cout<<str1;
    

    // char str[10] = "COMPUTER";
    // stack<char> s1,s2;
    // int i;
    // for (int i = 0; i < strlen(str)/3; i++)
    // {
    //     s1.push(str[i]);
    
    // for (; i < strlen(str); i++)
    
    //     s2.push(str[i]);
    // }
    // while (!s1.empty()) 
    // {
    //     s2.push(s1.top()); s1.pop();
    // }
    // while (!s2.empty())
    // {
    //     cout<<s2.top(); s2.pop();
    // }
    
    
    int iarr[5];
    for (int i = 0; i < 5; i++)
    {
        *(iarr+i)= i*2;
    }
    modify(iarr);
    for (int i = 0; i < 5; ++i)
    {
        cout<<*(iarr+i)<<" ";
    }
    
    


























































































































    return 0;
}