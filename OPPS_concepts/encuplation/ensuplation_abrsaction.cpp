/**
 * @file ensuplation_abrsaction.cpp
 * @author gandla bhargavi
 * @brief This file demonstrates the concepts of encapsulation 
 * and abstraction in C++.
 * Encapsulation is the bundling of data and methods that operate
 *  on that data within a single unit (class).
 * @version 0.1
 * @date 2025-06-28
 * 
 */

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std ::string;

/**
 * @brief  class base_encapsulation
 * 
 */
class base_encapsulation
{
private:
    int socialid;

protected:
    string name;

public:
    base_encapsulation(string nameperson, int idperson)
    {
        name = nameperson;
        socialid = idperson;
    }
    void display()
    {
        cout << "name of the person :" << name << endl;
        cout << "id of the person :" << socialid << endl;
    }
    ~base_encapsulation() {}
};
/**
 * @brief  class derived_encapsulation
 * 
 */
class derived_encapsulation : public base_encapsulation
{
};
class implementAbstraction
{
private:
    int a, b;

public:
    // method to set values of
    // private members
    void set(int x, int y)
    {
        a = x;
        b = y;
        cin >> a;
        cin >> b;
    }

    void display_abrsation()
    {
        cin >> a;
        cin >> b;
        cout << "a = " << a << endl;

        cout << "b = " << b << endl;
    }
    ~implementAbstraction() {}
};
/**
 * @brief  class Vehicle
 * 
 */
class Vehicle
{
private:
    void piston()
    {
        cout << "4 piston\n";
    }

    void manWhoMade()
    {
        cout << "Markus Librette\n";
    }

public:
    void company()
    {
        cout << "GFG\n";
    }
    void model()
    {
        cout << "SIMPLE\n";
    }
    void color()
    {
        cout << "Red/GREEN/Silver\n";
    }
    void cost()
    {
        cout << "Rs. 60000 to 900000\n";
    }
    void oil()
    {
        cout << "PETROL\n";
    }
};
/**
 * @brief  main function calling the encapsulation and abstraction function.
 * 
 * @return int 
 */
int main()
{

    base_encapsulation obj_base_encapsulation("bhargavi", 90);
    obj_base_encapsulation.display();
    int a_x = 90, b_y = 890;
    implementAbstraction obj;
    obj.set(a_x, b_y);
    obj.display_abrsation();
    return 0;
}