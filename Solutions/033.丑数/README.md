用set(RB-Tree)
首先把1加入到丑数set中
每次把set中最小（begin()）的数拿出，并把这个丑数的2倍、3倍、5倍放进set中，拿出找到第N个丑数

需要注意的是在求\*2 \*3 \*5 时候可能会超出 unsigned int 的范围，溢出成负数打乱RB-Tree Set，所以要用unsigned long long

狗屎的题目没有说第0个丑数是0
还以为不要考虑index=0的情况


