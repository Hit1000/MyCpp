/*
You are given an array of integers memory consisting of 0s and 1s -
whether the corresponding memory unit is free or not. memory[i] = 0 means that the
ith memory unit is free, and memory[i] = 1 means it's occupied. Your task is to
perform two types of queries: alloc X: Find the left-most memory block of X consecutive
free memory units and mark these units as occupied (ie: find the left-most
contiguous subarray of 0s, and replace them all with 1s). If there are no blocks
with X consecutive free units,
return -1;
otherwise
return the index of the first position of the allocated block segment
and assign an ID to every single element in this block, based on an atomic
counter (the counter starts at 1 and is incremented on every successful alloc operation).
erase ID: If there exists an allocated memory block with element ids equal to ID,
free all its memory units. Return the length of the deleted memory block. 
If there is no such ID or the block with this ID has already been deleted, 
return -1. 
The queries are given in the following format: queries is an array of 2-elements arrays; 
if queries[i][0] = 0 then this is an alloc type query, where X = queries[i][1]; 
if queries[i][0] = 1 then this is an erase type query, where ID = queries[i][1]. 
Return an array containing the results of all the queries. Note: You are not expected 
to provide the most optimal solution, but a solution with time complexity not worse than 
O(memory.length2 · queries.length) will fit within the execution time limit. 
Example 
For memory = [0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0] 
and queries = [[0, 2], [0, 1], [0, 1], [1, 2], [1, 4], [0, 4]], 
the output 
should be solution(memory, queries) = [2, 0, 4, 1, -1, -1]. 

Expand to see the example video. 
Note: If you are not able to see the video, use this link to access it. 
[0, 2] corresponds to alloc 2, which allocates a memory block from units 2 to 3. 
We also assign ID = 1 to this segment. After this operation 
memory = [0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 0, 0]. 
Return the memory block starting index - 2. [0, 1] corresponds to alloc 1, 
which allocates a memory block from units 0 to 0. 

After this operation, memory = [1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 0, 0]. 
We also assign ID = 2 to this segment. [0, 1] corresponds to alloc 1, 
which allocates a memory block from units 4 to 4. After this operation, 
memory = [1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0]. We also assign ID = 3 
to this segment. [1, 2] corresponds to erase 2. The range with ID = 2 is [0, 0] 
(just the 0th element). After freeing the memory, 
memory = [0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0]. Return the length of the 
removed memory block - 1. [1, 4] corresponds to erase 4. The current counter 
is equal to 3 (since there have been 3 successful allocations), so we return -1 
since there is no range with ID = 4. [0, 4] corresponds to alloc 4. There is no 
memory block of length 4 in which all blocks are free, so return -1. 

Input/Output 
[execution time limit] 0.5 seconds (cpp) 
[memory limit] 1 GB 
[input] array.integer memory An array of 0s and 1s representing bits of memory. 
Guaranteed constraints: 1 ≤ memory.length ≤ 300. 
[input] array.array.integer queries An array of 2-element arrays representing 
queries of the type alloc or erase. 
Guaranteed constraints: 2 ≤ queries.length ≤ 300, 
queries[i].length = 2, 0 ≤ queries[i][0] ≤ 1, 
If queries[i][0] = 0, 
then 1 ≤ queries[i][1] ≤ memory.length, 
If queries[i][0] = 1, then 1 ≤ queries[i][1] ≤ queries.length - 1. 

[output] array.integer Return an array in which the ith element is equal to the 
answer of the ith query.
*/