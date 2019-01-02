//51ms
//10508k
public class Solution {
    public double Power(double base, int exponent) {
        if (exponent == 0 && base != 0) {
            return 1;
        }
        if (exponent == 1) {
            return base;
        }
        if (exponent > 0) {
            if (exponent%2 == 0) {
                return Power(base,exponent/2)*Power(base,exponent/2);
            }else {
                return Power(base,exponent/2)*Power(base,exponent/2 + 1);
            }
        } else {
            return 1/Power(base,0-exponent);
        }
  }
}