#include <iostream>
#include <stdio.h>
#define ll long long int

using namespace std;

int main(void)
{
    // printf("Test");
    ll n = 0, friends[3] = {0,0,0}, success=0, realsuccess=0;
    cin >> n;
    for (ll counter = 0; counter < n; counter++)
    {
        cin  >> friends[0] >> friends[1] >> friends[2];
        for (ll conter = 0; conter < 3; conter++)
        {
            if (friends[conter] == 1)
                success++;
            friends[conter] = 0;
        }
        if (success > 1)
        {
            realsuccess++;
        }
        success = 0;
    }
    cout << realsuccess;
    printf("\n");
}