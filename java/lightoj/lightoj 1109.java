// Java Bootcamp Day 1, Problem H
import java.io.*;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class Main {

	public static void main(String[] args) {
		Charset charset = Charset.forName("ascii");
	    FastIO rd = new FastIO(System.in, System.out, charset);

	    ArrayList<DivisorCounter> list = new ArrayList<DivisorCounter>(1000);
	    list.add(new DivisorCounter(1, 1));
	    list.add(new DivisorCounter(2, 2));
	    list.add(new DivisorCounter(3, 2));
	    for(int i=4; i <= 1000; i++) {
	    	list.add(new DivisorCounter(i));
	    }

		Collections.sort(list, new DivisorCounter());

		int t = rd.readInt();
		for(int i=1; i <= t; i++) {
			int n = rd.readInt();
			DivisorCounter dv = list.get(n-1);
			System.out.println("Case "+i+": "+dv.number);
		}

	}
}

class DivisorCounter implements Comparator<DivisorCounter> {
	int number;
	int divisors = 1;

	public int compare(DivisorCounter x, DivisorCounter y) {
        if(x.divisors == y.divisors) {
        	return y.number - x.number;
        }
        return x.divisors - y.divisors;
    }

	public DivisorCounter() {

	}
	public DivisorCounter(int n, int d) {
		number = n;
		divisors = d;
	}
	public DivisorCounter(int n) {
		number = n;
		int lim = n/2;
		int pow = 0;
		while(n%2 == 0) {
			pow++;
			n /= 2;
		}
		divisors*=(pow+1);

		for(int i=3; i <= lim && n > 1; i+=2) {
			pow = 0;
			while(n%i == 0) {
				pow++;
				n /= i;
			}
			divisors*=(pow+1);
		}

		if(n > 1) {
			divisors++;
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
