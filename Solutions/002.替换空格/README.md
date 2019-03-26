# 替换空格 #
## 题目描述 ##
请实现一个函数，将一个字符串中的每个空格替换成“%20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。

### 一般解法 ###
- **解题思路**

	用字符串查找函数找到每一个" "，替换成"%20"
	
- **时间复杂度**

	**O(m\*n)**， 设字符串长度、需要替换的次数分别为m、n 

- **空间复杂度**

	**O(1)**， 没有使用数量与m、n有关的额外空间

- **提交版本**
	
Source Name | Language | Time | Memory | Contributor
---|---|---|---|---
Solution1.cpp | c++11 | - | - | zouwx2cs

### 傻瓜解法 ###
- **解题思路**

	用字符串查找函数找到每一个" "，替换成"%20"，后面的字符往后面移动
	
- **时间复杂度**

	**O(m\*n)**， 设字符串长度、需要替换的次数分别为m、n 

- **空间复杂度**

	**O(1)**

- **提交版本**
	
Source Name | Language | Time | Memory | Contributor
---|---|---|---|---
Solution2.cpp | c++11 | - | - | zouwx2cs

### O(n)解法 ###
- **解题思路**

	先扫一趟统计有多少个空格，然后多开辟空格数*2的存储空间，两个指针，把字符往后拷贝，碰到空格就拷贝%20
	
- **时间复杂度**

	**O(n)**， 设字符串长度、需要替换的次数分别为m、n 

- **空间复杂度**

	**O(1)**

- **提交版本**
	
Source Name | Language | Time | Memory | Contributor
---|---|---|---|---
Solution3.cpp | c++11 | - | - | zouwx2cs

### 备注 ###
#### c++ ####
0. string Constructor

构造方法 | 构造方法    
---|---
default(1) | string();
copy(2) | string (const string& str);
**substring(3)** | **string (const string& str, size_t pos, size_t len = npos);**
from c-string(4) | string (const char* s);
**from buffer(5)** | **string (const char* s, size_t n);**
**fill(6)** | **string (size_t n, char c);**
range(7) | template <class InputIterator> string  (InputIterator first, InputIterator last);
initializer list(8)**(c++11)** | string (initializer_list<char> il);
move(9)**(c++11)** | string (string&& str) noexcept; 
        
1. string 的反向迭代器

类似vector

2. string 的const_iterator

类似vector

3. vector capacity

Method | function
----|----
size | string 字符串长度
**length** | 同size一摸一样
**max_size** | 容器所能容纳的最大元素数目，这是系统或者库所实施的限制
resize | Change size
**capacity** | 容器在必须分配新的存储空间之前可以存放的元素总数
**reserve** | Request a change in capacity
**clear** | Clear string
empty | Test if string is empty
**shrink_to_fit** (C++11)  | 释放多余内存（capcity）Requests the string to reduce its capacity to fit its size.
    
4. 元素

Method | function
----|----
operator[] | Get character of string
**at** | 同[]
front (C++11) | Access first character
back (C++11) | Access last character

5. Modifiers:

Method | function
----|----
operator+= | Append to string
**append** | Append to string
**push_back** | Append **character** to string
**assign** | Assign content to string
**insert** | Insert into string
**erase** | Erase characters from string
**replace** | Replace portion of string
**swap** | Swap string values
**pop_back** | Delete last character

### 奇技淫巧 ###
- 替换可以直接使用string::replace
- 插入可以直接使用string::insert
- python就一句完事 "%20".join(s.split(' '))
