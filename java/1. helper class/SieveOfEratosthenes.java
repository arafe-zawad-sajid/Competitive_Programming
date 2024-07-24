package PrimeNumberGenerator;

import java.util.Arrays;
import java.util.ArrayList;

public class SieveOfEratosthenes {

	public static void main(String[] args) {
		int lower_bound = 0; 
		int upper_bound = 10000;
		
		SieveOfEratosthenes.usingArray(lower_bound, upper_bound);

	}

//using array
	public static void usingArray(int lowerbound, int upperbound) {
		boolean[] marked_sieve = markSieve(lowerbound, upperbound);
		
		int count=1;
		for(int i=2; i<=upperbound; i++) {
			if(marked_sieve[i] == true) {
				System.out.println(count + ")" + i);
				count++;
			}
		}
	}
	
	public static boolean[] markSieve(int lowerbound, int upperbound) {
		boolean[] isPrime = new boolean[upperbound+1];
		
		Arrays.fill(isPrime, true);
		
		isPrime[0] = isPrime[1] = false;
		
		if(lowerbound <=1) {
			lowerbound = 2;
		}
		
		for(int i=lowerbound; i*i<=upperbound; i++) {
			if(isPrime[i]==true) {
				for(int multiples=i*i; multiples<=upperbound; multiples+=i) {
					isPrime[multiples] = false;
				}
			}
		}
		
		return isPrime;
	}

}
