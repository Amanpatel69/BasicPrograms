// Minimize insertions required to make ratio of maximum and minimum of all pairs of adjacent array elements at most K

#include<iostream>
using namespace std;

int mininsert(int arr[], int K, int N)
{
    int ans = 0;
    
    for(int i = 0; i < N - 1; i++)
    {
        int a = min(arr[i], arr[i + 1]);
        
        int b = max(arr[i], arr[i + 1]);

        while(K * a < b)
        {
            a *= K;

            ans++;
        }
    }
    return ans;
}
int main()
{
    int arr[] = {2, 10, 25, 21 };
    int K = 2;
    int N = mininsert(arr, K, N);
    cout<<mininsert(arr, K, N);
    return 0;
}