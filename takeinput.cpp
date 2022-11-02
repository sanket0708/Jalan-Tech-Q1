#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

void rotateleft(int arr[], int n, int p)
{
    p = p % n;
    reverse(arr, arr + p);
    reverse(arr + p, arr + n);
    reverse(arr, arr + n);
}

void rotateright(int arr[], int n, int p)
{
    p = p % n;
    reverse(arr, arr + n);
    reverse(arr + p, arr + n);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int p, d; // p = position and d = either left(0) or right(1)
    cin >> p >> d;

    if (d == 0)
    {
        rotateleft(arr, n, p);
    }
    else
    {
        rotateright(arr, n, p);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}
