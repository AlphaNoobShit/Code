#include <iostream>

using namespace std;

void bubble_sort(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (array[j] < array[j - 1])
            {
                swap(array[j - 1], array[j]);
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter n: \n";
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter array element " << i << ": ";
        cin >> array[i];
    }

    bubble_sort(array, n);
    cout << "sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << array[i] << endl;
    return 0;
}