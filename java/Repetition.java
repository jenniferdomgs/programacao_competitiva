import java.util.Scanner;

public class Repetition {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        String seq = leitor.nextLine();
        int cont = 1;
        int maiorSeq = 1;

        for (int i = 1; i < seq.length(); i++) {
            if (seq.charAt(i) == seq.charAt(i - 1)) {
                cont++;
            } else {
                cont = 1;
            }
            if (cont > maiorSeq) {
                maiorSeq = cont;
            }
        }

        System.out.println(maiorSeq);
        leitor.close();
    }
}