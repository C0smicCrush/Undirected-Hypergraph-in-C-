# Undirected-Hypergraph-in-C-
This is an attempt at making a hypergraph in C++ with public methods to add vertices, add edges, remove vertices, remove edges, and some more in developement.
I have designed this implementation to have a focus on accessing edges, hence that is the section with the lowest time complexity.

The implementation for storing the keys is using an unordered map to hold the edges, which can be represented as k. The implementation for storing the vertices is 
through vectors, and the number of vertices can be represented as n.

**Please note that removal methods have the same complexity as their addition counterparts**

The Big-O notation for operations:
```diff
-Add Edge: O(k)

+Add Vertex: O(n)

-Add Vertex to Edge: O(k+n)

+Access Vertex: O(n)

-Access Edge: O(1)

```
