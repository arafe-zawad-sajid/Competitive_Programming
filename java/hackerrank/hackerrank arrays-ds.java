/* package whatever; // don't place package name! */

import java.util.*;

/* Name of the class has to be "Main" only if the class is public. */
class Main{
	public static void main (String[] args){
		Scanner key=new Scanner(System.in);
		int t=key.nextInt();
		String s="";
		for(int i=0; i<t; i++){
			int tmp=key.nextInt();
			if(i==t-1){
				s=tmp+s;
			}
			else{
				s=" "+tmp+s;
			}
		}
		System.out.println(s);
	}
}