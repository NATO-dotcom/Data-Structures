#include <iostream>
using namespace std;
int main()
{
    int LA[] = {1,3,5,7,8};
   int n = 5, item = 10;
   int i, j;
    cout << "The original array elements are :" << endl;
    for(i = 0; i<n; i++) {
        cout << "LA[" << i << "] = " << LA[i] << endl;
    }
   LA[2] = item;
    cout << "The array elements after updation :" << endl;
    for(i = 0; i<n; i++) {
        cout << "LA[" << i << "] = " << LA[i] << endl;
    }
    return 0;
}