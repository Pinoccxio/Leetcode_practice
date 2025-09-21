# [代码随想录](https://programmercarl.com/)

## 1. 数组

### 1.1 二分查找
[binary-search](https://leetcode.cn/problems/binary-search/)

   **提示：**
   + 你可以假设 `nums` 中的所有元素是不重复的。
   + n 将在 `[1, 10000]` 之间。
   + `nums` 的每个元素都将在 `[-9999, 9999]` 之间。

   ![](/Leetcode/suixianglu/assets/array/0704.png)

### 1.2 移除元素
[remove-element](https://leetcode.cn/problems/remove-element/)

   **提示：**
   + `0 <= nums.length <= 100`
   + `0 <= nums[i] <= 50`
   + `0 <= val <= 100`
   
   ![](/Leetcode/suixianglu/assets/array/0027.png)

### 1.3 有序数组的平方
[squares-of-a-sorted-array](https://leetcode.cn/problems/squares-of-a-sorted-array/)

   **提示：**
   +  `1 <= nums.length <= 10^4`
   + `-104 <= nums[i] <= 10^4`
   + `nums` 已按 **非递减顺序** 排序
   
   ![](/Leetcode/suixianglu/assets/array/0977.png)

### 1.4 长度最小的子数组
[minimum-size-subarray-sum](https://leetcode.cn/problems/minimum-size-subarray-sum/)

   **提示：**
   + `1 <= target <= 10^9`
   + `1 <= nums.length <= 10^5`
   + `1 <= nums[i] <= 10^4`

   ![](/Leetcode/suixianglu/assets/array/0209.png)

### 1.5 螺旋矩阵II
   [spiral-matrix-ii](https://leetcode.cn/problems/spiral-matrix-ii/)

   **提示：**
   + `1 <= n <= 20`
   
   ![](/Leetcode/suixianglu/assets/array/0059.png)

## 2. 链表

### 2.1 移除链表元素
   [remove-linked-list-elements](https://leetcode.cn/problems/remove-linked-list-elements/)

   **提示：**
   + 列表中的节点数目在范围 `[0, 10^4]` 内
   + `1 <= Node.val <= 50`
   + `0 <= val <= 50`

   ![](/Leetcode/suixianglu/assets/linked_list/0203.png)

### 2.2 设计链表
   [design-linked-list](https://leetcode.cn/problems/design-linked-list/)

   **提示：**
   + `0 <= index, val <= 1000`
   + 请不要使用内置的LinkedList库
   + 调用 `get`、`addAtHead`、`addAtIndex`和`deleteAtIndex`的次数不超过`2000`

   ![](/Leetcode/suixianglu/assets/linked_list/0707.png)

### 2.3 翻转链表
   [reverse-linked-list](https://leetcode.cn/problems/reverse-linked-list/)

   **提示：**
   + 链表中节点的数目范围是 `[0, 5000]`
   + `-5000 <= Node.val <= 5000`

   **进阶：** 
   链表可以选用迭代或递归方式完成反转。

   ![](/Leetcode/suixianglu/assets/linked_list/0206.png)

### 2.4 两两交换链表中的节点
   [swap-nodes-in-pairs](https://leetcode.cn/problems/swap-nodes-in-pairs/)

   **提示：**
   + 链表中节点的数目在范围 `[0, 100]` 内
   + `0 <= Node.val <= 100`

   ![](/Leetcode/suixianglu/assets/linked_list/0024.png)

### 2.5 删除链表的倒数第 N 个结点
  [remove-nth-node-from-end-of-list](https://leetcode.cn/problems/remove-nth-node-from-end-of-list/)


  **提示：**
  + 链表中结点的数目为 `sz`
  + `1 <= sz <= 30`
  + `0 <= Node.val <= 100`
  + `1 <= n <= sz`

  **进阶：**
  尝试使用一趟扫描实现

  ![](/Leetcode/suixianglu/assets/linked_list/0019.png)

### 2.6 链表相交
  [intersection-of-two-linked-lists-lcci](https://leetcode.cn/problems/intersection-of-two-linked-lists-lcci/)

  **提示：**
  + `listA` 中节点数目为 `m`
  + `listB` 中节点数目为 `n`
  + `0 <= m, n <= 3 * 104` 
  + `1 <= Node.val <= 105` 
  + `0 <= skipA <= m` 
  + `0 <= skipB <= n` 
  + 如果 `listA` 和 `listB` 没有交点，`intersectVal` 为 `0` 
  + 如果 `listA` 和 `listB` 有交点，`intersectVal == listA[skipA + 1] == listB[skipB + 1]`

  **进阶：**
  时间复杂度 `O(n)` 、仅用 `O(1)` 内存

  ![](/Leetcode/suixianglu/assets/linked_list/interview_02_07.png)

### 2.7 环形链表 II
  [linked-list-cycle-ii](https://leetcode.cn/problems/linked-list-cycle-ii/)

  **提示：**
  + 链表中节点的数目范围在范围 `[0, 10^4`] 内 
  + `-105 <= Node.val <= 105` 
  + `pos` 的值为 `-1` 或者链表中的一个有效索引

  **进阶：**
  使用 `O(1)` 空间

  ![](/Leetcode/suixianglu/assets/linked_list/0142.png)

## 3. 哈希表

### 3.1 有效的字母异位词
  [valid-anagram](https://leetcode.cn/problems/valid-anagram/)

  **提示：**
  + 字母异位词是通过重新排列不同单词或短语的字母而形成的单词或短语，并使用所有原字母一次
  + `1 <= s.length, t.length <= 5 * 10^4`
  + `s` 和 `t` 仅包含小写字母

  **进阶：**
  如果输入字符串包含 unicode 字符

  ![](/Leetcode/suixianglu/assets/hash_table/0242.png)

### 3.2 两个数组的交集
  [intersection-of-two-arrays](https://leetcode.cn/problems/intersection-of-two-arrays/)

  **提示：**
  + `1 <= nums1.length, nums2.length <= 1000`
  + `0 <= nums1[i], nums2[i] <= 1000`

  ![](/Leetcode/suixianglu/assets/hash_table/0349.png)

### 3.3 快乐数
  [happy-number](https://leetcode.cn/problems/happy-number/)
  
  **快乐数的定义**
  + 对于一个正整数，每一次将该数替换为它每个位置上的数字的平方和。
  + 然后重复这个过程直到这个数变为 1，也可能是 无限循环 但始终变不到 1。
  + 如果这个过程 结果为 1，那么这个数就是快乐数。
  
  **提示：**
  + `1 <= n <= 2^31 - 1`

  ![](/Leetcode/suixianglu/assets/hash_table/0202.png)

  ### 3.4 两数之和
  [two-sum](https://leetcode.cn/problems/two-sum/)

  **提示：**
  + `2 <= nums.length <= 10^4`
  + `-10^9 <= nums[i] <= 10^9`
  + `-10^9 <= target <= 10^9`
  + 只会存在一个有效答案

  **进阶：**
  你可以想出一个时间复杂度小于 `O(n^2)` 的算法吗？

  ![](/Leetcode/suixianglu/assets/hash_table/0001.png)

  ### 3.5 四数相加II
  [4sum-ii](https://leetcode.cn/problems/4sum-ii/)
  
  **提示：**
  + `n == nums1.length` 
  + `n == nums2.length` 
  + `n == nums3.length` 
  + `n == nums4.length` 
  + `1 <= n <= 200`
  + `-2^28 <= nums1[i], nums2[i], nums3[i], nums4[i] <= 2^28`
  
  ![](/Leetcode/suixianglu/assets/hash_table/0454.png)

  ### 3.6 赎金信
  [ransom-note](https://leetcode.cn/problems/ransom-note/)
  
  **提示：**
  + `1 <= ransomNote.length, magazine.length <= 10^5` 
  + `ransomNote` 和 `magazine` 由小写英文字母组成
  
  ![](/Leetcode/suixianglu/assets/hash_table/0383.png)

  ### 3.7 三数之和
  [3sum](https://leetcode.cn/problems/3sum/)
  
  **提示：**
  + `3 <= nums.length <= 3000`
  + `-10^5 <= nums[i] <= 10^5`
  
  ![](/Leetcode/suixianglu/assets/hash_table/0015.png)

  ### 3.8 四数之和
  [4sum](https://leetcode.cn/problems/4sum/)
  
  **提示：**
  + `1 <= nums.length <= 200`
  + `-10^9 <= nums[i] <= 10^9`
  + `-10^9 <= target <= 10^9`
  
  ![](/Leetcode/suixianglu/assets/hash_table/0018.png)
