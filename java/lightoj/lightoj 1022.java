import java.lang.Math;
import java.io.InputStreamReader;
import java.io.BufferedReader;
 
public class Main {
	public static void main (String[] args) throws Exception{
		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(isr);
 
		int t = Integer.parseInt(br.readLine());
 
		int i = 0;
		double pi = 2.0 * Math.acos(0.0);
		while (i < t){
			double radius = Double.parseDouble(br.readLine());
			double area_square = (radius + radius) * (radius + radius);
			double area_circle = pi * radius * radius;
			double result = area_square - area_circle;
			double roundoff = result + 0.000000001;
 
			i++;
			System.out.printf("Case %d: %.2f\n", i, roundoff);
		}
 
	}
}