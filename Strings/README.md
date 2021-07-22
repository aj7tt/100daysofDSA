




# String Searching Meethod 


- **1. Naïve algorithm:**

The naive approach for solving the string searching problem is accomplished by performing a Brute-Force comparison of each character in the pattern at each possible placement of the pattern in the string. This algorithm is O(mn) in the worst case.

- **2. Rabin – Karp algorithm:**

String matching algorithm that compares string’s hash values, rather than string themselves. Performs well in practice, and generalized to other algorithm for related problems, such as two dimensional pattern matching.

- **3. Knuth-Morris-Pratt algorithm:**

It is improved on the Brute-force algorithm and the new algorithm is capable of running O(m+n) in the worst case. This algorithm improves the running time by taking advantage of tagged borders.

- **4. Boyer-Moore algorithm:**

The idea behind the Boyer-Moore algorithm is information gain. Here information is gained by beginning the comparison from the end of the pattern instead of the beginning.
It performs the string searching task in sub linear time in the average case, which even KMP algorithm could not accomplish at that time.
