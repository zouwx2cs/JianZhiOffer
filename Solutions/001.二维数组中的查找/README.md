# ��ά�����еĲ��� #
## ��Ŀ���� ##
��һ����ά�����У�ÿ��һά����ĳ�����ͬ����ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳�����������һ������������������һ����ά�����һ���������ж��������Ƿ��и�������

### һ��ⷨ ###
- **����˼·**

	��˳������Ƚ�
	
- **ʱ�临�Ӷ�**

	**O(m\*n)**�� ���ά����߿�ֱ�Ϊm��n 

- **�ռ临�Ӷ�**

	**O(1)**�� û��ʹ��������m��n�йصĶ���ռ�

- **�ύ�汾**
	
Source Name | Language | Time | Memory | Contributor
---|---|---|---|---
Solution1.cpp | c++11 | 15ms | 1504k | zouwx2cs

### �Ż�1 ###
- **����˼·**

	ÿ���۰����
	
- **ʱ�临�Ӷ�**

	**O(m\*logn)**�� ���ά����߿�ֱ�Ϊm��n 

- **�ռ临�Ӷ�**

	**O(1)**�� û��ʹ��������m��n�йصĶ���ռ�

- **�ύ�汾**

Source Name | Language | Time | Memory | Contributor
---|---|---|---|---
Solution2.cpp | c++11 | ms | k | zouwx2cs

### �Ż�2 ###
- ����˼·

    ��ά�۰���ң�
    
- ��ʱ
- ʱ�临�Ӷ�
- �ռ临�Ӷ�

Source Name | Language | Time | Memory | Contributor
---|---|---|---|---
Solution3.cpp | c++11 | ms | k | zouwx2cs

### ��ע ###
#### c++ ####
0. Constructor

        std::vector<int> first;// empty vector of ints
        std::vector<int> second (4,100);// four ints with value 100
        std::vector<int> third (second.begin(),second.end());// iterating through second
        std::vector<int> fourth (third);// a copy of third
        
1. vector �ķ��������

https://blog.csdn.net/laobai1015/article/details/51567564
- v.begin() ����һ������������ָ������c�ĵ�һ��Ԫ��
- v.end() ����һ������������ָ������c��**���һ��Ԫ�ص���һ��λ��**
- **v.rbegin()** ����һ���������������ָ������c��**���һ��Ԫ��**
- v.rend() ����һ���������������ָ������c��**��һ��Ԫ��ǰ���λ��**

2. vector ��const_iterator

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
size | vector ��װ����������
**max_size** | �����������ɵ����Ԫ����Ŀ������ϵͳ���߿���ʵʩ������
resize | Change size (public member function )
**capacity** | �����ڱ�������µĴ洢�ռ�֮ǰ���Դ�ŵ�Ԫ������
empty | Test whether vector is empty (public member function )
**reserve** | Request a change in capacity (public member function )
**shrink_to_fit** (C++11)  | �ͷŶ����ڴ棨capcity��

A possible output for this program could be:
    
    size: 100
    capacity: 128
    max_size: 1073741823
    
4. Ԫ��

Method | function
----|----
operator[] | Access element (public member function )
**at** | ͬ[]
front | Access first element (public member function )
back | Access last element (public member function )
**data** (C++11) | ���������׵�ַ�����Ե�������

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

### �漼���� ###
