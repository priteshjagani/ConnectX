Bugs Found:


InBounds(w,h):

- It is not written correctly because if the width is -1 which means it should return false. but instead of that it goes to another Height Check condition and if the height is 1, then it will return true! 
Which means technically at the whole function returns true even if the width is out of bounds.

At(w,h):

Returns the garbage value instead of INVALID/EMPTY/BLACK/WHITE.

For example: if you give at(110,5) - it should technically return INVALID/EMPTY/BLACK/WHITE but it returns 187230 (Which is garbage value).



placePiece(-1): Give Core Dump! Whenever you call the function with placePiece (-1) it will give Core Dump.
 


Constructor(2,2,4): Technically whenever you call such constructor it should give error because the grid is of 2x2.There is no way possible of 4 continuous blocks.

