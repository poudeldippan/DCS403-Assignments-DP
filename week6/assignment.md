Question 1

someAlgorithm(int n){
 Assignment
 for(i=n-2; i>=1; i--)
 Arithmetic operation
 Output
 for(i=0; i<n; i++)
 Comparison
 for(i=0; i<6; i++)
 Assignment
 }
 Total running time: c+(n-2)c+c+nc+6c
 Function: 2n+6
 Time Complexity: O (n)
Question 2
someAlgorithm(int n)
 {
 Input
 for(i=n; i>=1; i=i-4)
 Arithmetic operation
 Output
 }
 Total running time: c+(n/4)c+c
 Function: n/4+2
 Time Complexity: O (n)
Question 3
someAlgorithm(int n)
 {
 Input
 for(i=1; i<=n; i=i+5)
 Comparison
 Output
 }
 Total running time: c+(n/5)c+c
 Function: n/5+2
 Time Complexity: O (n)
Question 4
someAlgorithm(int n)
 {
 Assignment
 for(i=n; i>=1; i/=2)
 Arithmetic operation
 Output
 }
Total running time: c+log₂(n)c+c
 Function: log n + 2
 Time Complexity: O (log n)
Question 5
someAlgorithm(int n)
 {
 Assignment
 for(i=1; i<=n; i*=2)
 Arithmetic operation
 Output
 }
 Total running time: c+log₂(n)c+c
 Function: log n + 2
 Time Complexity: O (log n)
Question 6
someAlgorithm(int n)
 {
 Input
 for(i=0; i<n; i++)
 {
 Assignment
 for(j=0; j<n; j++)
 Comparison
 }
 Arithmetic operation
 Output
 }
 Total running time: c+n(c+nc)+c+c
 Function: n² + n + 2
 Time Complexity: O (n²)
Question 7
someAlgorithm(int n)
 {
 Input
 for(i=0; i<n; i++)
 {
 for(i=n; i>=1; i/=2)
 Arithmetic operation
 for(j=0; j<n; j++)
 Comparison
 }
 Arithmetic operation
 Output
 }

 Total running time: c+n(log n c + nc)+c+c
 Function: n² + n log n + 2
 Time Complexity: O (n²)
Question 8
someAlgorithm(int n)
 {
 input
 for(i=0; i<n; i++)
 for(j=0; j<n; j++)
 for(k=0; k<n; k++)
 comparison
 arithmetic operation
 for(i=0; i<n; i++)
 for(j=10; j>=1; j--)
 assignment
 }
 Total running time: c+n³c+c+10nc
 Function: n³+10n+2
 Time Complexity: O (n³)
Question 9
someAlgorithm(int n)
 {
 Assignment
 for(i=0; i<n; i++)
 for(j=0; j<=i; j++)
 arithmetic operation
 output
 }

 Running time: c+(n(n+1))/2 c+c
 Function: (n(n+1))/2 + 2
 Time Complexity: O (n²)