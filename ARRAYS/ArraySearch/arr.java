package ARRAYS.ArraySearch;

public class arr {
   public static void main(String []args) {
      int LA[] = {1,3,5,7,8};
      int item = 5, n = LA.length;
      //Searching an element in an array
      for(int i = 0; i<n; i++) {
         if( LA[i] == item ) {
            System.out.println("Found element " + item + " at position " + (i+1));
         }
      }
   }
}