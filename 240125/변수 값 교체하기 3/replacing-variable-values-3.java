public class Main {
    public static void main(String[] args) {
        int temp;
        int a = 3, b = 5;
        temp = a;
        a = b;
        b = temp;
        System.out.printf("%d\n%d", a, b);
    }
}