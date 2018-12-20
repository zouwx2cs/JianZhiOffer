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
Solution1.cpp | c++11 | 15ms | 1504k | zouwx2cs

### 优化1 ###
- **解题思路**

	每行折半查找
	
- **时间复杂度**

	**O(m\*logn)**， 设二维数组高宽分别为m、n 

- **空间复杂度**

	**O(1)**， 没有使用数量与m、n有关的额外空间

- **提交版本**

Source Name | Language | Time | Memory | Contributor
---|---|---|---|---
Solution2.cpp | c++11 | ms | k | zouwx2cs

### 优化2 ###
- 解题思路

    二维折半查找，
    
- 耗时
- 时间复杂度
- 空间复杂度

Source Name | Language | Time | Memory | Contributor
---|---|---|---|---
Solution3.cpp | c++11 | ms | k | zouwx2cs

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
assign |
push_back |
pop_back |
insert |
erase |
swap |
clear |
emplace (C++11) |
emplace_back  (C++11) |

### 奇技淫巧 ###
