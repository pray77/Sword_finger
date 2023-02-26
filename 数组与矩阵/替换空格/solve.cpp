class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param s string字符串 
     * @return string字符串
     */
    string replaceSpace(string s) {
        // write code here
        for(;;)
        {   
            int i = s.find(" ",0);
            if(i==-1) break;
            s.replace(i,1,"%20");
        }
        return s;
    }
};
