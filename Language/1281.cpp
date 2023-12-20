#include<iostream>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int s=0;
        int p=1;
        while (n!=0){
            int r = n%10;
            p= p*r;
            s= s+r;
            n = n / 10;
        }
        int ans = p -s;
        return ans;
    }
};

int main()
{
    int n;
    cin>> n;
    Solution obj;
    int result = obj.subtractProductAndSum(n);
    cout << result << endl;
    return 0;
}
