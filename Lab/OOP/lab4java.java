import java.io.*;

public class lab4java {
    public static void main(String[] args) {
        try {
            FileWriter file = new FileWriter("tt.txt");
            String roll = "12";
            String name = "Arif";
            file.write("Roll: " + roll);
            file.write("\n");
            file.write("Name: " + name);
            file.close();
            System.out.print("Data written succesfully.");
        } catch (IOException e) {
            System.out.println("An error occured" + e.getMessage());
        }
    }
}
