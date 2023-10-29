import java.util.Scanner;

class UncheckedException {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int x = 0;
        int y = 10;

        System.out.println("ENTER untuk lanjutkan");
        input.nextLine();

        int z = y / x;
        // ArithmeticException.
        // Suatu bilangan tidak boleh dibagi dengan 0

        System.out.println("Hasil z = " + z);
    }
}