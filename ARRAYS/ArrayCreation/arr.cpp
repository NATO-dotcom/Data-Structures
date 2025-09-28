#include <iostream>
using namespace std;
int main()
{
    int LA[5]={}, i;
    //Assigning values to an array
    for(i=0; i<5; i++)
    {
        LA[i] = i + 1;
    }
     //Printing the elements in an array   
    for(i=0; i<5; i++)
        cout << LA[i] << endl;
        //cout<<"LA["<<i<<"] = "<<LA[i]<<endl;
    return 0;
}