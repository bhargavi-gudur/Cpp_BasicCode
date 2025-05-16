/**
 * @file deque.cpp
 * @author Gandla Bhargavi
 * @brief Implementation of a double-ended queue (deque) in C++
 * @version 0.1
 * @date 2025-05-14
 *
 */
#include <iostream>
#include <deque>
#include <list>
#include <vector>
using namespace std;
void deque_concept_inbuilt()
{
    deque<int> d = {2, 6, 7, 9, 90};
    cout << "size:" << d.size() << endl;
    cout << "third element = " << d[2] << endl;
    for (auto it : d)
    {
        cout << it << '|';
    }
    cout << endl;

    cout << "front:" << d.front() << " | " << "back : " << d.back() << endl;
    cout << "iterator" << endl;
    deque<int>::iterator it;
    for (it = d.begin(); it != d.end(); it++)
    {
        cout << *it << '|';
    }
    cout << endl;

    cout << "empty:" << d.empty() << endl;
    cout << "insert:" << endl;
    d.push_back(100);
    d.push_front(200);
    for (auto it : d)
    {
        cout << it << '|';
    }
    cout << endl;
    cout << "reverse iterator" << endl;
    deque<int>::reverse_iterator rev_it;
    for (rev_it = d.rbegin(); rev_it != d.rend(); rev_it++)
    {
        cout << *rev_it << '|';
    }
    cout << endl;
    cout << "erase:" << endl;
    d.erase(d.begin() + 2, d.begin() + 4);
    for (auto it : d)
    {
        cout << it << '|';
    }
    cout << endl;
    cout << "clear:" << endl;
    d.clear();
    cout << "size:" << d.size() << endl;
    cout << "empty:" << d.empty() << endl;
    cout << "push_back:" << endl;
    d.push_back(100);
    d.push_back(200);
    for (auto it : d)
    {
        cout << it << '|';
    }
    cout << endl;
}
int main()
{
    deque_concept_inbuilt();
    return 0;
}

// size
//=,[]
// front(),back()
// empty()
//  begin(),end(),rbegin(),rend()
// insert(),erase()
// clear()
// push_back(),push_front(),pop_back(),pop_front()
