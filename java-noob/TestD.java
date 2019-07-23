import java.util.Date;

public class TestD {
	public static void main(String[] args) {
		double STAMP = Double.parseDouble("1533710511.001327");
		double STAMP2 = Double.parseDouble("1533220467.435111");
		Date date = new Date((long)Math.floor(STAMP*1000));
		Date date2 = new Date((long)Math.floor(STAMP2*1000));

		System.out.println(date);
		System.out.println(date2);
	}
}
