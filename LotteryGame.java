package lotterygame;

import java.util.*;

public class LotteryGame {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Random rand = new Random();
        System.out.print("Enter a three digit integer : ");
        int guess = input.nextInt();
        int lottery = 100 + rand.nextInt(900);
        int guessD1 = guess / 100;
        int guessD2 = (guess / 10) % 10;
        int guessD3 = guess % 10;
        int lotteryD1 = lottery / 100;
        int lotteryD2 = (lottery / 10) % 10;
        int lotteryD3 = lottery % 10;
        System.out.printf("Lottery number is %d%n", lottery);
        if (guess == lottery) {
            System.out.println("Exact match the award is $10,000.");
        } else if ((guessD1 == lotteryD1 && guessD2 == lotteryD2 && guessD3 == lotteryD3)
                || (guessD1 == lotteryD1 && guessD2 == lotteryD3 && guessD3 == lotteryD2)
                || (guessD1 == lotteryD2 && guessD2 == lotteryD1 && guessD3 == lotteryD3)
                || (guessD1 == lotteryD3 && guessD2 == lotteryD1 && guessD3 == lotteryD2)
                || (guessD1 == lotteryD2 && guessD2 == lotteryD3 && guessD3 == lotteryD1)
                || (guessD1 == lotteryD3 && guessD2 == lotteryD2 && guessD3 == lotteryD1)) {
            System.out.println("Match all digits award is $3,000.");
        } else if (guessD1 == lotteryD1 || guessD1 == lotteryD2 || guessD1 == lotteryD3
                || guessD2 == lotteryD1 || guessD2 == lotteryD2 || guessD2 == lotteryD3
                || guessD3 == lotteryD1 || guessD3 == lotteryD2 || guessD3 == lotteryD3) {
            System.out.println("Match one digit award is $1,000.");

        } else {
            System.out.println("No Match try again.");
        }
    }

}
