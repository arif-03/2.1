import java.io.*;
import java.util.Scanner;

public class lab6 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter your name: ");
        String name = scanner.nextLine();

        System.out.print("Enter your roll number: ");
        int rollNumber = scanner.nextInt();

        try {
            FileWriter writer = new FileWriter("test1.txt");
            writer.write("Name: " + name + "\nRoll Number: " + rollNumber);
            writer.close();

            System.out.println("Data written to file successfully!");
        } catch (IOException e) {
            System.out.println("An error occurred while writing to the file.");
        }

        try (BufferedReader br = new BufferedReader(new FileReader("test1.txt"))) {
            System.out.println("Displaying the information :");
            String line;
            while ((line = br.readLine()) != null) {
                System.out.println(line);
            }
        } catch (IOException e) {
            System.out.println("An error occurred while reading the file.");
        }
        scanner.close();
    }
}