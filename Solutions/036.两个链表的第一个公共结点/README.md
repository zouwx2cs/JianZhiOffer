# 两个链表的第一个公共结点 #
## 题目描述 ##
输入两个链表，找出它们的第一个公共结点。

### set解法 ###
- **解题思路**

	1. 遍历第一个链表，把每个结点的地址加入到hash_set中；
	2. 遍历第二个链表，把在set中find每个结点地址，返回第一个命中的结点
	
- **时间复杂度**

	**O(n)** = 存hash O(n)\*O(1) + 命中hashO(m)\*O(1)， 令L1长度为n，L2长度为m，Hash插入复杂度为O(1)
	

- **空间复杂度**

	**O(n)**， 使用的额外空间大小与n线性相关的散列表

- **提交版本**
	
Source Name | Language | Time | Memory | Contributor
---|---|---|---|---
Solution1.cpp | c++11 | - | - | zouwx2cs

### 指针解法 ###
- **解题思路**

	遍历链表1取得链表1长度Len1
	遍历链表2取得链表2长度Len2

	pLong指向长的链表的首结点,pShort指向短的链表的首结点；
	让长的链表指针pLong先往前跑abs(Len1 - Len2)个结点；
	pLong、pShort一起往后跑，直到相遇(==)返回第一次相遇的结点
	
	
- **时间复杂度**

	**O(n)** O(n+m)*2 令L1长度为n，L2长度为m，

- **空间复杂度**

	**O(1)**， 使用的额外空间与n、m大小无关

- **提交版本**
	
Source Name | Language | Time | Memory | Contributor
---|---|---|---|---
Solution2.cpp | c++11 | - | - | zouwx2cs

### 备注 ###
#### c++ ####
- 不需要顺序输出的用hash_set更高效

### 奇技淫巧 ###
- 
