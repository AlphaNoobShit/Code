#include <iostream>

using namespace std;

void selection_sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min_index=i;
        for (int j =i+1;j<size;j++){
            if (array[j]<array[min_index]){
                min_index=j;
            }
        }
        if(min_index!=i){
            swap(array[i], array[min_index]);
        }
    }
}

int main()
{
    int array[] = {1, 3, 2, 5, 4, 6};
    selection_sort(array,6);

    for (int i = 0; i < 6; i++)
        cout << array[i] << endl;

    return 0;
}