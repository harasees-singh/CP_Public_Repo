#include<iostream>
using namespace std;
char flip(char bit)
{
    return bit;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        //cout << "in the loop\n";
        string s;
        string dp[30000];
        cin >> s;
        char second_bit;
        second_bit = s[1];
        dp[0] = "0";
        if(second_bit == '1')
        {
            dp[1] = "0";
        }
        else
        {
            dp[1] = "11";
        }
        int len = s.size();
        char current_bit = second_bit;
        for(int i=2; i<len; i++)
        {
            s[i] == current_bit ? dp[i] = dp[i-1]: dp[i] = dp[i-2] + flip(current_bit);
            current_bit = s[i];
        }
        //cout << dp[len-1] << endl;
        printf("%s\n", dp[len-1]);
        printf("%s\n %s\n", dp[0], dp[2]);
    }
    //string s;
    //cin >> s;
    //string dp[40];
    //dp[0] = "yo what up";
    //cout << dp[0] << dp[1] << endl;
    //cout << "debug";
    return 0;
}