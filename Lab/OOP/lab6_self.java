import java.io.*;
import java.util.Scanner;
public class lab6_self{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter Name: ");
        String name = input.nextLine();
        System.out.print("Enter roll: ");
        int roll = input.nextInt();
        input.close();

        try{
        FileWriter writer = new FileWriter("testing.txt");
        writer.write("Name: "+name);
        writer.write("\n");
        writer.write("Roll: "+ roll);
        System.out.print("Data written succesfully.\n");
        writer.close();

    } catch(IOException e){
        System.out.print("ERROR creating file.");
    }
    try{
        BufferedReader read = new BufferedReader(new FileReader("testing.txt"));
        String line;
        while((line = read.readLine())!= null){
            System.out.print(line+"\n");
        }
        read.close();
    } catch (IOException e){
        System.out.println("ERRor reading file.");
    }

}
}