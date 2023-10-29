import java.io.*;

class CheckedException {
    public static void main(String[] args) {
        /*
         * File 'C:\\test\\a.txt' tidak ada.
         * Maka program tidak akan bisa dijalankan.
         * Program akan mengeluarkan FileNotFoundException
         * yang mana merupakan child dari IOException
         * IOException merupakan Checked exception
         */
        FileReader file = new FileReader("C:\\test\\a.txt");
        BufferedReader fileInput = new BufferedReader(file);

        for (int counter = 0; counter < 3; counter++) {
            System.out.println(fileInput.readLine());
        }

        fileInput.close();
    }
}