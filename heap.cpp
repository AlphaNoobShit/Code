#include <iostream>

using namespace std;

void heapify(int array[], int size, int i)
{

    // for (int i = size / 2 - 1; i >= 0; i--)
    //     heapify(array, size, i);

    int largest = i, left = 2 * i + 1, right = 2 * i + 2;

    if (left < size && array[left] > array[largest])
        largest = left;

    if (right < size && array[right] > array[largest])
        largest = right;

    if (largest != i)
    {
        swap(array[i], array[largest]);
        heapify(array, size, largest);
    }
}

// void convert_to_heap(int array[], int size)
// {

//     for (int i = size / 2 - 1; i >= 0; i--)
//         heapify(array, size, i);
// }

void heap_sort(int array[], int size)
{

    // convert_to_heap(array, size);
    for (int i = size / 2 - 1; i >= 0; i--)
        heapify(array, size, i);

    cout << "Heap Array: ";
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
    // int sortedArray[size];
    for (int j = size - 1; j > 0; j--)
    {
        swap(array[j], array[0]);
        heapify(array, j, 0);
        // convert_to_heap(array, j);
        // size --;
    }
}

int main()
{

    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int array[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Array[" << i << "] : ";
        cin >> array[i];
    }

    cout << "Original Array: ";
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";

    cout << endl;

    heap_sort(array, size);

    cout << "Sorted Heap Array: ";
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;

    return 0;
}
