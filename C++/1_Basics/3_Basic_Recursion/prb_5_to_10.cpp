#include <bits/stdc++.h>
using namespace std;

// sum of first N numbbers
int sum_of_first_n(int n){
    if (n == 0) return 0;
    return n + sum_of_first_n(n-1);
}

// factorial of a given number
long int factorial(int n){
    if(n == 0) return 1;
    return n * factorial(n-1);
}

// reverse an array
// single pointer
void arr_reverse_pointers(int i,int arr[], int n){
    if(i > n/2) return;

    swap(arr[i], arr[n]);
    arr_reverse_pointers(++i, arr, n-i-1);
}

// checking if a string is a palindrome or not
// using pointer
bool pal_string(string &s, int left){
    if (left >= s.size()/2) return true;

    if(s[left] != s[s.size()-left-1]) return false;
    return pal_string(s, left + 1);
}


int main(){
    string s = "madam";
    cout << pal_string(s,s.size());
}