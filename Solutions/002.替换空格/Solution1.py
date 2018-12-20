# 运行时间：29ms
# 占用内存：5724k
# -*- coding:utf-8 -*-
class Solution:
    # s 源字符串
    def replaceSpace(self, s):
        return "%20".join(s.split(' '))