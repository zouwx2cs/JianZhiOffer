# 跳台阶 #
## 题目描述 ##

一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法（先后次序不同算不同的结果）。

By [zouwx2cs](https://github.com/zouwx2cs/)

### 一般解法 ###
- **解题思路**
	
	到低n级台阶(n >= 2)，有两种方法，从第n-2级一步上来；从第n-1级一步上来。
设到第n级台阶有f(n)种方法，则f(n) = f(n-1) + f(n-2)。
f(1) = 1; f(0) = 1。于是本题转为[斐波那契数列问题](https://github.com/zouwx2cs/JianZhiOffer/tree/master/Solutions/007.%E6%96%90%E6%B3%A2%E9%82%A3%E5%A5%91%E6%95%B0%E5%88%97)。
	
- **时间复杂度**

	略  

- **空间复杂度**

	略， 
	
- **提交版本**
	
Source Name | Language | Time | Memory | Contributor
---|---|---|---|---
[Solution1.cpp](Solution1.cpp) | c++11 | - | - | zouwx2cs
