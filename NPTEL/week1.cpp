#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
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


    string str1 = "welcome ";
    string str2 = "students";
    // str1+=str2;
    // strcat(str1, str2);
    // str1.append(str2);
    str1.insert(str2);
    cout<<str1;
    

    return 0;
}