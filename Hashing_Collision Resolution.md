## Collision Resolution Techniques
- There are two types of collision resolution techniques.
  1. Separate chaining (open hashing)
  2. Open addressing (closed hashing)
     
![Imaage](https://github.com/LifnaJos/Data_Structures-Theory-Lab-NADPC32/blob/main/CRT.jpg)
  
### Separate chaining / Open Hashing: 
- involves making a linked list out of the slot where the collision happened, then adding the new key to the list.
- used to describe how this connected list of slots resembles a chain.
- It is more frequently utilized when we are unsure of the number of keys to add or remove.
![Imaage](https://github.com/LifnaJos/Data_Structures-Theory-Lab-NADPC32/blob/main/separatechianing.jpg)
- Time complexity
  - Worst-case complexity for **Searching** : O(n).
  - Worst-case complexity for **Deletion** : O(n).
- Advantages
  - Easy to implement.
  - Hash table never fills full, so we can add more elements to the chain.
  - Less sensitive to the function of the hashing.
- Disadvantages
  - Cache performance of chaining is not good.
  - Memory wastage is too much
  - Requires more space for element links.
    
### Open addressing / Closed Hashing: 
- To prevent collisions in the hashing table, open addressing is employed as a collision-resolution technique.
- No key is kept anywhere else besides the hash table.
- As a result, the hash table’s size is never equal to or less than the number of keys. Additionally known as closed hashing.
- Types of Closed Hashing
  1. Linear probing
  2. Quadratic probing
  3. Double hashing
  
#### Linear probing: 
- This involves doing a linear probe for the following slot when a collision occurs and continuing to do so until an empty slot is discovered.
- The worst time to search for an element in linear probing is O(n).
- The cache performs best with linear probing, but clustering is a concern. This method’s key benefit is that it is simple to calculate.
  
![Image](https://github.com/LifnaJos/Data_Structures-Theory-Lab-NADPC32/blob/main/LP.jpg)

![Imaage](https://github.com/LifnaJos/Data_Structures-Theory-Lab-NADPC32/blob/main/Linear%20probing.jpg)
- Eg Scenario :
  - If slot hash (x) % S is full, then we try ( hash (x) + 1 ) % S
  - If ( hash (x) + 1 ) % S is also full, then we try ( hash (x) + 2) % S
  - If ( hash (x) + 2 ) % S is also full, then we try ( hash (x) + 3 ) % S
  - ..................................................  
- Disadvantages
  - The main problem is clustering.
  - It takes too much time to find an empty slot.
  
#### Quadratic probing: 
- When a collision happens in this, we probe for the i2-nd slot in the ith iteration, continuing to do so until an empty slot is discovered.
- In comparison to linear probing, quadratic probing has a worse cache performance.
- Additionally, clustering is less of a concern with quadratic probing.
![Image](https://github.com/LifnaJos/Data_Structures-Theory-Lab-NADPC32/blob/main/QP.jpg)
- Eg Scenario : Let hash (x) be the slot index computed using hash function.    
  - If slot hash(x) % S is full, then we try  ( hash (x) + 1*1 ) % S
  - If ( hash (x) + 1*1 ) % S is also full, then we try ( hash (x) + 2*2 ) % S
  - If ( hash (x) + 2*2 ) % S is also full, then we try ( hash (x) + 3*3 ) % S
  - ..................................................  

#### Double hashing: 
- In this, you employ a different hashing algorithm, and in the ith iteration, you look for (i * hash 2(x)).
- The determination of two hash functions requires more time.
- Although there is no clustering issue, the performance of the cache is relatively poor when using double probing.
![Image](https://github.com/LifnaJos/Data_Structures-Theory-Lab-NADPC32/blob/main/DH.jpg)
- Eg Scenario : Let hash(x) be the slot index computed using hash function.
  - If slot hash(x) % S is full, then we try (hash(x) + 1*hash2(x)) % S
  - If (hash(x) + 1*hash2(x)) % S is also full, then we try (hash(x) + 2*hash2(x)) % S
  - If (hash(x) + 2*hash2(x)) % S is also full, then we try (hash(x) + 3*hash2(x)) % S
  - ..................................................  

## Online Materials
- [Hashing Visualization from ACM](https://iswsa.acm.org/mphf/openDSAPerfectHashAnimation/perfectHashAV.html)
- [Hashing - Visualgo.net](https://visualgo.net/en/hashtable?slide=9-3)
- [Open Hashing](https://www.cs.usfca.edu/~galles/visualization/OpenHash.html)
- [Closed Hashing](https://www.cs.usfca.edu/~galles/visualization/ClosedHash.html)
- [Visualization of Separate Chaining](https://www.educative.io/answers/hash-table-collision-resolution)
- [Hashing - Java Point](https://www.javatpoint.com/hashing-open-addressing-for-collision-handling)
