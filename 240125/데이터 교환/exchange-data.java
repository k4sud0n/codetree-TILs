public class Main {
    public static void main(String[] args) {
        int a = 5, b = 6, c = 7;
        int temp;
        temp = b;
        b = a;
        c = temp;
        a = c;
        System.out.printf("%d\n%d\n%d", a, b, c);
    }
}