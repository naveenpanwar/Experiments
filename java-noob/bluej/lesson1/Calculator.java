/* This is a file created outside bluej
 * please write your file name */

import java.util.Scanner;

public class Calculator {

	public static int plus() {
		int x,y,z;

		System.out.println("Please enter two numbers");
		Scanner sc = new Scanner(System.in);
		System.out.print("1:");
		x = sc.nextInt();
		System.out.println();
		System.out.print("2:");
		y = sc.nextInt();

		z = x + y;

		return z;

	}

	public static void main(String args[]) {
		System.out.println( plus() );
	}
}
