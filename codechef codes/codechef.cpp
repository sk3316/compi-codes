// Alice is driving from her home to her office which is AA kilometers away and will take her XX hours to reach.
// Bob is driving from his home to his office which is BB kilometers away and will take him YY hours to reach.

// Determine who is driving faster, else, if they are both driving at the same speed print EQUAL.

// #include <iostream>
// using namespace std;
// int main(){
// 	float a_kms,x_hrs,b_kms,y_hrs,count;
//     cout<<"enter number of test cases"<<endl;
//     cin>>count;
//     for (int i = 1; i <= count; i++)
//     {   cout<<"enter a_kms, x_hrs, b_kms, y_hrs"<<endl;
//         cin>>a_kms>>x_hrs>>b_kms>>y_hrs;
//         if (a_kms/x_hrs>b_kms/y_hrs)
//         {
//             cout<<"Alice"<<endl;
//         }
//         else if (a_kms/x_hrs<b_kms/y_hrs)
//         {
//             cout<<"Bob"<<endl;
//         }
//         else
//         cout<<"EQUAL"<<endl;
//     }
//     return 0;
// }



// Bob has an account in the Bobby Bank. His current account balance is WW rupees.

// Each month, the office in which Bob works deposits a fixed amount of XX rupees to his account.
// YY rupees is deducted from Bob's account each month as bank charges.

// Find his final account balance after ZZ months. Note that the account balance can be negative as well.


// #include <iostream>
// using namespace std;
// int main(){
// 	int w_rs,x_rs,y_rs,z_mons,t_css;
//     cin>>t_css;
//     for (int i = 1; i <= t_css; i++)
//     {
//         cin>>w_rs>>x_rs>>y_rs>>z_mons;
//         cout<<w_rs+((x_rs-y_rs)*z_mons)<<endl;
//     }
    
//     return 0;
// }


// Most programmers will tell you that one of the ways to improve your performance in competitive programming is to practice a lot of problems.

// Our Chef took the above advice very seriously and decided to set a target for himself.

// Chef decides to solve at least 1010 problems every week for 44 weeks.
// Given the number of problems he actually solved in each week over 44 weeks as P_1, P_2, P_3,P 
// 1
// ​
//  ,P 
// 2
// ​
//  ,P 
// 3
// ​
//  , and P_4P 
// 4
// ​
//  , output the number of weeks in which Chef met his target.
// cin>>a[0]>>a[1]>>a[2]>>a[3];
//         if(a[0]>=10)
//         {count++;}
//         else if (a[1]>=10)
//         {count++;}
//         else if (a[2]>=10)
//         {count++;}
//         else if (a[3]>=10)
//         {count++;}
//         else
//         {cout<<"0";}
//         cout<<count;


// #include<iostream>
// using namespace std;
// int main(){
//     int i,a[4],count=0;
//     cout<<"enter 4 numbers count"<<endl;
//    for ( i = 0; i < 4; i++)
//    {
//      cin>>a[i];
//    }
//     for ( i = 0; i < 4; i++)
//    {
//     if(a[i]>=10)
//     {
//         count++;
//     } } 
//     cout<<count<<endl;
//     return 0;
// }

// Given the time control of a chess match as a + ba+b, determine which format of chess out of the given 44 it belongs to.

// 1)1) Chef if a + b \lt 3a+b<3

// 2)2) Cfenia if 3 \leq a + b \leq 103≤a+b≤10

// 3)3) Chefina if 11 \leq a + b \leq 6011≤a+b≤60

// 4)4) Cf if 60 \lt a + b60<a+b


// #include<iostream>
// using namespace std;
// int main(){
//     int i,count,a,b,sum;
//     cout<<"enter count"<<endl;
//     cin>>count;
//     for ( i = 0; i < count; i++)
//     {
//     cout<<"enter a & b"<<endl;
//     cin>>a>>b;
//     sum= a+b;
//       if (sum<3)
//       {
//         cout<<"1"<<endl;
//       }
//       else if (sum>=3&&10>=sum)
//       {
//         cout<<"2"<<endl;
//       }
//       else if (sum>=11&&60>=sum)
//       {
//         cout<<"3"<<endl;
//       }
//       else
//       {
//         cout<<"4"<<endl;
//       }
//     }
//     return 0;
// }



