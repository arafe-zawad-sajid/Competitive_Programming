// spoj TDPRIMES
import java.nio.charset.Charset;
import java.lang.StringBuilder;
import java.io.InputStream;
import java.io.OutputStream;
import java.io.IOException;

import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Main {
	static int[] status;
	public static int check(int idx, int pos) {
        return idx&(1<<pos);
    }

    public static int mark(int idx, int pos) {
        return idx|(1<<pos);
    }

    // bitwise sieve
    public static void bitsieve(int max) {
        status = new int[(max>>5)|1];  // 1=composite, 0=prime
        int sqrt = (int) Math.sqrt(max);
        for(int i=3; i<=sqrt; i+=2) {  // starting from 3, skipping all even numbers
            if(check(status[i>>5], i&31)==0) {  //if prime
                for(int j=i*i; j<=max; j+=(i<<1)) {
                    status[j>>5] = mark(status[j>>5], j&31);
                }
            }
        }
    }

	public static void main(String[] args) throws IOException {
		//Charset charset = Charset.forName("ascii");
	    //FastIO rd = new FastIO(System.in, System.out, charset);
	    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	    int max = 100000000;
	    bitsieve(max);

	    int count = 1;
	    bw.write("2\n");
	    for(int i=3; i<=max; i+=2) {
            if(check(status[i>>5], i&31)==0) {
            	if(count%100==0) {
            		bw.write(i+"\n");
                    bw.flush();
            	}
            	count++;
            }
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
