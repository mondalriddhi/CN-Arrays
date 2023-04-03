/* Given an array of length N, you need to find and print the sum of all elements of the array.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Output Format :
Sum
Constraints :
1 <= N <= 10^6
Sample Input :
3
9 8 9
Sample Output :
26

*/

#include <iostream>
#include <climits>
using namespace std;

int main(){
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */
    int i,n,arr[100];
    int sum=0;
    cin>>n;
    for(i=0;i<=n-1;i++){
        cin>>arr[i];
       // sum=sum+arr[i]
    }
    for(i=0;i<=n-1;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}