// In a competition, there are three 33 problems: P, Q, RP,Q,R. Alice challenges Bob that problem RR will be the most difficult, whereas Bob predicts that problem QQ will be the most difficult.

// You are given three integers S_P, S_Q, S_RS 
// P
// ​
//  ,S 
// Q
// ​
//  ,S 
// R
// ​
//  , which represent the number of successful submissions of the problems P, Q, RP,Q,R. Each problem is guaranteed to have a varied amount of submissions. Decide who will win the challenge.

// If Alice wins the challenge (that is, if problem RR is the most difficult), then output AliceAlice.

// If Bob wins the challenge (that is, if problem QQ is the most difficult), then output BobBob.

// If no one wins the challenge (since problem PP is the most difficult), output DrawDraw.

// Note: The problem with the fewest successful submissions is the most difficult.

// Input Format
// The first line of input contains a single integer TT, which represents the number of test cases. The following is a description of TT test cases.
// Each test case's first and only line comprises three space-separated integers S_P, S_Q, S_RS 
// P
// ​
//  ,S 
// Q
// ​
//  ,S 
// R
// ​
//  , which represent the number of successful submissions of problems P, Q, RP,Q,R, respectively.



// #include<iostream>
// using namespace std;
// int main(){
//   int p,q,r,count,i;
//   cout<<"enter testcases"<<endl;
//   cin>>count;
//   for ( i = 0; i < count; i++)
//   {
//     cout<<"enter p q and r"<<endl;
//     cin>>p>>q>>r;
//     if (r<q&&r<p)
//     {
//       cout<<"alice"<<endl;
//     }
//     else if (q<r&&q<p)
//     {
//       cout<<"bob"<<endl;
//     }
//     else
//     {
//       cout<<"draw"<<endl;
//     }
//   }
//   return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//   int a,b,count;
//   cout<<"enter testcases"<<endl;
//   cin>>count;
//   for (int i = 0; i < count; i++)
//   {
//     cout<<"enter a & b"<<endl;
//     cin>>a>>b;
//     if (a>0 && b>0)
//     {
//       cout<<"solutuon"<<endl;
//     }
//     else if (a==0)
//     {
//       cout<<"liquid"<<endl;
//     }
//     else
//     {
//       cout<<"solid"<<endl;
//     }  
//   }
//   return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//   int x1,x2,y1,y2,z1,z2,t;
//   cout<<"enter test cases"<<endl;
//   cin>>t;
//   for (int i = 0; i < t; i++)
//   { cout<<"enter x1,x2,y1,y2,z1,z2: "<<endl;
//     cin>>x1>>x2>>y1>>y2>>z1>>z2;
//     if (x1<=x2&&y1<=y2&&z1>=z2)
//     {
//       cout<<"YES"<<endl;
//     }
//     else 
//     {
//       cout<<"NO"<<endl;
//     }
//     }
//   return 0;
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int i,count,a,b,sum;
//     cout<<"enter count"<<endl;
//     cin>>count;
//     for ( i = 0; i < count; i++)
//     {
//     cout<<"enter a & b"<<endl;
//     cin>>a>>b;
//     sum= a+b;
//       if (sum<3)
//       {
//         cout<<"1"<<endl;
//       }
//       else if (sum>=3&&10>=sum)
//       {
//         cout<<"2"<<endl;
//       }
//       else if (sum>=11&&60>=sum)
//       {
//         cout<<"3"<<endl;
//       }
//       else
//       {
//         cout<<"4"<<endl;
//       }
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//   char a;
//   int t;
//   cout<<"enter test cases"<<endl;
//   cin>>t;
//   for (int i = 0; i < t; i++)
//   { cout<<"enter alpha"<<endl;
//     cin>>a;
//     if ('B'==a||'b'==a)
//     {
//       cout<<"BattleShip"<<endl;
//     }
//     else if ('C'==a||'c'==a)
//     {
//       cout<<"Cruiser"<<endl;
//     }
//     else if ('D'==a||'d'==a)
//     {
//       cout<<"Destroyer"<<endl;
//     }
//     else if ('F'==a||'f'==a)    
//     {
//       cout<<"Frigate"<<endl;
//     }
//   }
//   return 0;
//}


