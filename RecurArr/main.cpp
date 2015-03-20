#include <iostream>

using namespace std;


int recurPrint(int array[], int index, int size)
{
    if(index != (size - 1))
    {
        recurPrint(array, index + 1, size);
    }
    cout << array[index];
}

int main()
{
    int size = 10;
    int array[] = {0,1,2,3,4,5,6,7,8,9};

    recurPrint(array, 0, size);
    return 0;
}
