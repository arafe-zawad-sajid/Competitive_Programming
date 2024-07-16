// spoj PRIME1
import java.nio.charset.Charset;
import java.lang.StringBuilder;
import java.io.InputStream;
import java.io.OutputStream;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

import java.util.ArrayList;

public class Main {
    public static ArrayList<Integer> simple_sieve(int max) {
        ArrayList<Integer> primes = new ArrayList<Integer>();
        boolean[] non_prime = new boolean[max+1];

        for(int i=2; i <= max; i++) {
            if(non_prime[i] == false) {
                primes.add(i);
                for(int j=i; j <= max; j+=i) {
                    non_prime[j] = true;
                }
            }
        }

        return primes;
    }

    public static void primes_in_range(int low, int high) throws java.lang.Exception {
    	BufferedWriter bw=new BufferedWriter(new OutputStreamWriter(System.out));
    	
        int lim = (int) Math.sqrt(high);
        ArrayList<Integer> primes = simple_sieve(lim);

        int n = high-low+1;
        boolean[] non_prime = new boolean[n+1];
        for(int i=0; i < primes.size(); i++) {
            int prime = primes.get(i);
            int lb = low/prime*prime;
            if(lb < low) {
                lb += prime;
            }
            if(lb == prime) {
                lb += prime;
            }

            for(int j=lb; j <= high; j+=prime) {
                non_prime[j-low] = true;
            }
        }

        if(low == 1) {
            non_prime[0] = true;
        }

        for(int i=low; i <= high; i++) {
            if(non_prime[i-low] == false) {
                bw.write(i+"\n");
            }
        }
        bw.flush();
    }
	
	public static void main(String[] args) throws java.lang.Exception {
		Charset charset = Charset.forName("ascii");
	    FastIO rd = new FastIO(System.in, System.out, charset);
	    
	    int t = rd.readInt();
	    while(t-- > 0) {
	    	int m = rd.readInt();
	    	int n = rd.readInt();
	    	primes_in_range(m, n);
	    	System.out.println();
	    }
	}
}


class FastIO {
    public final StringBuilder cache = new StringBuilder(1 << 20);
    private final InputStream is;
    private final OutputStream os;
    private final Charset charset;
    private StringBuilder defaultStringBuf = new StringBuilder(1 << 8);
    private byte[] buf = new byte[1 << 13];
    private int bufLen;
    private int bufOffset;
    private int next;
    
    public FastIO(InputStream is, OutputStream os, Charset charset) {
        this.is = is;
        this.os = os;
        this.charset = charset;
    }
    
    public FastIO(InputStream is, OutputStream os) {
        this(is, os, Charset.forName("ascii"));
    }
    
    private int read() {
        while (bufLen == bufOffset) {
            bufOffset = 0;
            try {
                bufLen = is.read(buf);
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
            if (bufLen == -1) {
                return -1;
            }
        }
        return buf[bufOffset++];
    }
    
    public void skipBlank() {
        while (next >= 0 && next <= 32) {
            next = read();
        }
    }
    
    public int readInt() {
        int sign = 1;
        
        skipBlank();
        if (next == '+' || next == '-') {
            sign = next == '+' ? 1 : -1;
            next = read();
        }
        
        int val = 0;
        if (sign == 1) {
            while (next >= '0' && next <= '9') {
                val = val * 10 + next - '0';
                next = read();
            }
        } else {
            while (next >= '0' && next <= '9') {
                val = val * 10 - next + '0';
                next = read();
            }
        }
        
        return val;
    }
    
    public long readLong() {
        int sign = 1;
        
        skipBlank();
        if (next == '+' || next == '-') {
            sign = next == '+' ? 1 : -1;
            next = read();
        }
        
        long val = 0;
        if (sign == 1) {
            while (next >= '0' && next <= '9') {
                val = val * 10 + next - '0';
                next = read();
            }
        } else {
            while (next >= '0' && next <= '9') {
                val = val * 10 - next + '0';
                next = read();
            }
        }
        
        return val;
    }
    
    public double readDouble() {
        boolean sign = true;
        skipBlank();
        if (next == '+' || next == '-') {
            sign = next == '+';
            next = read();
        }
        
        long val = 0;
        while (next >= '0' && next <= '9') {
            val = val * 10 + next - '0';
            next = read();
        }
        if (next != '.') {
            return sign ? val : -val;
        }
        next = read();
        long radix = 1;
        long point = 0;
        while (next >= '0' && next <= '9') {
            point = point * 10 + next - '0';
            radix = radix * 10;
            next = read();
        }
        double result = val + (double) point / radix;
        return sign ? result : -result;
    }
    
    public String readString(StringBuilder builder) {
        skipBlank();
        
        while (next > 32) {
            builder.append((char) next);
            next = read();
        }
        
        return builder.toString();
    }
    
    public String readString() {
        defaultStringBuf.setLength(0);
        return readString(defaultStringBuf);
    }
    
    public String readLine() {
        skipBlank();
        String s="";
        int offset = 0;
        while (next != -1 && next != '\n') {
            s += (char) next;
            next = read();
        }
        return s;
    }
    
    public int readString(char[] data, int offset) {
        skipBlank();
        
        int originalOffset = offset;
        while (next > 32) {
            data[offset++] = (char) next;
            next = read();
        }
        
        return offset - originalOffset;
    }
    
    public int readString(byte[] data, int offset) {
        skipBlank();
        
        int originalOffset = offset;
        while (next > 32) {
            data[offset++] = (byte) next;
            next = read();
        }
        
        return offset - originalOffset;
    }
    
    public char readChar() {
        skipBlank();
        char c = (char) next;
        next = read();
        return c;
    }
    
    public void flush() {
        try {
            os.write(cache.toString().getBytes(charset));
            os.flush();
            cache.setLength(0);
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }
    
    public boolean hasMore() {
        skipBlank();
        return next != -1;
    }
}