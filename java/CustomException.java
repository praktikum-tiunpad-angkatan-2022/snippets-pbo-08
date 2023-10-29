class InvalidNumberException extends Exception {
    public InvalidNumberException() {
        super("Angka yang dimasukkan melanggar ketentuan");
    }
}

public class CustomException {
    public static boolean cekAngka(int angka) throws InvalidNumberException {
        if (angka < 0 || angka > 20)
            return true;
        else
            throw new InvalidNumberException();
    }

    public static void main(String[] args) {
        try {
            cekAngka(20);
        } catch (Exception e) {
            System.out.println("Terjadi error : \n" + e.getMessage());
        }
    }
}