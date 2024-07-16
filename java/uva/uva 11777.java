// Java Bootcamp Day 1, Problem A
import java.io.*;
import java.nio.charset.Charset;
import java.util.Arrays;

public class Main {
	public static String calculateGrade(double[] array) {
		double sum = 0;
		for(double val: array) {
			sum += val;
		}
		if(sum >= 90) {
			return "A";
		}
		else if(sum >= 80 && sum < 90) {
			return "B";
		}
		else if(sum >= 70 && sum < 80) {
			return "C";
		}
		else if(sum >= 60 && sum < 70) {
			return "D";
		}
		else if(sum < 60) {
			return "F";
		}
		return "";
	}
	
	public static void main(String[] args) {
		Charset charset = Charset.forName("ascii");
	    FastIO rd = new FastIO(System.in, System.out, charset);
	    
	    int t = rd.readInt();  // test case
	    int c = 1;
	    while(c <= t) {
	    	double[] array = new double[5];
	    	for(int i=0; i < 4; i++) {  //index 4 for avg test
	    		array[i] = rd.readDouble();
	    	}
	    	double[] test = new double[3];  // 3 tests
	    	for(int i=0; i < 3; i++) {
	    		test[i] = rd.readDouble();
	    	}
	    	Arrays.sort(test);
	    	array[4] = (test[1] + test[2]) / 2.0;
	    	
	    	String grade = calculateGrade(array);
	    	System.out.println("Case "+c+": "+grade);
	    	c++;
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
  
  public int readLine(char[] data, int offset) {
    int originalOffset = offset;
    while (next != -1 && next != '\n') {
      data[offset++] = (char) next;
      next = read();
    }
    return offset - originalOffset;
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