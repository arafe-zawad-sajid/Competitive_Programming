import java.lang.Math;
import java.io.InputStreamReader;
import java.io.BufferedReader;

public class Main {
	public static void main (String[] args) throws Exception {
		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(isr);
		int T = Integer.parseInt(br.readLine());
		int cases = 1;
		while (cases <= T) {
			long sec = Long.parseLong(br.readLine());
			if (sec == 1) {
				System.out.printf("Case %d: %d %d\n", cases, 1, 1);
				cases++;
				continue;
			}
			
			long row = (int) Math.ceil(Math.sqrt(sec));
			long column = row;
			long median = (row * (row - 1)) + 1;
			if (sec == median) {  // for median, row = column
				System.out.printf("Case %d: %d %d\n", cases, row, column);
				cases++;
				continue;
			}
			
			if (row % 2 == 0) {  // if even
				if (sec > median) {
					// row = row;
					column = column - (sec - median);
				}
				else{
					// column = row;
					row = row - (median - sec);
				}
			}
			else {  // if odd
				if (sec > median) {
					// column = row;
					row = row - (sec - median);
				}
				else{
					// row = row;
					column = column - (median - sec);
				}
			}
			
			System.out.printf("Case %d: %d %d\n", cases, row, column);
			cases++;
		}
		
	}
}