// #include <iostream>
// #include <cstdio>
// #include <iomanip>
// using namespace std;

// int main() {
//     int i;
//     string s;
//     double d;
//     float f;
//     cin>>i>>i>>s>>d>>f;
//     cout<<i<<endl;
//     cout<<i<<endl;
//     cout<<s<<endl;
//     cout<<fixed<<setprecision(6)<<d<<endl;
//     cout<<fixed<<setprecision(14)<<f<<endl;
//     return 0;
// }
// #include <iostream>
// #include <cstdio>
// #include <iomanip>
// using namespace std;

// int main() {
//     int i,n;
//     string s;
//     double d;
//     float f;
//     cin>>i>>n>>s>>d>>f;
//     cout<<i<<endl;
//     cout<<n<<endl;
//     cout<<s<<endl;
//     cout<<fixed<<setprecision(3)<<d<<endl;
//     cout<<fixed<<setprecision(9)<<f<<endl;
//     return 0;
// }


// #include <iostream>
// #include <cstdio>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     for (int i = 0; i < 10999999; i++)
//     {
//       if (i==1)
//       {
//         cout<<"one"<<endl;
//       }
//       else if (i==2)
//       {
//         cout<<"two"<<endl;
//       }
//       else if (i==3)
//       {
//         cout<<"three"<<endl;
//       }
//       else if (i==4)
//       {
//         cout<<"four"<<endl;
//       }
//       else if (i==5)
//       {
//         cout<<"five"<<endl;
//       }
//       else if (i==6)
//       {
//         cout<<"six"<<endl;
//       }
//       else if (i==7)
//       {
//         cout<<"seven"<<endl;
//       }
//       else if (i==8)
//       {
//         cout<<"eight"<<endl;
//       }
//       else if (i==9)
//       {
//         cout<<"nine"<<endl;
//       }
//       else 
//       {
//         if (i%2==0)
//         {
//             cout<<"even"<<endl;
//         }
//         else
//         {
//             cout<<"odd"<<endl;
//         }
//       }
//     }
//     return 0;
// }





// #include<iostream>
// using namespace std;
// class rectangle
// {
// protected:
//     int width,height;
//     int area;
    
//     void read_input()
//     {
//         cin>>width>>height;
//     }
//     void display()
//     {
//         cout<<width<<" "<<height<<endl;
//     }
// };
// class rectanglearea : public rectangle
// {
//     public:
//     void display()
//     {
//         area= width*height;
//         cout<<area;
//     }
// };
// int main
// {
//     rectanglearea ra;
//     ra.read_input();
//     ra.rectangle::display();
//     ra.display();
//     return 0;
// }



// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;


// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
//     int arr[10];
//     int n,i,j;
//     cin>>n;
//     for ( i= 0; i<n; i++) 
//     {
//         cin>>arr[i];
        
//     }
//     //cout<<"hello";
//     for ( j = n-1;j >=0;  j--) 
//     {
//         cout<<arr[j];
//     }
//    // cout<<"hello";
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {  int n,i,m;
//    cin>>n;
//    cin>>m;
//    for ( i = n; i < m+1; i++)
//    {
//       if (i==1)
//       {
//          cout<<"one"<<endl;
//       }
//       else if (i==2)
//       {
//          cout<<"two"<<endl;
//       }
//       else if (i==3)
//       {
//          cout<<"three"<<endl;
//       }
//       else if (i==4)
//       {
//          cout<<"four"<<endl;
//       }
//       else if (i==5)
//       {
//          cout<<"five"<<endl;
//       }
//       else if (i==6)
//       {
//          cout<<"six"<<endl;
//       }
//       else if (i==7)
//       {
//          cout<<"seven"<<endl;
//       }
//       else if (i==8)
//       {
//         cout<<"eight"<<endl;
//       }
//       else if (i==9)
//       {
//          cout<<"nine"<<endl;
//       }
//       else if (i%2==0)
//       {
//          cout<<"even"<<endl;
//       }
//       else
//       {
//          cout<<"odd"<<endl;
//       }
      
      
      
//    }
   
//    return 0; 
// } 



// #include <iostream>
// #include <cstdio>
// using namespace std;

// /*
// Add `int max_of_four(int a, int b, int c, int d)` here.
// */
// int max_of_four(int a, int b, int c, int d)
// {   int ans;
//     if (a>b&&a>c&&a>d) 
//     {
//       return a;
//     }
//     else if (b>a&&b>c&&b>d)
//     {
//       return b;
//     }
//     else if (c>a&&c>b&&c>d)
//     {
//       return c;
//     }
//     else
//     {
//       return d;
//     }

// }
// int main() {
//     int a, b, c, d;
//     //scanf("%d %d %d %d", &a, &b, &c, &d);
//     cin>>a>>b>>c>>d;
//     int ans = max_of_four(a, b, c, d);
//     //printf("%d", ans);
//     cout<<ans;
    
//     return 0;
// }