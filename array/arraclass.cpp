#include <iostream>
#include <forward_list>

using std::cin;
using std::cout;
using std::endl;
using std::forward_list;
extern "C"
{
  void ReaptedValueArr(int *size);
  void unquieValueArr();
}

class array
{
public:
  void array_fun(int *size)
  {
    int i = 0, arr[*size] = {10, 0};
    for (i = 0; i < (*size); i++)
    {
      arr[*size - 1] = 150;
      cout << arr[i] << endl;
    }
  }
  void sumofarray(int *size)
  {
    int i = 0;
    int temp = 0;
    int arr1[*size] = {10, 2, 4, 5};
    int arr2[*size] = {11, 34, 14, 15};
    int sum[*size] = {0};
    for (i = 0; i < (*size); i++)
    {
      sum[i] = arr1[i] + arr2[i];
      cout << "sum :" << sum[i] << " , ";
      temp += sum[i];
      cout << "TEMP :" << temp << endl;
    }
    cout << " sum of total two array sum storing in temp:" << temp << endl;
  }
  ~array()
  {
    cout << " destructor is called to close array assigned memory" << endl;
  }
};

void ReaptedValueArr(int *size)
{
  int i = 0, j = 0;
  int arr[*size] = {1, 2, 3, 4, 4, 3}; // Your array
  cout << "Repeated elements in the array are:" << endl;
  for (i = 0; i < (*size); i++)
  {
    for (j = i + 1; j < (*size); j++)
    {
      if (arr[i] == arr[j])
      {
        cout << arr[i] << " " << arr[j] << endl; // Print the repeated element
        break;
      }
    }
  }
}
void unquieValueArr()
{
  int arr[] = {1, 5, 2, 2, 3, 4, 4, 3}; // Your array
  int i = 0, num = 0;
  int actualSize = sizeof(arr) / sizeof(arr[0]); // Calculate actual array size

 
  cout << "unqiue elements in the array are:" << endl;
  for (i = 0; i < actualSize; i++)
  {
    num = num ^ arr[i];
    cout << num << " , ";
  }
  cout << endl;
  cout << "unquie number : " << num << " , " << endl;
}
int main()
{
  int num_size = 0, choice = 0;

  cout << " enter the  choice in between 1 to 4 " << endl;
  cin >> choice;
  array objarray;
 cout << " enter the size of the array for integer" << endl;
    cin >> num_size;
  switch (choice)
  {
   
  case 1:
    objarray.array_fun(&num_size);
    break;
  case 2:
    objarray.sumofarray(&num_size);
    break;
  case 3:
    ReaptedValueArr(&num_size);
    break;
  case 4:
    unquieValueArr();
    break;

  default:
    cout << " invalid choice " << endl;
    break;
  }
  return 0;
}
