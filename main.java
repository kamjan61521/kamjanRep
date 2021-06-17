import java.util.Scanner;

    public class main {
        public static void main(String[] args) throws InterruptedException {
            System.out.print("Oto kalkulator");
            for(int i=0; i<=4; i++) {
                System.out.print(".");
                Thread.sleep(1000);
            }
            Scanner scanner = new Scanner(System.in);
            System.out.print("\n\nWpisz pierwszą liczbę:\n");
            int a = scanner.nextInt();
            System.out.print("Wpisz drugą liczbę:\n");
            int b = scanner.nextInt();
            System.out.println("Wybierz działanie (*,/,+,-)");
            String operation = scanner.next();
            String wynik = "wynik działania to: ";

            switch (operation) {
                case "*":
                    System.out.println(wynik + ( a * b ));
                    break;
                case "/":
                    System.out.println(wynik + ( a / b ));
                    break;
                case "+":
                    System.out.println(wynik + ( a + b ));
                    break;
                case "-":
                    System.out.println(wynik+ ( a - b ));
                    break;
                default: System.out.println("Błąd");
            }
            scanner.close();
        }
    }
