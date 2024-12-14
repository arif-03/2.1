class original{
    void display(int x,int y){
        System.out.print("Number 1: "+x+"\n");
        System.out.print("Number 2: "+y+"\n");
    }
}
class overriding extends original {
    void display(int a,int b){
        System.out.print("This is overriding printing: \n");
        super.display(a, b);
    }
}


public class lab10_test {
    public static void main(String[] args) {
        original or =new original();
        overriding over=new overriding();
        or.display(10, 20);
        over.display(30, 40);
    }
    
}
