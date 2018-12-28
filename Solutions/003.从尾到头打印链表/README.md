# 从尾到头打印链表 #
## 题目描述 ##
输入一个链表，按链表值从尾到头的顺序返回一个ArrayList。

### 一般解法 ###
- **解题思路**

	循环遍历链表，逐个添加到vector中，直到next指针为空；
	然后转置
	
- **时间复杂度**

	**O(n)**， 设字符串长度为n 

- **空间复杂度**

	**O(n)**， 转置使用了数量与n额外空间

- **提交版本**
	
Source Name | Language | Time | Memory | Contributor
---|---|---|---|---
Solution2.cpp | c++11 | - | - | zouwx2cs

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