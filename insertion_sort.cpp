#include <iostream>

using namespace std;

void insertion_sort(int array[])
{
}
int main()
{
    int array[] = {1, 3, 2, 5, 4, 6};
    // insertion_sort(array);
    for (int i = 1; i < 6; i++)
    {
        int key = array[i];
        int j = i - 1;

        while (array[j] > key && j >= 0)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }

    for (int i = 0; i < 6; i++)
        cout << array[i] << endl;

    return 0;
}