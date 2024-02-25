#include <iostream>

using namespace std;

void quick_sort(int array[], int low, int high)
{

    if (low > high)
        return;
    int pivot = array[high];
    int i = low - 1;
    int j = low;

    // using for loop

    //  for (j; j < high; j++)
    //  {
    //      if (array[j] < pivot)
    //      {
    //          i++;
    //          swap(array[j], array[i]);
    //      }
    //  }

    // using while loop
    while (j < high)
    {
        if (array[j] < pivot)
        {
            i++;
            swap(array[j], array[i]);
        }
        j++;
    }

    for (int k = high - 1; k > i; k--)
    {
        swap(array[k], array[k + 1]);
    }

    quick_sort(array, i + 2, high);
    quick_sort(array, low, i);
}

int main()
{
    int array[10] = {2, 65, 23, 7, 82, 99, 0, 54, 11, 2};
    quick_sort(array, 0, 9);

    for (int i = 0; i < 10; i++)
        cout << array[i] << " ";
    cout << endl;

    return 0;
}

// 2 65 23 7 0 54 11 72 99 82 // 2 7 0 11 65 23 54 72 82 99  // 0 2 7 11 23 54 65 72 82 99