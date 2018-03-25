import java.util.Scanner;
import java.math.BigInteger;

class InverseFactorial {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    BigInteger factorial = scanner.nextBigInteger();
    BigInteger n = new BigInteger("2");
    BigInteger zero = new BigInteger("0");
    BigInteger one = new BigInteger("1");
    while (factorial.mod(n).equals(zero)) {
      factorial = factorial.divide(n);
      n = n.add(one);
    }
    System.out.println(n.subtract(one));
  }
}
