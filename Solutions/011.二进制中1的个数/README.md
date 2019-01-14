坑
C/C++
中 signed << >> 都是填充符号位的
unsigned << >> 才是安位左/右移



# 二进制中1的个数 #
## 题目描述 ##

输入一个整数，输出该数二进制表示中1的个数。其中负数用补码表示。

By [zouwx2cs](https://github.com/zouwx2cs/)

### 位操作解法 ###
- **解题思路**
	按位右移直到为0，计最低位1出现次数
	注意：小心c/c++中int是带符号的按位右移动=，要换成unsigned
	
- **时间复杂度**

	**O(1)**，  

- **空间复杂度**

	**O(1)**， 
	
- **提交版本**
	
Source Name | Language | Time | Memory | Contributor
---|---|---|---|---
[Solution2.cpp](Solution2.cpp) | c++11 | - | - | zouwx2cs

