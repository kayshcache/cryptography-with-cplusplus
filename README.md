# cryptography-with-cplusplus
### Euclidean Algorithm
gcd(10, 102) = greatest common divisor of the numbers provided. Also known as the greatest common factor or the largest prime number that divides both/all the numbers provided in the function. The algorithm goes:If either a or b is zero the other number is the gcd of those numbers in accordance with A = B\*Q + R - the algorithm executes those instructions until that condition is met:
```
gcd( 1050, 108 )
Dividing 1050 and 108 is 9 with a remainder of 78.
= 1050 = 108 * 9 + 78
gcd ( 108, 78 )
= 108 = 78 * 1 + 30
gcd ( 78, 30 )
= 78 = 30 * 2 + 18;
gcd( 30, 18 )
= 30 = 18 * 1 + 12;
gcd ( 18, 12 )
= 18 = 12 * 1 + 6;
gcd ( 12, 6 )
= 12 = 6 * 2 + 0;
The remainder is 0 of gcd(12, 6) = gcd(6, 0);
THEREFORE:
gcd(1050, 108) = 6 = 1050x + 108y
1050x + 108y = 6
```
gcd (*ka, kb*) = *k* gcd (*a,b*).
- gcd (ka, kb) = k gcd (a, b)
### Quick notes - Set notation cheatsheet
Symbol | Meaning | Example
------ | ------- | -------
ℕ | Natural Numbers | `{1,2,3,...}` or `{0,1,2,3,...}`
ℤ | Integers | `{..., -3, -2, -1, 0, 1, 2, 3, ...}`
ℝ | Real Numbers | ...
a ∈ A	| Element of: a is in A	| 3 ∈ {1,2,3,4}
A ⊆ B	| Subset: A has some (or all) elements of B | {3,4,5} ⊆ D
A ⊇ B	| Superset: A has same elements as B, or more	| {1,2,3} ⊇ {1,2,3}
\|A\|	| Cardinality: the number of elements of set A | \|{3,4}\| = 2
∅	| Empty set = {} | {1,2} ∩ {3,4} = Ø
A ⊆ B	| Subset: A has some (or all) elements of B	| {3,4,5} ⊆ D
A ⊂ B	| Proper Subset: A has some elements of B	| {3,5} ⊂ D
A ⊄ B	| Not a Subset: A is not a subset of B | {1,6} ⊄ C
A ⊇ B	| Superset: A has same elements as B, or more	| {1,2,3} ⊇ {1,2,3}
A ⊃ B	| Proper Superset: A has B's elements and more | {1,2,3,4} ⊃ {1,2,3}
A ⊅ B	| Not a Superset: A is not a superset of B | {1,2,6} ⊅ {1,9}
