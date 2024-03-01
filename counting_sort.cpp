#include <iostream>

using namespace std;

void count_sort(int array[], int size)
{
    int max = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        };
    }

    int count_array[max + 1] = {0};

    for (int j = 0; j < size; j++)
    {
        count_array[array[j]]++;
    }
    // count array
    // for (int i = 0; i < max + 1; i++)
    //     cout << count_array[i] << " ";
    // cout << endl;

    for (int k = 1; k < max + 1; k++)
    {
        count_array[k] = count_array[k] + count_array[k - 1];
    }

    // cummsum count array
    // for (int i = 0; i < max + 1; i++)
    //     cout << count_array[i] << " ";

    // cout << endl;

    int new_array[size];

    for (int i = size - 1; i >= 0; i--)
    {
        new_array[count_array[array[i]] - 1] = array[i];
        count_array[array[i]] = count_array[array[i]] - 1;
    }
    cout << "Sorted Array \n";
    for (int i = 0; i < size; i++)
        cout << new_array[i] << " ";

    cout << endl;
}

int main()
{

    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int array[size];
    cout << "Enter Elements\n";

    for (int i = 0; i < size; i++)
    {
        cout << "Array [" << i << "] : ";
        cin >> array[i];
    }
    cout << "Unsorted Array \n";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    count_sort(array, size);
    return 0;
}