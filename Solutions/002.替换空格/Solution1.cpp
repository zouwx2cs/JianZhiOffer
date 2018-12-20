// 运行时间：4ms
// 占用内存：460k
class Solution {
public:
	void replaceSpace(char *str,int length) {
        string s(str) ;
        for (auto fd = 0; 
             fd = s.find_first_of(' ', fd), fd != string::npos; 
             fd += 2)
            s.replace(fd, 1, "%20") ;
        strcpy(str, s.c_str()) ;
	}
};