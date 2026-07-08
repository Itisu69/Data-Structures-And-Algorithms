#include <bits/stdc++.h>
using namespace std;

// Printing something N times
// this is same for problem 2, replacea 1 with any name
void print_something(int n){
    cout << 1 << endl;
    if(n != 1) print_something(n-1);
}

// printing 1 to N
// printing N to 1 is just easy, not use i and just print n
void print_one_to_n(int i, int n){
    // using backtracking
    if(i < 1) return;
    print_one_to_n(i-1, n);
    cout << i << endl;
}

int main(){
    int m, k;
    cin >> m >> k;
    print_one_to_n(m,k);

    return 0;
}