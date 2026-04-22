# include <iostream>
using namespace std;

int main()
{
    int N, tmp;
    int sum = 0;
    cin >> N;
    int A[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    bool flag = 1;

    while (flag == 1)
    {
        flag = 0;
        for (int j=0; j<N-1; j++)
        {
            if (A[j] > A[j+1])
            {
                tmp = A[j];
                A[j] = A[j+1];
                A[j+1] = tmp;
                flag = 1;
                sum++;
            }
        }
    }
    for (int k=0; k<N; k++)
    {
        if (k<N-1)
        {
            cout << A[k] << " ";
        }
        else if (k==N-1)
        {
            cout << A[k] << endl;
        }
    }
    cout << sum << endl;

    return 0;
}