#include <iostream>
using namespace std;
int maxSubarraySum(int arr[], int n)
{

    int sum = 0;
    int maximum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        maximum = max(maximum, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maximum;
}
int main()
{
    int arr[10] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "The array is " << endl;

    for (int i = 0; i <= 10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}