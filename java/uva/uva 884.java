// Problem C
import java.io.*;
import java.nio.charset.Charset;
import java.util.ArrayList;

public class 884 {
	public static int countPrimeFactors(int num) {
		int count = 0;
		int max = (int) Math.sqrt(num);
		for(int div=2; div <= max; div++) {
			while(num%div ==0 && num>1) {
				count++;
				num /= div;
			}
		}
		if(num > 1) {
			count++;
		}
		return count;
	}
	public static int[] genNumUpto(int max) {
		int[] result = new int[max+1];
		result[1] = 0;
		for(int i=2; i<=max; i++) {
			result[i] = result[i-1] + countPrimeFactors(i);
		}
		return result;
    }

	public static void main(String[] args) {
		Charset charset = Charset.forName("ascii");
	    FastIO rd = new FastIO(System.in, System.out, charset);
	    
	    int max = 1000000;
	    int[] array = genNumUpto(max);
	    while(rd.hasMore()) {
	    	int num = rd.readInt();
	    	System.out.println(array[num]);
	    }
	    
	    
	    // ArrayList<Integer> inputs = new ArrayList();
	    
	    // int max = rd.readInt();
	    // inputs.add(max);
	    // int size = 1;
	    // while(rd.hasMore()) {
	    // 	int num = rd.readInt();
	    // 	inputs.add(num);
	    // 	size++;
	    // 	if(num > max) {
	    // 		max = num;
	    // 	}
	    // }
	    // System.out.println(inputs);
	    // int[] array = genNumUpto(max);
	    // for(int i=0; i < size; i++) {
	    // 	System.out.println(array[inputs.get(i)]);
	    // }
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