//
// Created by chenx on 2025/5/12.
//

#include "./array.h"

// #include <_mingw_mac.h>


// LeetCode_704——二分查找
// (25/05/12 DONE: 0 ms——100%, 30.63 MB——74.06%)
int Array::search(vector<int>& nums, int target) {
    // ======= LeetCode Solution =======
    int left = 0, right = nums.size() - 1;
    while(left <= right){
        int mid = (right - left) / 2 + left;
        int num = nums[mid];
        if (num == target) {
            return mid;
        } else if (num > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
    // ======= LeetCode Solution =======

    // ======= My Code =======
    int first = 0, end = nums.size() - 1;
    while (first <= end) {
        int middle = (first + end) / 2;
        if (nums[middle] < target) {
            first = middle + 1;
        }
        else if (nums[middle] > target) {
            end = middle - 1;
        }
        else {
            return middle;
        }
    }
    return -1;
    // ======= My Code =======
}


// LeetCode_27——移除元素
// (25/05/12 DONE: 0 ms——100%, 11.40 MB——95.18%)
int Array::removeElement(vector<int>& nums, int val) {
    // ======= LeetCode Solution =======
    int left = 0, right = nums.size();
    while (left < right) {
        if (nums[left] == val) {
            nums[left] = nums[right - 1];
            right--;
        } else {
            left++;
        }
    }
    return left;
    // ======= LeetCode Solution =======

    // ======= My Code =======
    int len = nums.size();
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (nums[i] == val) {
            // nums.erase(nums.begin() + i);        // vector顺序改变
            nums[i] = 51;
            count++;
        }
    }
    sort(nums.begin(), nums.end());
    return len-count;
    // ======= My Code =======
}


// LeetCode_977——有序数组的平方
// (25/05/12 DONE: 7 ms——26.89%, 29.68 MB——47.99%)
vector<int> Array::sortedSquares(vector<int>& nums) {
    // ======= LeetCode Solution =======
    int n = nums.size();
    vector<int> ans(n);
    for (int i = 0, j = n - 1, pos = n - 1; i <= j;) {
        if (nums[i] * nums[i] > nums[j] * nums[j]) {
            ans[pos] = nums[i] * nums[i];
            ++i;
        }
        else {
            ans[pos] = nums[j] * nums[j];
            --j;
        }
        --pos;
    }
    return ans;
    // ======= LeetCode Solution =======

    // ======= Brilliant Answer in Comments =======
    int num = nums.size();
    vector<int> arr(nums.size(),0);
    for(int right = num-1,left = 0,k = num-1; left <= right;)
    {
        if(nums[right]*nums[right] < nums[left]*nums[left])
        {
            arr[k--] = nums[left]*nums[left];
            left++;
        }
        else
        {
            arr[k--] = nums[right]*nums[right];
            right--;
        }
    }
    return arr;
    // ======= Brilliant Answer in Comments =======

    // ======= My Code =======
    vector<int> result(nums.size());
    for (int i = 0; i < nums.size(); i++) {
        result[i] = nums[i] * nums[i];
    }
    sort(result.begin(), result.end());
    return result;
    // ======= My Code =======
}


// LeetCode_209——长度最小的子数组
// (25/05/12 DONE: 0 ms——100%, 31.53 MB——31.35%)
int Array::minSubArrayLen(int target, vector<int>& nums) {
    int n = nums.size();
    int i = 0, len = n+1, sum = 0, subLen = 0;
    for (int j = 0; j < n; j++) {
        if (nums[j] >= target) {
            len = 1;
            break;
        }
        sum += nums[j];
        while (sum >= target) {
            subLen = j - i + 1;    // 保存当前滑窗长度
            if (subLen < len) {
                len = subLen;
            }
            sum -= nums[i++];   // 滑窗，去掉i
        }
    }
    return len == n+1 ? 0 : len;
}


// LeetCode_59——螺旋矩阵II
// (25/05/12 UNDONE!!!)
vector<vector<int>> Array::generateMatrix(int n) {
    // ======= SuiXiangLu Solution =======
    vector<vector<int>> res(n, vector<int>(n, 0)); // 使用vector定义一个二维数组
    int startx = 0, starty = 0; // 定义每循环一个圈的起始位置
    int loop = n / 2; // 每个圈循环几次，例如n为奇数3，那么loop = 1 只是循环一圈，矩阵中间的值需要单独处理
    int mid = n / 2; // 矩阵中间的位置，例如：n为3， 中间的位置就是(1，1)，n为5，中间位置为(2, 2)
    int count = 1; // 用来给矩阵中每一个空格赋值
    int offset = 1; // 需要控制每一条边遍历的长度，每次循环右边界收缩一位
    int i,j;
    while (loop --) {
        i = startx;
        j = starty;

        // 下面开始的四个for就是模拟转了一圈
        // 模拟填充上行从左到右(左闭右开)
        for (j; j < n - offset; j++) {
            res[i][j] = count++;
        }
        // 模拟填充右列从上到下(左闭右开)
        for (i; i < n - offset; i++) {
            res[i][j] = count++;
        }
        // 模拟填充下行从右到左(左闭右开)
        for (; j > starty; j--) {
            res[i][j] = count++;
        }
        // 模拟填充左列从下到上(左闭右开)
        for (; i > startx; i--) {
            res[i][j] = count++;
        }

        // 第二圈开始的时候，起始位置要各自加1， 例如：第一圈起始位置是(0, 0)，第二圈起始位置是(1, 1)
        startx++;
        starty++;

        // offset 控制每一圈里每一条边遍历的长度
        offset += 1;
    }

    // 如果n为奇数的话，需要单独给矩阵最中间的位置赋值
    if (n % 2) {
        res[mid][mid] = count;
    }
    return res;
    // ======= SuiXiangLu Solution =======
}
