import java.util.Scanner;


// for git learning added the commments.
public class InitialBet {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int sum=0;
        for (int i = 0; i < 5; i++) {
            sum+=scanner.nextInt();
        }
        if(sum%5==0 && sum>0){
            System.out.println(String.format("%d",sum/5));
        }else{
            System.out.println("-1");
        }
    }
}
