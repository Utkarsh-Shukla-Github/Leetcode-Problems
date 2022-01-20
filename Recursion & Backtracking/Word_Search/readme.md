## Algorithim 
**In exist():**

Iterate through the grid looking for the first character in the desired word. If you find it, call a dfs function to continue looking for the remainder of the letters. In your dfs function check...

**In dfs():** 

[1]. First-step  &#8594; if your count of character equals the number of letters in the word you're searching for...if it does, return true as you've found the entire word.

[2]. Second-step &#8594; check if your recursive calls has gone out of the bounds of the grid or the character you're currently looking for isn't in the cell you're on then return false.

[3]. Third-step  &#8594; If neither of your checks in 1 or 2 trip, set the current cell to an empty space (to not be able to use this cell again), but store it before doing so. Then make your recursive calls to neighboring cells, looking for subsequent characters. Once you recursive calls return, restore the previous cell to it's original value and return the result of your recursive calls. If you iterate through the entire board never returning true, return false.

### Time Complexity

The complexity will be O(m∗n∗4<sup>s</sup>) where m is the no. of rows and n is the no. of columns in the 2D matrix and s is the length of the input string.

