import java.util.Scanner;

public class Factorial {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int num, fact = 1;
		int i = 1;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the Number for factorial :");
		num = sc.nextInt();
		while (i < num) {
			fact = fact * num;
			num--;

		}
		System.out.println("The factorial is :" + fact);

	}

}
