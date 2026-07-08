
#include<bits/stdc++.h>
using namespace std;

// Count all digits of a number
long int number_of_digits(long long n){
    long count = 0;

    while (n > 0)
    {
        count++;
        n /= 10;
    }
    return count;
}

// Reversing an integer (32-bits)
int reverse_integer(int x){
    int ans = 0;
    while (x)
    {
        if (ans > INT_MAX / 10 || ans < INT_MIN/10) return 0;

        ans = ans * 10 + x % 10;
        x /= 10;
    }
    return ans;
}

// Checking Palindrome
bool is_pallindrome(int n){
    if (n < 0) return false;


    int ans = 0, temp = n;
    while (n)
    {
        if (ans > INT_MAX / 10 || ans < INT_MIN/10) return false;

        ans = ans * 10 + n % 10;
        n /= 10;
    }
    
    if (ans == temp) return true;
    return false;
}

// Armstrong Number
bool is_armstrong(int n){
    int ans = 0, temp = n;

    while (n)
    {
        if (ans > INT_MAX / 10 || ans < INT_MIN/10) return false;

        ans += (n%10) * (n%10) * (n%10);
        n /= 10; 
    }
    
    if (ans == temp) return true;
    return false;
}

// Printing all the divisors of a number
void print_divisors(int n){
    
    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0) cout << i << " ";
    // }

    // Optimized way
    vector <int> ans;
    for (int i = 1; i*i <= n; i++)
    {
        if(n % i == 0){
            ans.push_back(i);
            if ((n/i) / i != 1){
                ans.push_back(n/i);
            }
        }
    }
    sort(ans.begin(), ans.end());

    for (auto it : ans) cout << it << " ";    
}

// Prime Number
void is_prime(int n){
    int count = 0;

    for (int i = 1; i*i <= n; i++)
    {
        if (n % i == 0){
            count++;
            if ((n/i) != i) count++;
        }
    }

    if (count == 2) cout << "true";
    else cout << "false";
}

// GCD or HCF using Euclidean algo
int find_gcd(int a, int b){
    while (a > 0 && b > 0)
    {
        if (a > b) a %= b;
        else b %= a;
    }
    
    if (a == 0) return b;
    return a;
}

int main(){
    int m,n;
    cin >> m >> n;
    
    cout << find_gcd(m,n);
}