//
// Created by Ryoya Izu on 2026/04/21.
//
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int R[n];
    for (int i = 0; i < n; i++)
    {
        cin >> R[i];
    }
    int diff = -10000000000;
    int diff_tmp, R_tmp;

    R_tmp = R[0];
    for (int i = 0; i < n-1; i++)
    {
        if (R_tmp >= R[i])
        {
            R_tmp = R[i];
            for (int j=i+1; j < n; j++)
            {
                diff_tmp = R[j] - R[i];
                if (diff_tmp > diff)
                {
                    diff = diff_tmp;
                }
            }
        }
    }
    cout << diff << endl;
    return 0;
}