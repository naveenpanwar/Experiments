import java.io.*;

public class SimpleInterest {
	public static void main(String[] args) throws IOException {
		double principal;
		System.out.println("Enter some digit");
		InputStreamReader p = new InputStreamReader(System.in);
		BufferedReader b = new BufferedReader(p);
		principal = Double.parseDouble(b.readLine());
		System.out.println(principal);
	}
}
