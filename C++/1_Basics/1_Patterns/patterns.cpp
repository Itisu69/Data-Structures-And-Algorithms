#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << '\n';
    }
}

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
}

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
}

void pattern5(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void pattern6(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
}

void pattern7(int n)
{
    /*         row(n)  general structure: [space, star, space]
         *      0           4,1,4
        ***     1           3,3,3
       *****    2           2 5 2
      *******   3           1 7 1
     *********  4           0 9 0

     so, spaces = n-i-1, stars = 2n + 1
     because of this: i will go from 0 to n which determines lines
                      j will print spaces and will go till j <= n-i-1
                      k will print stars and will continue till k < 2*i+1
    */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        for (int m = 0; m < n - i - 1; m++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // stars = 2n - (2*i+1)
        for (int k = 0; k < 2 * n - (2 * i + 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // stars = 2n - (2*i+1)
        for (int k = 0; k < 2 * n - (2 * i + 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern10(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;

        // if row exceeds n then it will printing less stars then n after symmetry
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // number
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // spaces
        for (int k = 0; k < 2 * n - 2 * i; k++)
        {
            cout << " ";
        }

        // numbers but just opposit/mirror
        for (int m = i; m >= 1; m--)
        {
            cout << m;
        }
        cout << endl;
    }
}

void pattern13(int n)
{
    int x = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << x++ << " ";
        }
        cout << endl;
    }
}

void pattern14(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j <= 'A' + i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern15(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (char j = 'A'; j < 'A' + i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern16(int n)
{
    char a = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << a;
        }
        a++;
        cout << endl;
    }
}

void pattern17(int n)
{
    // space, alphabet, space
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // characters
        char temp = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int k = 1; k <= 2 * i + 1; k++)
        {
            cout << temp;
            if (k <= breakpoint)
                temp++;
            else
                temp--;
        }

        // space
        for (int m = 0; m < n - i - 1; m++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern18(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char j = 'E' - i; j <= 'E'; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern19(int n)
{
    int ini_space = 0;
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        // spaces
        for (int k = 1; k <= 2 * i; k++)
        {
            cout << " ";
        }

        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        ini_space += 2;
        cout << endl;
    }
    // By the end of this loop ini_space will be 10

    ini_space -= 2;
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        // spaces
        for (int k = 0; k < ini_space; k++)
        {
            cout << " ";
        }

        // stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        ini_space -= 2;
        cout << endl;
    }
}

void pattern20(int n)
{
    // My solution
    // int ini_space = 2*n - 2;
    // for (int i = 0; i < n; i++)
    // {
    //     // stars
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "*";
    //     }

    //     // spaces
    //     for (int k = 0; k < ini_space; k++)
    //     {
    //         cout << " ";
    //     }

    //     // stars
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     ini_space -= 2;
    //     cout << endl;
    // }
    // // after the first loop ini_space will always be -2 no matter the number fo rows

    // ini_space = 2;

    // for (int i = 0; i < n-1; i++)
    // {
    //     // stars
    //     for (int j = n-1; j > i; j--)
    //     {
    //         cout << "*";
    //     }

    //     // spaces
    //     for (int k = 0; k < ini_space; k++)
    //     {
    //         cout << " ";
    //     }

    //     // stars
    //     for (int j = n-1; j > i; j--)
    //     {
    //         cout << "*";
    //     }
    //     ini_space += 2;
    //     cout << endl;
    // }

    int spaces = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;

        if (i > n)
            stars = 2 * n - i;
        // stars
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        // spaces
        for (int k = 1; k <= spaces; k++)
        {
            cout << " ";
        }

        // stars
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        cout << endl;
        if (i < n)
            spaces -= 2;
        else
            spaces += 2;
    }
}

void pattern21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}

void pattern22(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;  // row
            int left = j; // column
            int right = (2 * n - 2) - j;
            int bottom = (2 * n - 2) - i;

            cout << n - min(min(top, bottom), min(left, right)) << " ";
        }
        cout << endl;
    }
}

int main(void)
{
    int m;
    cin >> m;
    pattern22(m);

    return 0;
}