//#include <stdio.h>
//#include <stdlib.h>
//
//int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
//    for (int i = 0; i < numsSize; ++i) {
//        for (int j = i + 1; j < numsSize; ++j) {
//            if (nums[i] + nums[j] == target) {
//                int* ret = malloc(sizeof(int) * 2);
//                ret[0] = i,ret[1] = j;
//                *returnSize = 2;
//                return ret;
//            }
//        }
//    }
//
//    *returnSize = 0;
//    return NULL;
//}
//
//int* towsum(int* nums, int numsize, int target, int* retrunSize) {
//
//    for (int i = 0; i < numsize; ++i) {
//        for (int j = i + 1; j < numsize; ++j) {
//            if (nums[i] + nums[j] == target) {
//                int* ret = malloc(sizeof(int) * 2);
//                ret[0] = i, ret[1] = j;
//                *retrunSize = 2;
//                return ret;
//
//            };
//
//
//        };
//
//    };
//
//    *retrunSize = 0;
//    return NULL;
//}
//
//int* twosum2(int* nums, int numsize, int target, int* returnszie) {
//
//    for (int i = 0; i < numsize; ++i) {
//        for (int j = i + 1; j < numsize; ++j) {
//            if (nums[i] + nums[j] == target) {
//                //int* ret = malloc(sizeof(int) * 2);
//                int* ret = malloc(sizeof(int) * 2);
//                ret[0] = i, ret[1] = j;
//                *returnszie = 2;
//                return ret;
//            }
//        }
//    }
//
//    *returnszie = 0;
//    return NULL;
//}
//
//
//
//int main() {
//    int nums[] = { 2, 7, 11, 15 };
//    int target = 18;
//    int returnSize;
//    int* result = twosum2(nums, 4, target, &returnSize);
//
//    if (result != NULL) {
//        printf("找到符合条件的两个数的下标：%d 和 %d\n", result[0], result[1]);
//        free(result); // 释放动态分配的内存
//    }
//    else {
//        printf("未找到符合条件的两个数\n");
//    }
//
//    return 0;
//}
