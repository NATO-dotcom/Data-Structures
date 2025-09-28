package ARRAYS.ArrayUpdate;

public class arr {
    public static void main(String []args) {
        int LA[] = new int[3];
        int n = LA.length;
        System.out.println("Array Before Update:");
        for(int i = 0; i < n; i++) {
            LA[i] = i + 3;
            System.out.println("LA[" + i + "] = " + LA[i]);
        }
        //Updating an element in an array
        LA[1] = 10;
        System.out.println("Array After Update:");
        for(int i = 0; i < n; i++) {
            System.out.println("LA[" + i + "] = " + LA[i]);
        }
    }
}
