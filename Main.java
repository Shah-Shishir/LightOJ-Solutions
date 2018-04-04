import java.util.Scanner;
import java.math.BigInteger;

public class Main
{
    public static void main (String Args[])
    {
        int t,pos;
        BigInteger a,b,c,zero;

        Scanner in = new Scanner (System.in);

        t = in.nextInt();

        for (pos=1; pos<=t; pos++)
        {
            a = in.nextBigInteger();
            b = in.nextBigInteger();

            zero = BigInteger.valueOf(0);
            c = a.remainder(b);

            if (c.equals(zero))
                System.out.println ("Case " +pos+ ": divisible");
            else
                System.out.println ("Case " +pos+ ": not divisible");
        }
    }
}