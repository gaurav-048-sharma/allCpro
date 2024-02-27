public class Rec {
    public static int recur(int n) {
        if (n == 1) {
            return 1;
        }
        int fn = n * recur(n - 1);
        return fn;
    }

    public static int rec(int n) {
        if (n == 1) {
            System.out.println(recur(n));
            return recur(n + 1);
        }
        int fn = n * rec(n - 1);
        int f = fn * fn;
        System.out.println("f(" + n + ")=" + f + "= ");
        return f;
    }

    public static void main(String args[]) {
        // System.out.println(rec(4));
        rec(4);
    }
}