/** operations arrays in data structures
*/
/*inseration of array*/
#include <iostream>
using namespace std ;
void traverseOfArray();
void traverseOfArray(int array_num);

int main() 
{
    int array_num=0;
    int looping = 4;
   
   
   //traverseOfArray();
   for(int i = 0; i <= looping; i++)
   {
   cout<<"enter a number to insert into the array : "<<endl;
   cin>>array_num;
   traverseOfArray(array_num);
   }
}
void traverseOfArray()
{
  
    int size ;
    int i;
    cout<<"enter the size of the array : "<<endl;
    cin >>size;
    int a[size];  // decalaration
    cout<<"enter the array value :"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"dispaly the array value :"<<endl;
    for(auto values:a)
    {
        cout<<"array"<<values<<endl;
    }
    
}
void traverseOfArray(int array_num)
{
    static int size =0;
    static int a[4];
    if(size<4)
    {
       a[size] = array_num;
       size++;
    }
    else
    {
         cout<<"array is full cannot insert new numbers."<<endl;
    }
   for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "]: " << a[i] << endl;
    }
        
    }

