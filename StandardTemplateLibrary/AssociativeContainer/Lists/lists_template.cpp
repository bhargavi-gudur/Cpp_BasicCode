/**
 * @file lists_template.cpp
 * @author gandla bhargavi
 * @brief  This program demonstrates the use of STL list template class.
 * @details The program creates a list of integers and a list of floats,
 * allowing the user to input values for each list.
 * @version 0.1
 * @date 2025-05-27
 *
 */
#include <iostream>
#include <list>
using namespace std;

/**
 * @brief A template class that creates a list of a specified data type.
 * @tparam DT The data type of the list elements.
 */
template <class DT>
class list_stl
{
public:
    list<DT> lists;
    list_stl()
    {
        int size;
        DT num;
        cout << " enter the size :" << endl;
        cin >> size;
        cout << "enter the numbers" << endl;
        for (DT i = 0; i < size; i++)
        {
            cin >> num;
            lists.push_back(num);
        }
    }
    /**
     * @brief Displays the elements of the list.
     */
    void display()
    {

        for (const auto &mylist : lists)
        {
            cout << mylist << " | ";
        }
        cout << endl;
    }
    ~list_stl() {}
};
/**
 * @brief The main function that creates instances of the list_stl class for int and float types.
 * @return int
 */
int main()
{
    cout << "*********STL INTEGER  LIST TEMPLATE*********" << endl;
    list_stl<int> objlist_stl_int;
    objlist_stl_int.display();
    cout << "*********STL FLOAT LIST TEMPLATE*********" << endl;
    list_stl<float> objlist_stl_float;
    objlist_stl_float.display();
    cout << "*********STL DOUBLE LIST TEMPLATE*********" << endl;
    list_stl<double> objlist_stl_double;
    objlist_stl_double.display();
    cout << "*********STL CHAR LIST TEMPLATE*********" << endl;
    list_stl<char> objlist_stl_char;
    objlist_stl_char.display();

    return 0;
}