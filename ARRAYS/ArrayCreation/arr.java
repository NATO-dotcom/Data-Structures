package ARRAYS.ArrayCreation;

public class arr 
{
        public static void main(String[] args) {
        int LA[] = new int[5]; // Local Array}
        for (int i=0;i<LA.length;i++){
            LA[i]=i+1;
        }
        for (int i=0;i<LA.length;i++){
            System.out.println(LA[i]);
	}
    }
}