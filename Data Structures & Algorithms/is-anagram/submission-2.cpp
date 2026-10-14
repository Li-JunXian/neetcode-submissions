/*  What must the function return:
    The function returns a boolean. A true boolean is returned when the two
    input strings s and t are valid anagrams of each other. A false boolean
    is returned when the two are not anagrams of each other. Anagrams are
    when two strings contain the same characters, with each character
    appearing the same number of times as each other, the order in which the
    characters appear are not relevant.

    What approach will I use:
    I first do a simple check if string s and t are the same length. If they
    are not, it is clear that both of them are not anagrams of each other.

    I will create a new array that contains 26 elements, corresponding to
    the 26 alphabets. This array is going to store the frequency of each
    character in s, at the index corresponding to the alphabet's number in
    the alphabet sequence. An iteration loop will be used. At each iteration
    of the loop, immediately after incrementing the frequency of the
    character in string s, we will also be decreasing the frequency of the
    character in string t. If s and t are anagrams of each other, then the
    final array should all contain 0. We can do a iteration loop to check it.

    Why would that approach produce the correct answer:
    By having a shared separate array with 26 elements, where the index of
    the array represent the alphabet in their natural sequence, we store the
    frequency of their appearance in s as the element. At the same time, we
    subtract the array's elements by the frequency of characters in t. Since
    anagrams mean that two string contain the same number of same characters,
    by subtraction of their characters' frequencies, everything should cancel
    out to 0. Hence, if the final array contains all elements as 0, it means
    s and t are anagrams, else they are not.

*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        std::array<int, 26> counts{};

        for (int i = 0; i < s.length(); i += 1) {
            counts[s[i]-'a'] += 1;
            counts[t[i]-'a'] -= 1;
        }

        for (int count : counts) {
            if (count != 0) {
                return false;
            }
        }
        
        return true;
    }
};
