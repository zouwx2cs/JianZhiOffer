//运行时间：23ms
//所占内存：9652k
public class Solution {
    public String replaceSpace(StringBuffer str) {
        int j = 0;
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == ' ') {
                j++;
            }
        }
        int n = 2*j + str.length();
        char[] str1 = new char[n];
        int i = 0 , m = 0;
        while(i < n && m < str.length()) {
            if (str.charAt(m) == ' ') {
                str1[i] = '%';
                str1[++i] = '2';
                str1[++i] = '0';
            }else {
                str1[i] = str.charAt(m);
            }
            i++;
            m++;
        }
        return String.valueOf(str1);
    }
}