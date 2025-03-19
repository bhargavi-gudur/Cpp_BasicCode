/**
 * @file DTmacro_oopConcept.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2025-03-18
 *
 * @copyright Copyright (c) 2025
 *
 */
/** data type ranges and their macros in c++*/
#include <iostream>
#include <climits> //int ,char  macors
#include <cfloat>  //float ,double macros
#include <limits>

const float FLOAT_MAX = FLT_MAX;
const float FLOAT_MIN = FLT_MIN;
using std::cout;
using std ::endl;

class base_limitsapproach
{
protected:
    short int a_min = std::numeric_limits<short int>::min();
    short int a_max = std::numeric_limits<short int>::max();

public:
    base_limitsapproach(int a_high, int a_low) : a_min(a_low), a_max(a_high) {}
    void base_numbericLimits()
    {
        cout << "short int ranges from: " << a_min << " to " << a_max << endl;
    }
    ~base_limitsapproach()
    {
        cout << " destructor called in base class " << endl;
    }
};
class derived_limitsapproach : public base_limitsapproach
{
private:
    long int b_min = std::numeric_limits<long int>::min();
    long int b_max = std::numeric_limits<long int>::max();

public:
    derived_limitsapproach() : base_limitsapproach(100, 230) {}
    void derived_numbericLimits()
    {
        cout << "short int ranges from: " << a_min << " to " << a_max << endl;
    }
    void dataTypeMcros()
    {
        cout << "char ranges from: " << CHAR_MIN << " to " << CHAR_MAX << endl;
        cout << "int ranges from: " << INT_MIN << " to " << INT_MAX << endl;
        cout << "FLOAT ranges from: " << FLOAT_MAX << " to " << FLOAT_MIN << endl;
        cout << "LONG ranges from: " << LONG_MIN << " to " << LONG_MAX << endl;
    }
    ~derived_limitsapproach()
    {
        cout << " destructor called in derived class " << endl;
    }
};

void dataTypeMcros();
int main()
{
    cout << "***********************************" << endl
         << endl;
    ;
    cout << " class and object" << endl;
    cout << "***********************************" << endl
         << endl;
    cout << "1. base class type " << endl;
    base_limitsapproach obj_base_numbericLimits(6, 89);
    obj_base_numbericLimits.base_numbericLimits();
    cout << "***********************************" << endl;
    cout << "2. derived class type " << endl;
    derived_limitsapproach obj_derived_numbericLimits;
    cout << "***********************************" << endl;
    obj_derived_numbericLimits.derived_numbericLimits();
    obj_derived_numbericLimits.dataTypeMcros();
    cout << "***********************************" << endl;

    return 0;
}
