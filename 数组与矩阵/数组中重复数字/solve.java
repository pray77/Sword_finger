import java.util.*;


public class Solution {
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param numbers int整型一维数组
     * @return int整型
     */
    public int duplicate (int[] numbers) {
        // write code here
        for (int i =0; i < numbers.length; i++) {
            while(numbers[i] != i) {
                if (numbers[i] == numbers[numbers[i]]) return numbers[i];
                int tmp = numbers[i];
                numbers[i] = numbers[numbers[i]];
                numbers[tmp] = tmp;
            }
        }
        return -1;
    }
}
