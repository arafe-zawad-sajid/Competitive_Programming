// Long Contest 1, Problem V
import java.nio.charset.Charset;
import java.lang.StringBuilder;
import java.io.InputStream;
import java.io.OutputStream;
import java.io.IOException;

import java.util.Arrays;

public class Main {
	public static void main(String[] args) {
		Charset charset = Charset.forName("ascii");
	    FastIO rd = new FastIO(System.in, System.out, charset);
	    
	    long n = rd.readLong();  // max num of rows
	    long m = rd.readLong();  // max num of cols
	    
	    long x = rd.readLong();  // initial row
	    long y = rd.readLong();  // initial col
	    
	    int k = rd.readInt();  // num of vectors
	    long steps = 0;
	    while(k-- > 0) {
	    	long dx = rd.readLong();  // row of vector
	    	long dy = rd.readLong();  // col of vector
	    	long stepx = 0;
	    	long stepy = 0;
	    	
	    	if(dx==0 && dy==0) {
	    		continue;
	    	}
	    	
	    	if(dx < 0) {
	    		long cells = x-1;
	    		stepx = cells/(-dx);
	    	}
	    	else if(dx > 0) {
	    		long cells = n-x;
	    		stepx = cells/dx;
	    	}
	    	if(dy < 0) {
	    		long cells = y-1;
	    		stepy = cells/(-dy);
	    	}
	    	else if(dy > 0) {
	    		long cells = m-y;
	    		stepy = cells/dy;
	    	}
	    	
	    	if(dx==0 && dy!=0) {
	    		steps += stepy;
	    		y += (stepy*dy);
	    	}
	    	else if(dy==0 && dx!=0) {
	    		steps += stepx;
	    		x += (stepx*dx);
	    	}
	    	else if(stepx > stepy) {
	    		steps += stepy;
	    		x += (stepy*dx);
	    		y += (stepy*dy);
	    	}
	    	else if(stepx < stepy) {
	    		steps += stepx;
	    		x += (stepx*dx);
	    		y += (stepx*dy);
	    	}
	    	else if(stepx==stepy) {
	    		steps += stepx;
	    		x += (stepx*dx);
	    		y += (stepy*dy);
	    	}
	    }
	    System.out.println(steps);
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