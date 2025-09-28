#include <stdio.h>
void main(){
   int LA[] = {1,3,5,7,8};
   int item = 5, n = 5;
   int i = 0;
    //Searching an element in an array
   for(i = 0; i<n; i++) {
      if( LA[i] == item ) {
         printf("Found element %d at position %d\n", item, i+1);
      }
   }
   return 0;
}