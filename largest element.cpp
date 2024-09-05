#include <iostream>
using namespace std;

int Max(int arr[]);

int main()
{
    int arr[5] = {12,32,256,128,64};
    int max_value = arr[0];

    Max(arr);

    return 0;
}

int Max(int arr[])
{
    for (int j = 1; j < 5; ++j)
    {
        if (arr[0] < arr[j])
            arr[0] = arr[j];
    }
    cout << "Maximum value is: " << arr[0];

    return arr[0];
}
