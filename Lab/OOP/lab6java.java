import java.io.*;
import java.util.Scanner;
public class lab6java {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter your name: ");
        String name = input.nextLine();
        System.out.print("Enter your roll:");
        int roll = input.nextInt();
        input.close();
        try{
        FileWriter file = new FileWriter("tt.txt");
        
        file.write("Roll: "+roll);
        file.write("\n");
        file.write("Name: "+name);
        file.close();
        System.out.print("Data written succesfully.\n");
        }
        catch(IOException e){
            System.out.println("An error occured\n"+ e.getMessage());
        }

        try{
            FileReader file = new FileReader("tt.txt");
            BufferedReader read = new BufferedReader(file);
            String line;
            while((line = read.readLine())!= null){
                System.out.println(line);
                
            }
        }
        
            catch (IOException e){
                System.out.println("Error"+e.getMessage());
            }
        }
    }
