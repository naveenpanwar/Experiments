import java.util.*;
import java.util.concurrent.TimeUnit;

public class Datum {
	public static void main(String[] args) throws InterruptedException {
		Date date1 = new Date();
		TimeUnit.SECONDS.sleep(2);
		Date date2 = new Date();
		TimeUnit.SECONDS.sleep(2);
		Date date3 = new Date();

		if (date1.before(date2)) {
			System.out.println("Date 1 is smaller than Date 2");
		}
		else {
			System.out.println("Date 2 is smaller than Date 1");
		}

		if (date2.before(date3)) {
			System.out.println("Date 2 is smaller than Date 3");
		}
		else {
			System.out.println("Date 3 is smaller than Date 2");
		}

		System.out.println(getStartOfDay());
		System.out.println(getEndOfDay());
	}


    private static Date getStartOfDay() {
        Calendar calendar = Calendar.getInstance();
        int year = calendar.get(Calendar.YEAR);
        int month = calendar.get(Calendar.MONTH);
        int day = calendar.get(Calendar.DATE);
        calendar.set(year, month, day, 0, 0, 0);
        return calendar.getTime();
    }

    private static Date getEndOfDay() {
        Calendar calendar = Calendar.getInstance();
        int year = calendar.get(Calendar.YEAR);
        int month = calendar.get(Calendar.MONTH);
        int day = calendar.get(Calendar.DATE);
        calendar.set(year, month, day, 23, 59, 59);
        return calendar.getTime();
    }
}