// #include<iostream>
// using namespace std;
// int main(){
//   char a;
//   //int t;
//   // cout<<"enter test cases"<<endl;
//   // cin>>t;
//   //for (int i = 0; i < t; i++)
//   //{
//      cout<<"enter alpha"<<endl;
//     cin>>a;
//     if ('A'==a||'E'==a||'I'==a||'O'==a||'U'==a)
//     {
//       cout<<"VOWEL"<<endl;
//     }
//     // else if ('C'==a||'c'==a)
//     // {
//     //   cout<<"Cruiser"<<endl;
//     // }
//     // else if ('D'==a||'d'==a)
//     // {
//     //   cout<<"Destroyer"<<endl;
//     // }
//     // else if ('F'==a||'f'==a)    
//     // {
//     //   cout<<"Frigate"<<endl;
//     // }
//     else
//     {
//       cout<<"CONSTANT"<<endl;
//     }
    
//   //}
//   return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//   int tcs,a[7],i,j,counti=0,countj=0;
//   cout<<"enter no. of testcases"<<endl;
//   cin>>tcs;
//   for ( i = 0; i < tcs; i++)
//   {
//     for ( j = 0; j < 7;j++)
//     {
//         cout<<"enter no.s"<<endl;
//         cin>>a[j];
//     }
//     }
//   for ( j = 0; j < 7; j++)
//   {
//     // cout<<a[j]<<endl;
//         if(a[j]==1)
//         {
//             counti++;
//         }
//         else
//         {
//             countj++;
//         }
//   }
  
//   return 0;
// }




// // #include<iostream>
// // using namespace std;
// // int main(){
// //   int tst
// //   return 0;
// // }





// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

//     int l,b,rat,n,count=0;
//     printf("enter size");
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++)
//     { printf("enter l and b");
//       scanf("%.1d %.1d",&l, &b);
//     }
//       rat=(l/b);
//     for (int i = 0; i < n; i++)
//     {
//       printf("%d",rat);
//     }
    
//     return 0;
// }



// Chef is on his way to become the new big bull of the stock market but is a bit weak at calculating whether he made a profit or a loss on his deal.

// Given that Chef bought the stock at value XX and sold it at value YY. Help him calculate whether he made a profit, loss, or was it a neutral deal.

// #include <iostream>
// using namespace std;

// int main() {
// 	int x,y,tstcss;
//   cin>>tstcss;
//   for (int i = 0; i < tstcss; i++)
//   {
//     cin>>x>>y;
//     if(x>y){
//       cout<<"LOSS"<<endl;
//     }
//     else if (x==y)
//     {
//       cout<<"NEUTRAL"<<endl;
//     }
//     else
//     {
//       cout<<"PROFIT"<<endl;
//     }
    
//   }
  
// 	return 0;
// }


//starter 69
// rain in chefland

// #include <iostream>
// using namespace std;
// int main(){
// int x,tstcss;
//   cin>>tstcss;
//   for (int i = 0; i < tstcss; i++)
//   {
//     cin>>x;
//     if(x<3){
//       cout<<"LIGHT"<<endl;
//     }
//     else if (x>=3&&x<7)
//     {
//       cout<<"MODERATE"<<endl;
//     }
//     else
//     {
//       cout<<"HEAVY"<<endl;
//     }
    
//   }
//   return 0;
//   }
  



// SCALENE TRIANGLE

// #include <iostream>
// using namespace std;
// int main(){
// int x,y,z,tstcss;
//   cin>>tstcss;
//   for (int i = 0; i < tstcss; i++)
//   {
//     cin>>x>>y>>z;
//     if(x==y||y==z||x==z)
//     {
//       cout<<"NO"<<endl;
//     }
//     // else if (x>=3&&x<7)
//     // {
//     //   cout<<"MODERATE"<<endl;
//     // }
//     else
//     {
//       cout<<"YES"<<endl;
//     }
    
//   }
//   return 0;
//   }
  



// #include <iostream>
// using namespace std;
// int main(){
// int noe[10],tstcss,arrelmnts;
//   cin>>tstcss;
//   for (int i = 0; i < tstcss; i++)
//   {
//     cin>>noe;
//     for (int j = 0; j < noe; j++)
//     {
//       cin>>arrelmnts;
//     }
    
//     if(x==y||y==z||x==z)
//     {
//       cout<<"NO"<<endl;
//     }
//     else if (x>=3&&x<7)
//     {
//       cout<<"MODERATE"<<endl;
//     }
//     else
//     {
//       cout<<"YES"<<endl;
//     }
    
