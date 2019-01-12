# 二维数组中的查找 #
## 题目描述 ##
在一个二维数组中（每个一维数组的长度相同），每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

### 一般解法 ###
- **解题思路**

	按顺序遍历比较
	
- **时间复杂度**

	**O(m\*n)**， 设二维数组高宽分别为m、n 

- **空间复杂度**

	**O(1)**， 没有使用数量与m、n有关的额外空间

- **提交版本**
	
Source Name | Language | Time | Memory | Contributor
---|---|---|---|---
[Solution1.cpp](https://github.com/zouwx2cs/JianZhiOffer/blob/master/Solutions/001.%E4%BA%8C%E7%BB%B4%E6%95%B0%E7%BB%84%E4%B8%AD%E7%9A%84%E6%9F%A5%E6%89%BE/Solution1.cpp) | c++11 | - | - | zouwx2cs

### 每行折半查找 ###
- **解题思路**

	每行折半查找
	
- **时间复杂度**

	**O(m\*logn)**， 设二维数组高宽分别为m、n 

- **空间复杂度**

	**O(1)**， 没有使用数量与m、n有关的额外空间

- **提交版本**

Source Name | Language | Time | Memory | Contributor
---|---|---|---|---
[Solution2.cpp](https://github.com/zouwx2cs/JianZhiOffer/blob/master/Solutions/001.%E4%BA%8C%E7%BB%B4%E6%95%B0%E7%BB%84%E4%B8%AD%E7%9A%84%E6%9F%A5%E6%89%BE/Solution2.cpp) | c++11 | - | - | zouwx2cs

### 二维分块查找（递归版） ###
- 解题思路

    二维分块查找，类似折半查找，把矩阵分为4个部分，需要特别小心区域划分的边界值
	![](https://raw.githubusercontent.com/zouwx2cs/JianZhiOffer/master/Solutions/001.%E4%BA%8C%E7%BB%B4%E6%95%B0%E7%BB%84%E4%B8%AD%E7%9A%84%E6%9F%A5%E6%89%BE/001-0.png)
    
- 时间复杂度

	**O(log4(m*n))**

- 空间复杂度

	**O(log4(m*n))** ，递归栈需要空间

Source Name | Language | Time | Memory | Contributor
---|---|---|---|---
[Solution5.cpp](https://github.com/zouwx2cs/JianZhiOffer/blob/master/Solutions/001.%E4%BA%8C%E7%BB%B4%E6%95%B0%E7%BB%84%E4%B8%AD%E7%9A%84%E6%9F%A5%E6%89%BE/Solution5.cpp) | c++11 | - | - | zouwx2cs

### set查找 ###
- 解题思路

    先用二维数组里所有的元素建立RBTree或HashMap（set或unordered_set）
    
- 耗时
- 时间复杂度
- 空间复杂度

Source Name | Language | Time | Memory | Contributor
---|---|---|---|---
[Solution3.cpp](https://github.com/zouwx2cs/JianZhiOffer/blob/master/Solutions/001.%E4%BA%8C%E7%BB%B4%E6%95%B0%E7%BB%84%E4%B8%AD%E7%9A%84%E6%9F%A5%E6%89%BE/Solution3.cpp) | c++11 | - | - | zouwx2cs
[Solution4.cpp](https://github.com/zouwx2cs/JianZhiOffer/blob/master/Solutions/001.%E4%BA%8C%E7%BB%B4%E6%95%B0%E7%BB%84%E4%B8%AD%E7%9A%84%E6%9F%A5%E6%89%BE/Solution4.cpp) | c++11 | - | - | zouwx2cs

### 备注 ###
#### c++ ####
0. Constructor

        std::vector<int> first;// empty vector of ints
        std::vector<int> second (4,100);// four ints with value 100
        std::vector<int> third (second.begin(),second.end());// iterating through second
        std::vector<int> fourth (third);// a copy of third
        
1. vector 的反向迭代器

https://blog.csdn.net/laobai1015/article/details/51567564
- v.begin() 返回一个迭代器，它指向容器c的第一个元素
- v.end() 返回一个迭代器，它指向容器c的**最后一个元素的下一个位置**
- **v.rbegin()** 返回一个逆序迭代器，它指向容器c的**最后一个元素**
- v.rend() 返回一个逆序迭代器，它指向容器c的**第一个元素前面的位置**

2. vector 的const_iterator

https://blog.csdn.net/qq844352155/article/details/38467291

Method | function
----|----
cbegin | Return const_iterator to beginning (public member function )
cend | Return const_iterator to end (public member function )
crbegin | Return const_reverse_iterator to reverse beginning (public member function )
**crend** | Return const_reverse_iterator to reverse end (public member function )
3. vector capacity

Method | function
----|----
size | vector 里装的数据数量
**max_size** | 容器所能容纳的最大元素数目，这是系统或者库所实施的限制
resize | Change size (public member function )
**capacity** | 容器在必须分配新的存储空间之前可以存放的元素总数
empty | Test whether vector is empty (public member function )
**reserve** | Request a change in capacity (public member function )
**shrink_to_fit** (C++11)  | 释放多余内存（capcity）

A possible output for this program could be:
    
    size: 100
    capacity: 128
    max_size: 1073741823
    
4. 元素

Method | function
----|----
operator[] | Access element (public member function )
**at** | 同[]
front | Access first element (public member function )
back | Access last element (public member function )
**data** (C++11) | 返回数据首地址，可以当数组用

5. Modifiers:

Method | function
----|----
assign | - 
push_back | -
pop_back | -
insert | -
erase | -
swap | -
clear | -
emplace (C++11) | -
emplace_back  (C++11) | -

### 奇技淫巧 ###
- 折半查找的时候把概率较高被选中的分支放前面，小概率放后面（比如==的情况）
- 数据量大的时候折半查找的时候可以试试变为斐波那契查找

