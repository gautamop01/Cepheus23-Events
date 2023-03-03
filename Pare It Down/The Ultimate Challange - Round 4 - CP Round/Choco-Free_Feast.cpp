/*After defeating all the cylons, Cepheus Ciphers went to a food festival to re-energize themselves and have a small break after such a demanding and exhausting voyage.
Each stall is numbered from  to . From each food stall, they have to buy food items whose price is equal to the exact serial number of that stall.
But unfortunately, our Cepheus Ciphers are allergic to chocolates. Later, they found out that they have only  amount of money. Find out the maximum number of food stalls they can try.
The chocolate stalls are blacklisted as deadly and their serial number is given in an array.

Input Format

First line contains  - the number of test cases .
Each test case contains two lines.
The first line contains three integers ,  and . Where  stands for the number of stalls,  stands for total money and  for total number of blacklisted i.e deadly stalls.
Second line of each test case contains  integers which corresponds to the serial number of deadly food stalls.
Constraints

 ≤  ≤ 
 ≤   ≤ 
 ≤  ≤ 
Output Format

For each test case output in separate line the maximum number of food stalls Cepheus Ciphers can try.

Sample Input 0

1
8 6 4 
3 6 7 5  
Sample Output 0

2 
Explanation 0

They can try  and  food items so,  +  =  = .
*/

def maximum_food_stalls(n, m, d, blacklisted):
    food_stalls = [i for i in range(1, n + 1) if i not in blacklisted]
    food_stalls.sort()
    count = 0
    for i in food_stalls:
        if m >= i:
            count += 1
            m -= i
        else:
            break
    return count

t = int(input().strip())
for i in range(t):
    n, m, d = map(int, input().strip().split())
    blacklisted = list(map(int, input().strip().split()))
    result = maximum_food_stalls(n, m, d, blacklisted)
    print(result)
