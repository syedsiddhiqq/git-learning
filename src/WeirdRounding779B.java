import java.util.Scanner;

public class WeirdRounding779B {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n =scan.nextInt();
        int k = scan.nextInt();
        int count=0,copy = n;
        while(k>0){
            if(n%10 == 0) k--;
            else count++;
            n = n/10;
        }
        if(n == 0) count = String.valueOf(copy).length() - 1;
        System.out.println(count);
    }
}
