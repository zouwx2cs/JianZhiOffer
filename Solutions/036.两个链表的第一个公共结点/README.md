# 用两个栈实现队列 #
## 题目描述 ##
用两个栈实现队列

### 遍历两次解法 ###
- **解题思路**

	1. 分别遍历两个链表（不妨设长的链表为L1，短的为L2）取得两个链表的长度len1、len2，
	2. 让指向长的L1链表的指针p1走到len1-len2的位置，让短的L2链表指针p2指向L2的头结点
	3. 两个指针p1、p2同时往后走，走到p1、p2指向的结点为同一个结点止
	4. 返回这个结点
	
- **时间复杂度**

	**O(n)** O(n+m) + O(n+m) = O(m+n) = O(n)令L1长度为n，L2长度为m
	

- **空间复杂度**

	**O(1)**， 使用的额外空间大小与n、m无关

- **提交版本**
	
Source Name | Language | Time | Memory | Contributor
---|---|---|---|---
Solution1.cpp | c++11 | - | - | zouwx2cs

### 散列解法 ###
- **解题思路**

	遍历链表1的时候把每个元素入hash
	遍历链表2的时候每次查看元素再hash中是否命中，第一个命中的结点返回
	
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
