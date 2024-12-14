public class lab9 {
    public static double calculate(double length, double width) {
        return length * width;
    }

    public static double calculate(double length, double width, double height) {
        return length * width * height;
    }

    public static void main(String[] args) {
        double length = 50.0;
        double width = 7.0;
        double height = 15.0;

        double area = calculate(length, width);
        double volume = calculate(length, width, height);

        System.out.println("Room Area: " + area + " square meters");
        System.out.println("Room Volume: " + volume + " cubic meters");
    }
}