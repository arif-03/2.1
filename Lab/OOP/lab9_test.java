public class lab9_test {
    public static double cal(double x, double y){
        return x*y;
    }
    public static double cal(double x, double y,double z){
        return x*y*z;
    }
    public static void main(String[] args) {
        double length = 50,width=7,height=6;

        double area = cal(length,width);
        double volume = cal(length,width,height);
        System.out.print("Area is: "+area+" Square meter.\n");
        System.out.print("Volume is: "+volume+" Qubic meter.\n");
    }
}
