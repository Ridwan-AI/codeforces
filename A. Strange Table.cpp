#include <iostream>
#include <stdio.h>
#define ll long long int

using namespace std;

int main(void)
{
    ll testcases, n = 0, m = 0, x = 0, foundatx = 0, foundaty = 0, column, row;
    cin >> testcases;
    for (ll counter = 1; counter <= testcases; counter++)
    {
        cin >> n >> m >> x;
        
        for (column = 1; column <= m; column++)
        {
            for (row = 1; row <= n; row++)
            {
                if (x == (row+(n)*(column-1)))
                {
                    
                    foundaty = row;
                    foundatx = column;
                }
            // cout << "her";
            }
        }
        for (row = 1; row <= m; row++)
        {
            for (column = 1; column <= n; column++)
            {
                // cout << (row+(n)*(column-1)) << endl;
                // cout << "Column: " << foundaty << "Row: " << foundatx << endl << "New Column: " << column << "New Row: " << row;
                if (foundaty == column && foundatx == row)
                {
                    cout << (row+(m)*(column-1)) << endl;
                    foundaty = column;
                    foundatx = row;
                }
            }
        }
    }
    printf ("\n");
    return 0;
}