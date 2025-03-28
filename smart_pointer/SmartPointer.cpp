/**
 * @file SmartPointer.cpp
 * @author Gandla Bhargavi
 * @brief to demonstrate the use of smart pointers in c++ .
 * @version 0.1
 * @date 2025-03-27
 *
 */

#include <iostream>
#include <memory>

// namespaces to avoid std:: prefix
using std ::cin;
using std::cout;
using std::endl;
using std::make_unique;
using std::unique_ptr;

/**
 * @brief  class to demonstrate the use of
 * smart pointers in c++ .
 *
 */
class rect
{
public:
    rect()
    {
        cout << " rectngle constructor created " << endl;
    }
    ~rect()
    {
        cout << " rectngle destructor created " << endl;
    }
};
/**
 * @brief  main function to demonstrate the use of
 * smart pointers in c++ .
 *
 * @return int
 */
int main()
{

    unique_ptr<int> uniPtr1 = make_unique<int>(25);
    cout << "uniqueptr" << *uniPtr1 << endl;
    cout << "uniqueptr" << &uniPtr1 << endl;

    std::shared_ptr<rect> ptr_shared = std::make_shared<rect>();
    // shared_ptr is a smart pointer that retains shared ownership of an object through a pointer.
    // Several shared_ptr objects may own the same object.
    // The object is destroyed and its memory deallocated when either the last remaining shared_ptr pointing to it is destroyed or reset.
    {
        std::shared_ptr<rect> ptr_shared2 = ptr_shared;
        cout << "count" << ptr_shared.use_count() << endl;
        cout << "count" << ptr_shared2.use_count() << endl;
    }
    cout << "count" << ptr_shared.use_count() << endl;
    return 0;
}
