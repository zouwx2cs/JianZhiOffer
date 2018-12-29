# 用两个栈实现队列 #
## 题目描述 ##
用两个栈实现队列

### 一般解法 ###
- **解题思路**

	* 方法一
	入队操作： 栈1把入队值压栈
	出队操作： 把栈1倒腾进栈2，弹栈2栈顶出队，再把栈2剩余元素捣腾回栈1
	* 方法二
	入队操作： 把栈1倒腾进栈2，栈1把入队值压栈，再把栈2倒腾回栈1
	出队操作： 栈1弹栈出队
	
- **时间复杂度**

	设队内元素为

	* 方法一
		入队操作： **O(1)**， 
		出队操作： **O(n)**，

	* 方法二
		入队操作： **O(n)**， 
		出队操作： **O(1)**，

- **空间复杂度**

	**O(n)**， 使用了空间大小为n空间的两个栈

- **提交版本**
	
Source Name | Language | Time | Memory | Contributor
---|---|---|---|---
Solution1.cpp | c++11 | - | - | zouwx2cs

### 备注 ###
#### c++ ####
	/**
	*  struct ListNode {
	*        int val;
	*        struct ListNode *next;
	*        ListNode(int x) :
	*              val(x), next(NULL) {
	*        }
	*  };
	*/
- 用反向迭代器
	vector<int> r(res.rbegin(), res.rend()) ;
- 使用栈转置
- for (i = 0, j = size -1; i < j; ++i, --j) swap(v[i], v[j])

### 奇技淫巧 ###
- swap(, ) 交换两个变量的值
