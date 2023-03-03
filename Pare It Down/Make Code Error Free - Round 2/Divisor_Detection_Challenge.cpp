/*
In Cepheus World, you have been given a task to find the number of divisors of a positive integer , where  is greater than . There is a code provided to you for this purpose, but it has some flaws and does not work for all test cases. Your challenge is to identify and fix the bugs in the code to determine the correct number of divisors for a given .

Input Format

Each test case contains an integer .
Output Format

For each test case output a single integer.

Sample Input 0
8
Sample Output 0
4
Explanation 0

8 has 4 divisors, they are 1, 2, 4 and 8.

#include <iostream>
using namespace std;
int main() {
  	int n, other;
  	cin>>n;
  
  	int result = 0;
    int j = 2;
    
  	while(j*j < n){
      if(n%j == 0){
        result = result + 1;
        other = n/j;
        result = result + 1;
      }
      j++;
    }
  	
  	cout<<result<<endl;
	return 0;
}
*/

#include <iostream>
using namespace std;

int main() {
int n;
cin >> n;
int result = 0;
for (int i = 1; i <= n; i++) {
if (n % i == 0) {
result++;
}
}
cout << result << endl;
return 0;
}
