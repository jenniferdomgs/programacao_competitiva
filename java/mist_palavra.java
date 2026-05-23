import java.util.Scanner;

public class mist_palavra {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        String palavra = leitor.nextLine();

        char palavra1[] = new char[palavra.length() / 2];
        char palavra2[] = new char[palavra.length() / 2];
        for(int i = 0; i < palavra.length(); i++) {
            char letra = palavra.charAt(i);
                if(i % 2 == 0) {
                    palavra1[i / 2] = letra;
                } else {
                    palavra2[i / 2] = letra; 
                }
        }
        System.out.println(palavra1);
        System.out.println(palavra2);
        leitor.close();
    }
    
}