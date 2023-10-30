package rockpaperscissor;

import java.util.*;

public class RockPaperScissor {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Random rand = new Random();

        int pCounter, cCounter;
        pCounter = 0;
        cCounter = 0;
        while (true) {

            System.out.print("Make your choice Rock, Paper or Scissor(type 'Exit' to quit): ");
            String player = input.nextLine();
            if (player.equals("Exit") || player.equals("exit")) {
                break;
            }
            if (!(player.equals("Paper")) && !(player.equals("Rock")) && !(player.equals("Scissor"))
                    && !(player.equals("paper")) && !(player.equals("rock")) && !(player.equals("scissor"))) {
                continue;
            }
            int computer = rand.nextInt(3);

            if (computer == 0) {
                System.out.println("Computer choosed Rock");
            } else if (computer == 1) {
                System.out.println("Computer choosed Paper");
            } else if (computer == 2) {
                System.out.println("Computer choosed Scissor");
            }
            switch (player) {
                case "Rock":
                case "rock":
                    if (computer == 0) {
                        System.out.println("It is Draw");
                    } else if (computer == 1) {
                        System.out.println("Computer won");
                        cCounter++;
                    } else if (computer == 2) {
                        System.out.println("You won");
                        pCounter++;
                    }
                    break;
                case "Paper":
                case "paper":
                    if (computer == 0) {
                        System.out.println("You won");
                        pCounter++;
                    } else if (computer == 1) {
                        System.out.println("It is Draw");
                    } else if (computer == 2) {
                        System.out.println("Computer won");
                        cCounter++;
                    }
                    break;
                case "Scissor":
                case "scissor":
                    if (computer == 0) {
                        System.out.println("Computer won");
                        cCounter;
                    } else if (computer == 1) {
                        System.out.println("You won");
                        pCounter++;
                    } else if (computer == 2) {
                        System.out.println("It is Draw");
                    }
                    break;

            }

        }
        System.out.printf("Your score : %d%n", pCounter);
        System.out.printf("Computers score : %d%n", cCounter);
    }

}
