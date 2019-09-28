/*
 * @lc app=leetcode id=389 lang=cpp
 *
 * [389] Find the Difference
 *
 * https://leetcode.com/problems/find-the-difference/description/
 *
 * algorithms
 * Easy (53.71%)
 * Likes:    562
 * Dislikes: 245
 * Total Accepted:    159.4K
 * Total Submissions: 296.7K
 * Testcase Example:  '"abcd"\n"abcde"'
 *
 * 
 * Given two strings s and t which consist of only lowercase letters.
 * 
 * String t is generated by random shuffling string s and then add one more
 * letter at a random position.
 * 
 * Find the letter that was added in t.
 * 
 * Example:
 * 
 * Input:
 * s = "abcd"
 * t = "abcde"
 * 
 * Output:
 * e
 * 
 * Explanation:
 * 'e' is the letter that was added.
 * 
 */
#include<string.h>
#include<stdio.h>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        int count[26];
        memset(count, 0, 26*sizeof(int));
        for(auto curr: t) count[curr-'a']++;
        for(auto curr: s) count[curr - 'a']--;
        for(int i = 0; i < 26; i++)
            if(count[i]) return char('a' + i);
        return 'z';
    }
};

