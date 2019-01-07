用一个栈、一个小顶堆、一个multiset

multiset维护所有在栈中的元素，取min的时候
取堆顶看是否在set中，否则弹堆直到命中