//   }
//   return 0;
//   }
  


// #include<iostream>
// using namespace std;
// int main(){
//     int tstcss,x,y;
//     cin>>tstcss;
//     for (int i = 0; i < tstcss; i++)
//     {
//         cin>>x>>y;
//         cout<<(y-x)<<endl;
//     }
//     return 0;
// }





// #include<iostream>
// using namespace std;
// int main(){
//     int t,x;
//     cin>>t;
//     for (int i = 0; i < t; i++)
//     {
//         cin>>x;
//         if (x<4)
//         {
//             cout<<"MILD"<<endl;
//         }
//         else if (x>=4&&x<7)
//         {
//             cout<<"MEDIUM"<<endl;
//         }
//         else
//         {
//             cout<<"HOT"<<endl;
//         }
//     }
//     return 0;
// }


// Overspeeding Fine

// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
//     int t,x;
// 	cin>>t;
// 	for(int i = 0; i<t; i++)
// 	{
// 	    cin>>x;
// 	    if(x<=70)
// 	    {
// 	        cout<<"0"<<endl;
// 	    }
// 		else if(x>70&&x<=100)
// 	    {
// 	        cout<<"500"<<endl;
// 	    }
// 	    else
// 	    {
// 	        cout<<"2000"<<endl;
// 	    }
// 	}
// 	return 0;
// }



// Negative Product



// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t,a,b,c,d,e,f;
// 	cin>>t;
// 	for (int i = 0; i < t; i++)
// 	{
// 		cin>>a>>b>>c;
// 		// if (a>=0&&b>=0&&c>=0)
// 		// {
// 		// 	cout<<"NO"<<endl;
// 		// }
// 		// else if (a<=0&&b<=0&&c<=0)
// 		// {
// 		// 	cout<<"NO"<<endl;
// 		// }
// 		d=a*b;
// 		e=c*b;
// 		f=a*c;
// 		if (d<0||e<0||f<0)
// 		{
// 			cout<<"YES"<<endl;
// 		}
// 		else
// 		{
// 			cout<<"NO"<<endl;
// 		}
// 	}
	
// 	return 0;
// }



// Far from origin


// #include<bits/stdc++.h>
// #include <iostream>
// #include<math.h>
// using namespace std;

// int main() 
// {
// 	// your code goes here
// 	int x1,y1,x2,y2,t,ad,bd;
// 	cin>>t;
// 	for (int i = 0; i < t; i++)
// 	{
// 		cin>>x1>>y1>>x2>>y2;
// 		ad=sqrt((x1*x1)+(y1*y1)); //alice distance
// 		bd=sqrt((x2*x2)+(y2*y2)); //bob distance
// 		if(ad>bd)
// 		{
// 			cout<<"ALICE"<<endl;
// 		}
// 		else if (ad<bd)
// 		{
// 			cout<<"BOB"<<endl;
// 		}
// 		else
// 		{
// 			cout<<"EQUAL"<<endl;
// 		}
// 	}
// 	return 0;
// }


// defeat ur monster


// #include<iostream>
// using namespace std;
// int main(){
// 	int t,h,x,y;
// 	cin>>t;
// 	for (int i = 0; i < t; i++)
// 	{
// 		cin>>h>>x>>y;
// 		if(x>y)
// 		{
// 			cout<<"1"<<endl;
// 		}
// 		else
// 		{
// 			cout<<"0"<<endl;
// 		}
// 	}
// 	return 0;
// }



// Attack on Kingdom

// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t,n,arr[10],temp;
// 	cout<<"enter the no. of testcases: "<<endl;
// 	cin>>t;
// 	for (int i = 0; i < t; i++)
// 	{
// 		cout<<"enter the no. of elemnts: "<<endl;
// 		cin>>n;
// 		for (int j = 0; j < n; j++)
// 		{
// 			cout<<"enter "<<j<<"st element: "<<endl;
// 			cin>>arr[j];
// 		}
// 	}
// 	for (int j = 0; j < n; j++)
// 	{
// 		if(arr[j]<arr[j+1])
// 		{
// 			temp=arr[j];
// 			arr[j]=arr[j+1];
// 			arr[j+1]=temp;
// 		}
// 	}
// 	cout<<arr[1]<<endl;
	
	
// 	return 0;
// }


// Facebook

// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t,n,a[10],b[10];
// 	cin>>t;
// 	for(int i=0; i<t; i++)
// 	{
// 	    cin>>n;
// 	    for(int j = 0; j < n; j++)
// 	    {
// 	        cin>>a[j];
// 	    }
// 	    if(a[j]>a[j+1])
// 	        {
// 	            cout<<j<<endl;
// 	        }
// 	    for(int j = 0; j<n; j++)
// 	    {
// 	        cin>>b[j];
// 	    }
	    
// 	}
// 	return 0;
// }


// Read Pages


// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int n,x,y,t,z;
// 	cin>>t;
// 	for (int i = 0; i < t; i++)
// 	{
// 		cin>>n>>x>>y;
// 		z=x*y;
// 		if (z>=n)
// 		{
// 			cout<<"YES"<<endl;
// 		}
// 		else
// 		{
// 			cout<<"NO"<<endl;
// 		}
// 	}
// 	return 0;
// }




// 400M Race


// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t,a,b,c;
// 	cin>>t;
// 	for (int i = 0; i < t; i++)
// 	{
// 		cin>>a>>b>>c;
// 		if (a<b&&b<c)
// 		{
// 			cout<<"ALICE"<<endl;
// 		}
// 		else if (b<a&&a<c)
// 		{
// 			cout<<"BOB"<<endl;
// 		}
// 		else
// 		{
// 			cout<<"CHARLIE"<<endl;
// 		}
// 	}
// 	return 0;
// }


// Battery Health


// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int x,t;
// 	cin>>t;
// 	for (int i = 0; i < t; i++)
// 	{
// 		cin>>x;
// 		if (x>=80)
// 		{
// 			cout<<"YES"<<endl;
// 		}
// 		else
// 		{
// 			cout<<"NO"<<endl;
// 		}
// 	}
	
// 	return 0;
// }



// Netflix 


// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t,a,b,c,x;
// 	cin>>t;
// 	for (int i = 0; i < t; i++)
// 	{
// 		cin>>a>>b>>c>>x;
// 		if ((a+b)>=x||(a+c)>=x||(b+c)>=x)
// 		{
// 			cout<<"YES"<<endl;
// 		}
// 		else
// 		{
// 			cout<<"NO"<<endl;
// 		}
		
// 	}
	
// 	return 0;
// }



// Candy Store


// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t,x,y;
// 	cin>>t;
// 	for (int i = 0; i < t; i++)
// 	{
// 		cin>>x>>y;
// 		if (x>=y)
// 		{
// 			cout<<y<<endl;
// 		}
// 		else
// 		{
// 			cout<<x+(2*(y-x))<<endl;
// 		}
		
		
// 	}
	
// 	return 0;
// }

// Just One More Episode


// #include<iostream>
// using namespace std;
// int main()
// {
//     int t,x,d;
//     cin>>t;
//     for(int i = 0; i<t; i++)
//     {
//         cin>>x;
//         if(x<=24)
//         {
//             cout<<"NO"<<endl;
//         }
//         else
//         {
//             cout<<"YES"<<endl;
//         }
        
//     }
//     return 0;
// }


// Single-use Attack

// #include<iostream>
// using namespace std;
// int main()
// {
//     int t,x,y,h,q,r;
//     cin>>t;
//     for(int i = 0; i<t; i++)
//     {
//         cin>>h>>x>>y;
//         q = (h-y)/x;
//         r = (h-y)%x;
//         if(r>0)
//         {
//             cout<<2+q<<endl;
//         }
//         else
//         {
//             cout<<1+q<<endl;
//         }
//     }
//     return 0;
// }

// Lucky Number

// #include<iostream>
// using namespace std;
// int main()
// {   
//     int n,j = 0,t;
//     cin>>t;
//     for(int i = 0; i<t ; i++){
//     cin>>n;
//     if (n%2 == 0){
//         while (n%2 == 0)
//         {
//             n = n/2;
//             j+=1;
//         }
//         // cout<<j<<endl;
//         if (j%2 == 0 )
//         {
//              cout<<"1"<<endl;
//         }
//         else
//         {
//             cout<<"0"<<endl;
//         }
        
        
//         // cout<<"1"<<endl;
//     }
//     else
//     {
//         cout<<"1"<<endl;
//     }
//     }
//         // cout<<j<<endl;
//     return 0;
// }

// Sunny Day

