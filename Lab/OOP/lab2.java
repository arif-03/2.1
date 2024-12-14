import java.util.Scanner;
public class lab2{
  public static void main(String[] args){
    Scanner input=new Scanner(System.in);
    System.out.print("Enter the length of the array: ");
    int n= input.nextInt();
    int[] arr = new int[n];
    System.out.print("Enter "+n+"elements of the array: ");
    for(int i=0;i<n;i++){
      arr[i]= input.nextInt();
    }

    for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
          if(arr[i]<arr[j]){
              int temp= arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
          }
      }
    }
    System.out.print("Sorted  array: ");
    for(int i=0;i<n;i++){
      System.out.print(arr[i]+" ");
    }
  }
}