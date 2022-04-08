#include <iostream>
using namespace std;
 
int ChainedMatrix(int arr[], int n)
{
    int** DP;
    int i, j, k, L;
    int tmp;
 
    DP = new int*[n];
    for (i = 0; i < n; i++)
    {
        DP[i] = new int[n];
    }
 
    for (i = 1; i < n; i++)
    {
        DP[i][i] = 0;
    }
 
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n - i; j++)
        {
            k = i + j;
            DP[j][k] = INT32_MAX;
            for (L = j; L <= k - 1; L++)
            {
                tmp = DP[j][L] + DP[L + 1][k] + arr[j - 1] * arr[L] * arr[k];
                if (tmp < DP[j][k])
                {
                    DP[j][k] = tmp;
                    //cout << tmp << endl;
                }
                cout << tmp << endl;
            }
        }
    }
 
    return DP[1][n - 1];
};