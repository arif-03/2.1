class NumberDisplay {
    public void display(int num1, int num2) {
        System.out.println("Number 1: " + num1);
        System.out.println("Number 2: " + num2);
    }
}

class DisplayOverride extends NumberDisplay {
    @Override
    public void display(int num1, int num2) {
        System.out.println("Overridden Display:");
        super.display(num1, num2);
    }
}

public class lab10 {
    public static void main(String[] args) {
        NumberDisplay originalDisplay = new NumberDisplay();
        originalDisplay.display(10, 20);

        DisplayOverride overriddenDisplay = new DisplayOverride();
        overriddenDisplay.display(30, 40);
    }
}
