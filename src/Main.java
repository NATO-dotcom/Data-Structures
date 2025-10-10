import java.util.Stack;
public class Main{
    public static void main (String[] args) {
        Stack<String>stack = new Stack<String>();
        stack.push("Minecraft");
        stack.push("Pubg");
        stack.push("Mini-militia");
        stack.push("GTA");
        stack.push("Slap and run");

        //remove elements
        stack.pop();
        System.out.println(stack.peek());
        //System.out.println(stack.isEmpty());

        //searching elements
        System.out.println(stack.search("Payback 2"));


        System.out.println(stack);

    }
}