// using recursion

#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int countPaths(int i, int j, int n, int m)
    {
        if (i == (n - 1) && j == (m - 1))
            return 1;
        if (i >= n || j >= m)
            return 0;
        else
            return countPaths(i + 1, j, n, m) + countPaths(i, j + 1, n, m);
    }
    int uniquePaths(int n, int m)
    {
        return countPaths(0, 0, m, n);
    }
};
int main()
{
    solution obj;
    int totalCount = obj.uniquePaths(3, 7);
    cout << "The total number of Unique Paths are " << totalCount << endl;
    return 0;
}