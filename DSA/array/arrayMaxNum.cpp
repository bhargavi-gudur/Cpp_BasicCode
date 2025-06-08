#include <iostream>
#include <array>

using namespace std;
void maxElement_noinbuilt();

int main()
{

    maxElement_noinbuilt();
    return 0;
}

void maxElement_noinbuilt()
{
    int i;

    array<int, 5> arr = {10, 20, 5, 15, 30};
    int max_element = arr[0];
    for (i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max_element)
        {
            max_element = arr[i];
        }
        cout << " the array max value to find: " << arr[i] << "\t" << max_element << endl;
    }
    cout << "Maximum element in the array: " << arr[i] << "\t" << max_element << endl;
}