#include <iostream>

using namespace std;

void merge(int array[], int low, int middle, int high)
{
    int n1 = middle - low + 1;
    int n2 = high - middle;

    int L[n1], R[n2];

    for (int i = 0; i < n1; ++i)
        L[i] = array[low + i];
    for (int j = 0; j < n2; ++j)
        R[j] = array[middle + 1 + j];

    int i = 0, j = 0, k = low;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            array[k] = L[i];
            ++i;
        }
        else
        {
            array[k] = R[j];
            ++j;
        }
        ++k;
    }

    while (i < n1)
    {
        array[k] = L[i];
        ++i;
        ++k;
    }
    while (j < n2)
    {
        array[k] = R[j];
        ++j;
        ++k;
    }
}
void mergeSort(int array[], int low, int high)
{
    if (low < high)
    {
        int middle = low + (high - low) / 2;

        mergeSort(array, low, middle);
        mergeSort(array, middle + 1, high);
        merge(array, low, middle, high);
    }
}

int main()
{

    int size;
    cout << "Enter size of Array: \n";
    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter element " << i << " of array : ";
        cin >> array[i];
    }

    mergeSort(array, 0, size);
    cout << "Sorted Array: \n";
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";

    return 0;
}