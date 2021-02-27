# Array

Properties:
Linear data strcuture.
Elements of same data type, stored at continuous memory addresses.		
Size is defined at compilation stage.
Index values are 0,1,2 ... (size-1)
Used as the building blocks to build other data structures.
Used to implement sorting algorithms like bubble sort.
    
Advantages: Fast access, if memory requirement is known at coding-time, one can avoid memory wastage.

Disadvantages: Size must be fixed at coding-time. 

Time Complexity:
Access Ω(1), Θ(1), O(1)	        
Search Ω(1), Θ(n), O(n)       
Insertion while having some reference to existing data Θ(n), O(n)  
Insert at index Ω(1), Θ(1), O(1)

Space Complexity:
O(n)