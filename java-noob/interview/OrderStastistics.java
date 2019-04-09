import java.io.*;
import java.util.*;

public class OrderStastistics {
	public static void main(String args[]) {
		int[] arr = {66,20,9,40,20,10,9,70,99,5,7,3};
		for(int i=0;i<arr.length;i++) {
			System.out.println("Returned" + nThSmallest(arr,i));
		}
	}

	public static int nThSmallest(int[] arrOS, int n) {
		int[] arr = arrOS;
		int marker = 0;
		for(int i=1;i<arr.length;i++) {
			if( arr[i] < arr[marker] ) {
				if ( ( i-marker ) > 1 ) {
					int t = arr[marker+1];
					arr[marker+1] = arr[i];
					arr[i] = t;

					t = arr[marker+1];
					arr[marker+1] = arr[marker];
					arr[marker] = t;
					marker++;
				}
				else {
					int t = arr[i];
					arr[i] = arr[marker];
					arr[marker] = t;
					marker++;
				}
			}
		}

		for(int i=0;i<arr.length;i++) {
			System.out.print(arr[i]+", ");
		}
		System.out.println();
		
		System.out.println(marker);
		System.out.println("Wanted "+n);

		if( n > marker ) { 
			return nThSmallest(Arrays.copyOfRange(arr, marker+1, arr.length), n-(marker+1));
		}
		else if ( n < marker ) {
			return nThSmallest(Arrays.copyOfRange(arr, 0, marker), n);
		} else {
			return arr[marker];
		}
	}
}
