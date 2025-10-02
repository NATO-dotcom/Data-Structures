//Java Program to delete a key in Skip List
import java.util.Random;

class Node {
    int key;
    Node[] forward;
    Node(int key, int level) {
        this.key = key;
        forward = new Node[level + 1];
    }
}

class SkipList {
   static final int MAX_LEVEL = 6;
   Node header;
   int level;
   SkipList() {
      header = new Node(Integer.MIN_VALUE, MAX_LEVEL);
      this.level = 0;
   }
   int randomLevel() {
      int level = 0;
      Random rand = new Random();
      while (rand.nextBoolean() && level < MAX_LEVEL)
         level++;
      return level;
   }
   Node searchNode(int key) {
      Node current = header;
      for (int i = level; i >= 0; i--) {
         while (current.forward[i] != null && current.forward[i].key < key)
            current = current.forward[i];
      }
      current = current.forward[0];
      if (current != null && current.key == key)
         return current;
      return null;
   }
   void deleteNode(int key) {
      Node current = header;
      Node[] update = new Node[MAX_LEVEL + 1];
      for (int i = level; i >= 0; i--) {
         while (current.forward[i] != null && current.forward[i].key < key)
            current = current.forward[i];
         update[i] = current;
      }
      current = current.forward[0];
      if (current != null && current.key == key) {
         for (int i = 0; i <= level; i++) {
            if (update[i].forward[i] != current)
               break;
            update[i].forward[i] = current.forward[i];
         }
         while (level > 0 && header.forward[level] == null)
            level--;
      }
   }
   void insertNode(int key) {
      Node current = header;
      Node[] update = new Node[MAX_LEVEL + 1];
      for (int i = level; i >= 0; i--) {
         while (current.forward[i] != null && current.forward[i].key < key)
            current = current.forward[i];
         update[i] = current;
      }
      current = current.forward[0];
      if (current == null || current.key != key) {
         int rlevel = randomLevel();
         if (rlevel > level) {
            for (int i = level + 1; i <= rlevel; i++)
               update[i] = header;
            level = rlevel;
         }
         Node newNode = new Node(key, rlevel);
         for (int i = 0; i <= rlevel; i++) {
            newNode.forward[i] = update[i].forward[i];
            update[i].forward[i] = newNode;
         }
      }
   }
   void displayList() {
      System.out.println("\nSkip List");
      for (int i = 0; i <= level; i++) {
         Node node = header.forward[i];
         System.out.print("Level " + i + ": ");
         while (node != null) {
            System.out.print(node.key + " ");
            node = node.forward[i];
         }
         System.out.println();
      }
   }

}
// Create Node

public class Main {
   public static void main(String[] args) {
      SkipList list = new SkipList();
      list.insertNode(3);
      list.insertNode(6);
      list.insertNode(7);
      list.insertNode(9);
      list.insertNode(12);
      list.insertNode(19);
      list.insertNode(17);
      list.insertNode(26);
      list.insertNode(21);
      list.insertNode(25);
      list.deleteNode(12);
      Node node = list.searchNode(12);
      System.out.println("Before deletion");
      list.displayList();
      if (node != null)
         System.out.println("Key found: " + node.key);
      else
         System.out.println("Key not found:");
      System.out.println("After deletion");
      list.displayList();
   }
}