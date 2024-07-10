#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        if (min_idx != i)
        {
            swap(arr[i], arr[min_idx]);
        }
    }
}

int main()
{
    vector<int> arr = {63, 10, 41, 0, 74, 32};

    cout << "Array sebelum diurutkan:\n";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << "\n";

    selectionSort(arr);

    cout << "Array setelah diurutkan:\n";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}
