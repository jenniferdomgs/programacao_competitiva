import java.util.Scanner;

public class sensor {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        int n = leitor.nextInt();
    
        for(int i = 0; i < n; i++) {
            int n1 = leitor.nextInt();
            int n2 = leitor.nextInt();
            int n3 = leitor.nextInt();
            System.out.println(n1 ^ n2 ^ n3);
        }
        leitor.close();
        }
}
