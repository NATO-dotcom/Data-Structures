#include <iostream>
using namespace std;
int main()
{
     int LA[] = {1,3,5,7,8};
   int item = 5, n = 5;
   int i = 0;
    //Searching an element in an array
   for(i = 0; i<n; i++) {
      if( LA[i] == item ) {
         cout << "Found element " << item << " at position " << i+1 << endl;
      }
   }
    return 0;
}