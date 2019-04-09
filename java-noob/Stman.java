public class Stman {
	public static void main(String[] args) {
		String s = "32 KM NW of Dehradun";
		int occ = s.indexOf("no");
		System.out.println(occ);
		String s1 = s.substring(0,occ+3);
		String s2 = s.substring((occ+3));
		System.out.println(s1);
		System.out.println(s2);
	}
}
