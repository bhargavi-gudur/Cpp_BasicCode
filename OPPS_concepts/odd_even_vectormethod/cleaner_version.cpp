#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

class Number_evenORodd
{
private:
    int number; // private member

public:
    // Constructor stores the number
    Number_evenORodd(int num) : number(num) {}

    // Function to display odd/even
    void display()
    {
        if (number % 2 == 0)
            cout << "The given number is even: " << number << endl;
        else
            cout << "The given number is odd: " << number << endl;
    }

    ~Number_evenORodd() {}
};

int main()
{
    vector<int> vec;
    int value;

    cout << "Enter numbers (0 to stop):" << endl;
    while (true)
    {
        cin >> value;
        if (value == 0)
            break; // stop input
        vec.push_back(value);
    }

    // Create objects for each number and display separately
    for (auto num : vec)
    {
        Number_evenORodd obj(num);
        obj.display();
    }

    return 0;
}
