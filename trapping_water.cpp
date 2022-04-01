// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

class Solution
{
public:
    long long trappingWater(int a[], int n)
    {

         long long sum = 0;
        for (int i = 1; i < n - 1; i++)
        {
            int l_max = a[i];
            int r_max = a[i];

            for (int j = 0; j < i; j++)
            {
                l_max = max(l_max, a[j]);
            }

            for (int j = i + 1; j < n; j++)
            {
                r_max = max(r_max, a[j]);
            }

            sum += (min(l_max, r_max) - a[i]);
        }

        return sum;
    }
};