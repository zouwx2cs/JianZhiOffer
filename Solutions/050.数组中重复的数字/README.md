# 数组中重复的数字 #
## 题目描述 ##
在一个长度为n的数组里的所有数字都在0到n-1的范围内。 数组中某些数字是重复的，但不知道有几个数字是重复的。也不知道每个数字重复几次。请找出数组中任意一个重复的数字。 例如，如果输入长度为7的数组{2,3,1,0,2,5,3}，那么对应的输出是第一个重复的数字2。

### 一般解法 ###
- **解题思路**

	对每个元素，在他后面依次找有没有相等的元素
	
- **时间复杂度**

	**O(n^2)** 

- **空间复杂度**

	**O(1)**

- **提交版本**
	
Source Name | Language | Time | Memory | Contributor
---|---|---|---|---
[Solution1.cpp](https://github.com/zouwx2cs/JianZhiOffer/blob/master/Solutions/050.%E6%95%B0%E7%BB%84%E4%B8%AD%E9%87%8D%E5%A4%8D%E7%9A%84%E6%95%B0%E5%AD%97/Solution1.cpp) | c++11 | - | - | zouwx2cs

### 排序 ###
- **解题思路**

	先对数组排序，再扫一趟看有没有相邻的重复值
	
- **时间复杂度**

	**O(nlogn)**， 排序 O(nlogn)， 扫一趟 O(n)

- **空间复杂度**

	**O(logn)**， sort排序递归调用栈需要O(logn)的空间

- **提交版本**

Source Name | Language | Time | Memory | Contributor
---|---|---|---|---
[Solution2.cpp](https://github.com/zouwx2cs/JianZhiOffer/blob/master/Solutions/050.%E6%95%B0%E7%BB%84%E4%B8%AD%E9%87%8D%E5%A4%8D%E7%9A%84%E6%95%B0%E5%AD%97/Solution2.cpp) | c++11 | - | - | zouwx2cs

### hash set ###
- 解题思路

    用顺序表或者hash表存储已经存在的值，发生碰撞则找到
    
- 时间复杂度

	**O(n)** ，表O(1)，遍历O(n)

- 空间复杂度

	**O(n)** ，

Source Name | Language | Time | Memory | Contributor
---|---|---|---|---
[Solution3.cpp](https://github.com/zouwx2cs/JianZhiOffer/blob/master/Solutions/050.%E6%95%B0%E7%BB%84%E4%B8%AD%E9%87%8D%E5%A4%8D%E7%9A%84%E6%95%B0%E5%AD%97/Solution3.cpp) | c++11 | - | - | zouwx2cs

### 数组原地交换 ###
- 解题思路

遍历数组，如果当前元素不等于对应下标值，则循环把这个元素和他对应下标的位置上的元素交换，直到当前元素等于对应下标值，找到的条件是，如果这个元素本来应该在的位置上已经有了一个相等的数字
    
- 时间复杂度

	**O(n)** ，表O(1)，遍历O(n)

- 空间复杂度

	**O(1)**

Source Name | Language | Time | Memory | Contributor
---|---|---|---|---
[Solution4.cpp](https://github.com/zouwx2cs/JianZhiOffer/blob/master/Solutions/050.%E6%95%B0%E7%BB%84%E4%B8%AD%E9%87%8D%E5%A4%8D%E7%9A%84%E6%95%B0%E5%AD%97/Solution4.cpp) | c++11 | - | - | zouwx2cs
