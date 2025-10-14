# [代码随想录](https://programmercarl.com/)

---

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

---

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

---

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

---

## 4. 字符串

### 4.1 反转字符串
  [reverse-string](https://leetcode.cn/problems/reverse-string/)

  **提示：**
  + `1 <= s.length <= 10^5`
  + `s[i]` 都是 ASCII 码表中的可打印字符
  
  ![](/Leetcode/suixianglu/assets/string/0344.png)

### 4.2 反转字符串 II
  [reverse-string-ii](https://leetcode.cn/problems/reverse-string-ii/)
  
  **提示：**
  + `1 <= s.length <= 10^4`
  + `s` 仅由小写英文组成
  + `1 <= k <= 10^4`

  ![](/Leetcode/suixianglu/assets/string/0541.png)

### 4.3 替换数字
  [kama-replace_number](https://kamacoder.com/problempage.php?pid=1064)
  
  **提示：**
  + 给定一个字符串 `s`，它包含小写字母和数字字符，请编写一个函数，将字符串中的字母字符保持不变，而将每个数字字符替换为`number`。
  + 例如，对于输入字符串 `a1b2c3`，函数应该将其转换为 `anumberbnumbercnumber`。

  ![](/Leetcode/suixianglu/assets/string/kama_0054.png)

### 4.4 反转字符串中的单词
  [reverse-words-in-a-string](https://leetcode.cn/problems/reverse-words-in-a-string/)

  **提示：**
  + `1 <= s.length <= 10^4`
  + `s` 包含英文大小写字母、数字和空格 `' '`
  + `s` 中 **至少存在一个** 单词

  ![](/Leetcode/suixianglu/assets/string/0151.png)

### 4.5 右旋字符串
  [kama-right-spin-string](https://kamacoder.com/problempage.php?pid=1065)
  
  **提示：**
  + 字符串的右旋转操作是把字符串尾部的若干个字符转移到字符串的前面。
  + 给定一个字符串 `s` 和一个正整数 `k`，请编写一个函数，将字符串中的后面 `k` 个字符移到字符串的前面，实现字符串的右旋转操作。 
  + 例如，对于输入字符串 `abcdefg` 和整数 `2`，函数应该将其转换为 `fgabcde`。

  ![](/Leetcode/suixianglu/assets/string/kama_0055.png)

### 4.6 找出字符串中第一个匹配项的下标
  [find-the-index-of-the-first-occurrence-in-a-string](https://leetcode.cn/problems/find-the-index-of-the-first-occurrence-in-a-string/)
  
  **提示：**
  + `1 <= haystack.length, needle.length <= 10^4` 
  + `haystack` 和 `needle` 仅由小写英文字符组成

  ![](/Leetcode/suixianglu/assets/string/0028.png)

### 4.7 重复的子字符串
  [repeated-substring-pattern](https://leetcode.cn/problems/repeated-substring-pattern/)
  
  **提示：**
  + `1 <= s.length <= 10^4` 
  + `s` 由小写英文字母组成
  
  ![](/Leetcode/suixianglu/assets/string/0459.png)

---

## 5. 栈与队列

### 5.1 用栈实现队列
  [implement-queue-using-stacks](https://leetcode.cn/problems/implement-queue-using-stacks/)

  **提示：**
  +  `1 <= x <= 9`
  + 最多调用 `100` 次 `push`、`pop`、`peek` 和 `empty`
  + 假设所有操作都是有效的 （例如，一个空的队列不会调用 `pop` 或者 `peek` 操作）

  ![](/Leetcode/suixianglu/assets/stack_queue/0232.png)

### 5.2 用队列实现栈
  [implement-stack-using-queues](https://leetcode.cn/problems/implement-stack-using-queues/)

  **提示：**
  +  `1 <= x <= 9`
  + 最多调用 `100` 次 `push`、`pop`、`peek` 和 `empty`
  + 每次调用 `pop` 和 `top` 都保证栈不为空

  **进阶：**
  你能否仅用一个队列来实现栈。

  ![](/Leetcode/suixianglu/assets/stack_queue/0225.png)

### 5.3 有效的括号
  [valid-parentheses](https://leetcode.cn/problems/valid-parentheses/)

  **提示：**
  +  `1 <= s.length <= 10^4`
  + `s` 仅由括号 `()[]{}` 组成

  ![](/Leetcode/suixianglu/assets/stack_queue/0020.png)

### 5.4 删除字符串中的所有相邻重复项
  [remove-all-adjacent-duplicates-in-string](https://leetcode.cn/problems/remove-all-adjacent-duplicates-in-string/)
  
  给出由小写字母组成的字符串 s，重复项删除操作会选择两个相邻且相同的字母，并删除它们。\
  在 s 上反复执行重复项删除操作，直到无法继续删除。\
  在完成所有重复项删除操作后返回最终的字符串。答案保证唯一。

  **提示：**
  +  `1 <=  s.length <= 10^4`
  + `s` 仅由小写英文字母组成。

  ![](/Leetcode/suixianglu/assets/stack_queue/1047.png)

### 5.5 逆波兰表达式求值
  [evaluate-reverse-polish-notation](https://leetcode.cn/problems/evaluate-reverse-polish-notation/)

  给你一个字符串数组 tokens ，表示一个根据 `逆波兰表示法` 表示的算术表达式。\
  请你计算该表达式。返回一个表示表达式值的整数。

  **逆波兰表达式：**\
  逆波兰表达式是一种后缀表达式，所谓后缀就是指算符写在后面。\
  平常使用的算式则是一种中缀表达式，如 `( 1 + 2 ) * ( 3 + 4 )` 。\
  该算式的逆波兰表达式写法为 `( ( 1 2 + ) ( 3 4 + ) * )` 。\

  逆波兰表达式主要有以下两个**优点**：\
  去掉括号后表达式无歧义，上式即便写成 `1 2 + 3 4 + *` 也可以依据次序计算出正确结果。\
  适合用栈操作运算：遇到数字则入栈；遇到算符则取出栈顶两个数字进行计算，并将结果压入栈中

  **提示：**
  +  `1 <=  s.length <= 10^4`
  + `tokens[i]` 是一个算符`（"+"、"-"、"*" 或 "/"）`，或是在范围 `[-200, 200]` 内的一个整数

  ![](/Leetcode/suixianglu/assets/stack_queue/0150.png)

### 5.6 滑动窗口最大值
  [sliding-window-maximum](https://leetcode.cn/problems/sliding-window-maximum/)
  
  给你一个整数数组 `nums`，有一个大小为 `k` 的滑动窗口从数组的最左侧移动到数组的最右侧。你只可以看到在滑动窗口内的 `k` 个数字。滑动窗口每次只向右移动一位。\
  返回 _滑动窗口中的最大值_ 。

  **提示：**
  +  `1 <=  s.length <= 10^5`
  + `-10^4 <= nums[i] <= 10^4`
  + `1 <= k <= nums.length`

  ![](/Leetcode/suixianglu/assets/stack_queue/0239.png)

### 5.7 前 K 个高频元素
  [top-k-frequent-elements](https://leetcode.cn/problems/top-k-frequent-elements/)

  **提示：**
  +  `1 <=  s.length <= 10^5`
  + `k` 的取值范围是 `[1, 数组中不相同的元素的个数]`
  + 题目数据保证答案唯一，换句话说，数组中前 `k` 个高频元素的集合是唯一的

  **进阶：** 
  你所设计算法的时间复杂度 必须 优于 `O(n log n)` ，其中 `n` 是数组大小。

  ![](/Leetcode/suixianglu/assets/stack_queue/0347.png)

---

## 6. 二叉树

### 6.1 二叉树的递归/迭代遍历
  [preorder-traversal](https://leetcode.cn/problems/binary-tree-preorder-traversal/)
  [postorder-traversal](https://leetcode.cn/problems/binary-tree-postorder-traversal/)
  [inorder-traversal](https://leetcode.cn/problems/binary-tree-inorder-traversal/)

  **提示：**
  +  树中节点数目在范围 `[0, 100]` 内
  + `-100 <= Node.val <= 100`

  **进阶：**
  递归算法很简单，你可以通过迭代算法完成吗？

  ![](/Leetcode/suixianglu/assets/binary_tree/0144.png)
  ![](/Leetcode/suixianglu/assets/binary_tree/0145.png)
  ![](/Leetcode/suixianglu/assets/binary_tree/0094.png)

### 6.2 二叉树的层序遍历
  [implement-stack-using-queues](https://leetcode.cn/problems/implement-stack-using-queues/)

  **提示：**
  +  树中节点数目在范围 `[0, 100]` 内
  + `-100 <= Node.val <= 100`

  ![](/Leetcode/suixianglu/assets/stack_queue/0225.png)
