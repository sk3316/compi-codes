// 1.	Find the longest increasing subsequence (LIS) in a given array of integers such that all elements of the subsequence are sorted in ascending order. 
// Input Format :
// The first line of the input consists of the value of n.
// Next input is the array elements.
// Output Format :
// The output prints the length of the longest increasing subsequence.
// Sample testcases :

// Testcase 1 Input
// 9
// 15 27 14 38 26 55 46 65 85
// Testcase 1 Output
// 6

#include <bits/stdc++.h>
using namespace std;

int _lis(int arr[], int n, int* max_ref)
{

    if (n == 1)
        return 1;

    int res, max_ending_here = 1;

    for (int i = 1; i < n; i++) {
        res = _lis(arr, i, max_ref);
        if (arr[i - 1] < arr[n - 1]
            && res + 1 > max_ending_here)
            max_ending_here = res + 1;
    }

    if (*max_ref < max_ending_here)
        *max_ref = max_ending_here;
        
    return max_ending_here;
}

int lis(int arr[], int n)
{

    int max = 1;

    _lis(arr, n, &max);

    return max;
}

int main()
{
    int arr[] = { 15 ,27, 14 ,38 ,26, 55 ,46, 65 ,85 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Length of lis is " << lis(arr, n);
    return 0;
}


