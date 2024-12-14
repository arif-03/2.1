import java.io.*;
public class lab5java {
    public static void main(String[] args) {
        try{
        FileReader file = new FileReader("tt.txt");
        BufferedReader reader = new BufferedReader(file);
        String line;
        while((line= reader.readLine())!=null){
            System.out.println(line);
        }
        reader.close();
        }catch(IOException e){
            System.out.println("Unable to open file"+e.getMessage());
        }
    }
}
