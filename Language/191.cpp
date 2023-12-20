#include <iostream>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while (n!=0){
            if (n&1){
                count ++;
            }
            n= n >> 1;
        }
        return count;
    }
};

int main()
{
    uint32_t n;
    cin >> n;

    Solution obj;
    int result = obj.hammingWeight(n);
    cout << result << endl;
    return 0;
}
