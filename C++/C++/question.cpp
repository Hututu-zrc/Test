//#define _CRT_SECURE_NO_WARNINGS
////using namespace std;
////#include <unordered_map>
////#include <utility>
////#include <string>
//////我的想法是dfs首先可以找出里面所有的岛屿
//////其次，dfs过程中我们还要判断岛屿是否存在成环的情况
//////最后，我们再根据题目给的判断条件进行判断是否存在子岛屿情况 
////int T, M, N;
////vector<string>arr(12);
////unordered_map<int, unordered_map<int, int> > m;
////int flag = 0;
////void dfs(int i, int j)
////{
////	if (i >= M || i<0 || j>=N || j < 0 || arr[i][j]=='0')
////		return;
////	m[i][j]++;
////	arr[i][j] = '0';
////	if (m[i][j] > 1)
////		flag = 1;
////	dfs(i + 1, j);
////	dfs(i - 1, j);
////	dfs(i, j + 1);
////	dfs(i, j - 1);
////
////
////}
////int main()
////{
////	cin >> T;
////	for (int k = 0; k < T; k++)
////	{
////		cin >> M >> N;
////		for (int i = 0; i < M; i++)
////				cin >> arr[i];
////
////		int count = 0;
////		for (int i = 0; i < M; i++)
////		{
////			for (int j = 0; j < N; j++)
////			{
////				flag = 0;
////				if (arr[i][j] != '0')
////				{
////					dfs(i, j);
////					if (flag == 1)
////					{
////
////					}
////				}
////			}
////		}
////		cout << "count : " << count << endl;
////	}
////	return 0;
////}
//
////#include <iostream>
////using namespace std;
////#include <string>
////
////void InitString(string& s)
////{
////	s.insert(0, 1, '^');
////	s += "!";
////	for (int i = 0; i < s.size(); i++)
////		if (s[i++] != '#')
////			s.insert(i, 1, '#');
////
////}
////
////
////int main()
////{
////	string s;
////	cin >> s;
////	//首先，将我们得到的字符串初始化，主要目的就是为了防止字符串长度为偶数的情况
////	//我们初始化的方法就是，将头尾之间插入不同的字符，作为哨兵字符
////	//然后，我们再将每两个字符之间插入相同的分隔符
////	//我们的操作并不影响我们的回文子串
////	InitString(s);
////	for (auto& it : s)
////		cout << it << " ";
////	int ans = 0;
////	//对每一个字符进行回文遍历
////	for (int i = 1; i < s.size(); i++)
////	{
////		int len = 0;//我们这里利用len起始值为零
////		//我们这里还有一个值得注意的是，因为我们添加了字符。
////		//所以，我们len的长度就是我们回文子串的长度
////		while (s[i + len + 1] == s[i - len - 1])//分别向两侧进行对比
////			len++;
////		if (len > ans)
////			ans = len;
////	}
////	cout << endl << "length = " <<ans << endl;
////	return 0;
////}
////
////#include <iostream>
////using namespace std;
////#include<vector>
////#include<string>
////class Solution {
////public:
////    vector<string> result;
////    // bool valid(string& s, int start, int num)
////    // {
////    //     string str = s.substr(start,  num);
////    //     long long tmp = stoi(str);
////    //     if (tmp >= 0 && tmp <= 255 && s[start] != '0')
////    //         return true;
////    //     return false;
////    // }
////    bool isValid(const string& s, int start, int num) {
////        if (start > start + num) {
////            return false;
////        }
////        if (s[start] == '0' && start != start + num) { // 0开头的数字不合法
////            return false;
////        }
////        int nu = 0;
////        for (int i = start; i <= start + num; i++) {
////            if (s[i] > '9' || s[i] < '0') { // 遇到非数字字符不合法
////                return false;
////            }
////            nu = nu * 10 + (s[i] - '0');
////            if (nu > 255) { // 如果大于255了不合法
////                return false;
////            }
////        }
////        return true;
////    }
////    void backtracking(string& s, int index, int interval, int potnum)
////    {
////        if (potnum == 3)
////        {
////            if (isValid(s, index, s.size() - index))
////                result.emplace_back(s);
////            return;
////        }
////        for (int i = index; i < s.size(); i++)
////        {
////            if (isValid(s, index, i - index + 1))
////            {
////                s.insert(i + 1, 1, '.');
////                backtracking(s, i + 2, interval, potnum + 1);
////                s.erase(i + 1, 1);
////            }
////            else
////                break;
////
////
////        }
////        return;
////    }
////    vector<string> restoreIpAddresses(string s)
////    {
////        backtracking(s, 0, s.size() / 4, 0);
////        return result;
////    }
////};
////
//// int main()
//// {
////     string s;
////     cin >> s;
////     Solution solution;
////     solution.restoreIpAddresses(s);
////     for (int i = 0; i < solution.result.size(); i++)
////         cout << solution.result[i] << endl;
////     return 0;
//// }
//
//
////using namespace std;
////#include <iostream>
////#include <unordered_map>
////#include<vector>
////#include<string>
////class Solution {
////public:
////    vector<vector<int>> result;
////    vector<int> path;
////    unordered_map<int, int> m;
////    void backtracking(vector<int>& nums, int index)
////    {
////        if (path.size() >= 2)
////            result.emplace_back(path);
////
////        for (int i = index; i < nums.size(); i++)
////        {
////            if ((i > 0 && nums[i] < nums[i - 1]))
////                continue;
////            if (i > index && m[nums[i]]==1)
////                continue;
////            path.emplace_back(nums[i]);
////            m[nums[i]] = 1;
////            backtracking(nums, i + 1);
////            m[nums[i]] = 0;
////            path.pop_back();
////        }
////        return;
////    }
////    vector<vector<int>> findSubsequences(vector<int>& nums) {
////
////        backtracking(nums, 0);
////        return result;
////    }
////};
////
////int main()
////{
////    Solution s;
////    vector<int> nums{ 4,6,7,7 };
////    s.findSubsequences(nums);
////    for (auto& it : s.result)
////    {
////        for (auto& i : it)
////            cout << i << " ";
////    cout << endl;
////
////    }
////    return 0;
////}
////#include <iostream>
////#include <vector>
////#include <string>
////#include<set>
////using namespace std;
////class Solution {
////public:
////    class Compare 
////    {
////    public:
////        bool operator()(const vector<string>& v1, const vector<string>& v2) const 
////        {
////            for (int i = 0; i < v1.size() && i < v2.size(); i++)
////                if (v1[i] != v2[i])
////                    return v1[i] < v2[i];
////
////        }
////    };
////
////    set<vector<string>, Compare> scheme;
////    vector<string> result;
////    bool hash[301];
////    int count = 0;
////    void backtracking(vector<vector<string>>& tickets, string s) {
////        if (count== tickets.size()) {
////            scheme.insert(result);
////            return;
////        }
////        for (int i = 0; i < tickets.size(); i++) {
////            if (tickets[i][0] != s || hash[i] == true) {
////                continue;
////            }
////            result.emplace_back(s);
////            hash[i] = true;
////            count++;
////            backtracking(tickets, tickets[i][1]);
////            hash[i] = false;
////            count--;
////            result.pop_back();
////        }
////    }
////    vector<string> findItinerary(vector<vector<string>>& tickets) {
////        backtracking(tickets, "JFK");
////        return *(scheme.begin());
////    }
////};
////
////
////// 读取函数，用于读取 tickets 输入
////vector<vector<string>> readTickets() {
////    vector<vector<string>> tickets;
////    int n;
////    cout << "请输入航线数目：";
////    cin >> n;
////    cout << "请按照格式输入航线：" << endl;
////    for (int i = 0; i < n; ++i) {
////        string from, to;
////        cout << "航线 " << i + 1 << ": ";
////        cin >> from >> to;
////        tickets.push_back({ from, to });
////    }
////    return tickets;
////}
////
////int main() {
////    // 读取 tickets 输入
////    vector<vector<string>> tickets = readTickets();
////
////    // 打印读取结果
////    cout << "读入的航线信息为：" << endl;
////    for (const auto& ticket : tickets) {
////        cout << "[" << ticket[0] << ", " << ticket[1] << "]" << endl;
////    }
////    Solution so;
////    vector<string> result=so.findItinerary(tickets);
////    for (auto& it : result)
////        cout << it << " ";
////    cout << endl;
////    return 0;
////}
//
////#include <iostream>
////#include<string>	
////#include <list>
////#include<cstring>
////using namespace std;
////
////int flag1 = 0, flag2 = 0;
////void My_Print(const string& s, int i, int j, int dis1, int dis2)
////{
////	cout << s[i] << " " << s[j] << "   dis1= " << dis1 << " dis2= " << dis2 << endl;
////}
////int diff(const string& s1, const string& s2, int val)
////{
////	char ch1 = s1[val];
////	char ch2 = s2[val];
////	string s = "012345678901234567890123456789";
////	int dis1 = 1, dis2 = 1, i = 0, j = 0;
////	for (i = ch1 - '0' + 9, j = ch1 - '0' + 11; j < s.size() && i >= 0;)
////	{
////		//My_Print(s,i,j,dis1,dis2);
////		if (ch2 != s[i])
////		{
////			dis1++;
////			i--;
////		}
////		if (ch2 != s[j])
////		{
////			dis2++;
////			j++;
////		}
////		if (ch2 == s[j] && ch2 == s[i])
////		{
////			//My_Print(s,i,j,dis1,dis2);
////			break;
////		}
////
////	}
////	if (j > 19)
////		flag2 = 1;
////	if (i <= 9)
////		flag1 = 1;
////	//cout<<"dis1= "<<dis1<<" dis2= "<<dis2;
////	return dis1 > dis2 ? dis2 : dis1;
////}
////int main()
////{
////	int n = 0;
////	cin >> n;
////	string s1, s2;
////	cin >> s1 >> s2;
////	int dp[n], v[n];
////	memset(dp, 0, sizeof(dp));
////	memset(v, 0, sizeof(v));
////	dp[n - 1] = v[n - 1] = diff(s1, s2, n - 1);
////	//cout<<dp[n-1]<<endl;
////	for (int i = n - 2; i >= 0; i--)
////	{
////		v[i] = diff(s1, s2, i);
////		if (flag1 == 1)
////		{
////			for (int j = i - 1; j >= 0; j++)
////			{
////				if (s1[j] == '0' && j > 0)
////				{
////					s1[j] = '9';
////					s1[j - 1] -= '1';
////				}
////				else if (s1[j] == '0' && j == 0)
////					s1[j] = '9';
////				s1[j] -= '1';
////			}
////		}
////		if (flag2 == 1)
////		{
////			for (int j = i - 1; j >= 0; j++)
////			{
////				if (s1[j] == '9' && j > 0)
////				{
////					s1[j] = '0';
////					s1[j - 1] += '1';
////				}
////				else if (s1[j] == '9' && j == 0)
////					s1[j] = '9';
////				s1[j] += '1';
////			}
////		}
////		dp[i] += dp[i + 1] + v[i];
////	}
////	cout << "result : " << dp[0] << endl;
////	return 0;
////}
//
////#include <iostream>
////#include<vector>
////#include <initializer_list>
////using namespace std;
////class Solution {
////public:
////    int jump(vector<int>& nums) {
////        if (nums.size() == 1)
////            return 0;
////        if (nums[0] >= nums.size() - 1)
////            return 1;
////        // vector<int> dp_count(nums.size());
////        // vector<int> dp_val(nums.size());
////        // dp_val[0]=nums[0];
////        // dp_count[0]=1;
////        vector<int> dp(nums.size());
////        dp[0] = 0;
////        for (int i = 0; i < nums.size(); i++)
////        {
////            // dp_val[i]=max(dp_val[i-1],nums[i]+i);
////            // if(dp_val[i]>=i) dp_count[i]=dp_count[i-1];
////            // int j=i;
////            // if(i!=0)
////            //     j=nums[i-1]+i-1;
////            for (int j = i+1; j <= nums[i] + i && j < nums.size(); j++)
////            {
////                if (dp[j] == 0)    dp[j] = dp[i] + 1;
////                else    dp[j] = dp[i];
////            }
////            if (dp[nums.size() - 1] != 0)
////                break;
////            // if(nums[i]+i)
////
////        }
////        return dp[nums.size() - 1];
////    }
////};
////
////int main()
////{   
////    vector<int> temp({ 2, 3, 1, 1, 4 });
////    Solution so;
////    int ret=so.jump(temp);
////    cout << ret << endl;
////    return 0;
////}
//
//
////#include <vector>
////#include<iostream>
////using namespace std;
////#include<algorithm>
////#include<numeric>
////class Solution {
////public:
////    int candy(vector<int>& ratings) {
////        // vector<int> dp(ratings.size());
////        // dp[0]=1;
////        // ratings[1]>ratings[0]?dp[1]=2:dp[1]=1;
////        // for(int i=2;i<ratings.size();i++)
////        // {
////        //     if(ratings[i]>ratings[i-1])   dp[i]=2*dp[i-1]-dp[i-2]+1;
////        //     else dp[i]=2*dp[i-1]-dp[i-2];
////
////        // }
////        // return dp[ratings.size()-1];
////        // if(ratings.size()==1)
////        //     return 1;
////        // int min_num=1;
////        // vector<int> account(ratings.size(),1);
////        // for(int i=0;i<ratings.size()-1;i++)
////        // {
////        //     if(ratings[i]<ratings[i+1])
////        //     {
////        //         min_num+=account[i]+1;
////        //         account[i+1]=account[i]+1;
////        //     }
////        //     else if(ratings[i]>ratings[i+1])
////        //     {   if(account[i]>1)
////        //             min_num+=account[i]-1;
////        //         else
////        //         {
////        //             min_num+=account[i]+1+1;
////        //             account[i]+=1;
////
////        //         }
////        //     }
////        //     else
////        //     {
////        //         min_num+=account[i+1];
////        //     }
////
////        // }
////        // vector<int> dp(ratings.size());
////        // dp[0]=1;
////        // for(int i=1;i<ratings.size();i++)
////        // {
////        //     if(ratings[i]>ratings[i-1])
////        //         dp[i]+=dp[i-1]+2;
////        //     else
////        // }
////        // return min_num;
////        vector<int> account(ratings.size(), 1);
////        for (int i = 1; i < ratings.size(); i++)
////        {
////            if (ratings[i] > ratings[i - 1])
////                account[i] = account[i - 1] + 1;
////            else if(ratings[i] < ratings[i- 1])
////            {
////                int j = i;
////                if (account[j - 1] == 1)
////                {
////                    // 1,2,3,1,0
////                    //[1,2,87,87,87,2,1]
////                    while (j >= 1 && ratings[j] < ratings[j - 1]&& account[j]>=account[j-1])//1,3,2,2,1
////                    {
////                        account[j - 1] += 1;
////                        j--;
////                    }
////                    account[i] = account[i - 1] - 1;
////                }
////
////            }
////           
////        }
////        return accumulate(account.begin(), account.end(), 0);
////    }
////};
//
//
////
////
////class Solution {
////public:
////    static bool compare(const vector<int>& val1, const vector<int>& val2)
////    {
////        if (val1[0] == val2[0])
////            return val1[1] < val2[1];
////        return val1[0] < val2[0];
////    }
////    void Myprint(const vector<vector<int>>& s)
////    {
////        for (int i = 0; i <s.size(); i++)
////        {
////            cout << s[i][0] << " " << s[i][1] << endl;
////        }
////    }
////    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
////        if (intervals.size() == 1)
////            return 0;
////        sort(intervals.begin(), intervals.end(), compare);
////        Myprint(intervals);
////        int result = 0;
////        for (int cur = 1; cur < intervals.size();)
////        {
////            if (intervals[cur][0] < intervals[cur - 1][1])
////            {
////                result++;
////                intervals.erase(intervals.begin() + cur);
////            }
////            else
////                cur++;
////        }
////        return result;
////    }
////};
////
////
////int main() {
////    std::vector<std::vector<int>> points = {
////        {-52, 31},
////        {-73, -26},
////        {82, 97},
////        {-65, -11},
////        {-62, -49},
////        {95, 99},
////        {58, 95},
////        {-31, 49},
////        {66, 98},
////        {-63, 2},
////        {30, 47},
////        {-40, -26}
////    };
////    Solution s;
////    s.eraseOverlapIntervals(points);
////    return 0;
////}
//
////class Solution {
////public:
////    int candy(vector<int>& ratings) {
////        vector<int> account(ratings.size(), 1);
////        for (int i = 1; i < ratings.size(); i++)
////            if (i > 0 && ratings[i - 1] < ratings[i])
////                account[i] += account[i - 1];
////        int result = 0;
////        for (int i = ratings.size() - 2; i >= 0; i--)
////        {
////            if (ratings[i] > ratings[i + 1] && account[i] <= account[i + 1])
////                account[i] = account[i + 1] + 1;
////            result += account[i];
////        }
////        return result + account[ratings.size() - 1];
////
////    }
////};
////int main()
////{
////    Solution s;
////    vector<int> temp{ 1,2,87,87,87,2,1 };
////
////    int ret=s.candy(temp);
////    cout << ret << endl;
////    return 0;
////}
//
//
////class Solution {
////public:
////    static bool compare(const vector<int>& val1, const vector<int>& val2)
////    {
////        if (val1[0] == val2[0])
////            return val1[1] < val2[1];
////        return val1[0] < val2[0];
////    }
////    vector<vector<int>> merge(vector<vector<int>>& intervals) {
////        if (intervals.size() == 1)
////            return intervals;
////        sort(intervals.begin(), intervals.end(), compare);
////        vector<vector<int>> result;
////        int left = intervals[0][0], right = 0;
////        for (int i = 1; i < intervals.size(); i++)
////        {
////            if (intervals[i - 1][1] >= intervals[i][0])
////            {
////                right = max(right, intervals[i][1]);
////            }
////            else
////            {
////                result.emplace_back(vector<int>{left, right});
////                left = intervals[i][0];
////            }
////
////        }
////        return result;
////    }
////};
////int main()
////{
////    Solution s;
////    vector<vector<int>> tmp{ {1,4 },{4,5} };
////    s.merge(tmp);
////    return 0;
////}
//
//
//
////#include <vector>
////#include<iostream>
////using namespace std;
////#include<algorithm>
////#include<numeric>
////class Solution {
////public:
////    int m1, n1;
////    int result = 0;
////    void dfs(int i, int j)
////    {
////        if (i == m1 - 1 && j == n1 - 1)
////        {
////            result++;
////            return;
////        }
////        else if (i >= m1 || j > n1)
////            return;
////        dfs(i, j + 1);
////        dfs(i + 1, j);
////    }
////    int uniquePaths(int m, int n) {
////        m1 = m; n1 = n;
////        dfs(0, 0);
////        return result;
////    }
////};
////int main()
////{
////    Solution s;
////    cout << "result :" << s.uniquePaths(23, 12) << endl;
////    return 0;
////}
//
////#include <iostream>
////using namespace std;
////#include <vector>
////#include <string>
////#include <stack>
////#include <set>
////
////int result;
////stack<pair<int, int> > sp;
////void Change(vector<string>& s, int x, int y)
////{
////    for (int i = 0; i < 4; i++)
////    {
////        if (s[x][i] == '-')
////            s[x][i] = '+';
////        else
////            s[x][i] = '-';
////    }
////    for (int i = 0; i <4; i++)
////    {
////        if (s[i][y] == '-')
////            s[i][y] = '+';
////        else
////            s[i][y] = '-';
////    }
////    if (s[x][y] == '+')
////        s[x][y] = '-';
////    else
////        s[x][y] = '+';
////}
////void dfs(vector<string>& s, int result)
////{
////    for (int i = 0; i < 4; i++)
////    {
////        for (int j = 0; j < 4; j++)
////        {
////            if (s[i][j] == '+')
////            {
////                Change(s, i, j);
////                sp.push(make_pair(i, j));
////                dfs(s, result + 1);
////                sp.pop();
////            }
////        }
////    }
////    return;
////}
////int main()
////{
////    vector<string> input(4);
////    for (int i = 0; i < 4; i++)
////        cin >> input[i];
////    dfs(input, 0);
////    cout << result << endl;
////    while (!sp.empty()) {
////        std::cout << sp.top().first << " " << sp.top().second << std::endl;
////        sp.pop();
////    }
////
////    return 0;
////}
////
////#include <iostream>
////using namespace std;
////#include <vector> 
////
////class Solution
////{
////public:
////    int ClimbStairs(int n, int m)
////    {
////        vector<int> dp(n + 1, 0);
////        dp[0] = 1;
////        for (int j = 1; j <= n; j++)
////        {
////            for (int i = 1; i <= m; i++)
////            {
////                if (j >= i) dp[j] += dp[j - i];
////            }
////        }
////        return dp[n];
////    }
////
////};
////int main()
////{
////    int n, m;
////    cin >> n >> m;
////    Solution solution;
////    cout << solution.ClimbStairs(n,m) << endl;
////    return 0;
////}
//
//#include <vector>
//using namespace std;
//#include <string>
//#include <algorithm>
////class Solution {
////public:
////    bool wordBreak(string s, vector<string>& wordDict) {
////        vector<bool> dp(s.size() + 1, false);
////        dp[0] = true;
////        for (int j = 0; j < s.size(); j++)
////        {
////            for (int i = 0; i <= j; i++)
////            {
////                string word = s.substr(i, j - i + 1);
////                if (find(wordDict.begin(), wordDict.end(), word) != wordDict.end() && i > 0 && dp[i - 1] == true)
////                {
////                    dp[j] = true;
////                }
////            }
////        }
////        return dp[s.size() - 1];
//////    }
//////};
////class Solution {
////public:
////    int lengthOfLIS(vector<int>& nums) {
////        vector<int> dp(nums.size() + 1, 1);
////        int result = 0;
////        for (int i = 1; i < nums.size(); i++)
////        {
////            for (int j = 0; j < i; j++)
////            {
////                if (nums[i] > nums[j]) dp[i] = max(dp[i], dp[j] + 1);
////            }
////            result < dp[i] ? result = dp[i] : 1;
////        }
////        return result;
////    }
////};
//
////class Solution {
////public:
////    int maxSubArray(vector<int>& nums) {
////        //dp[i]表示0~i的所有连续子数组的集合
////        //MAX       
////        vector<int> dp(nums.size() + 1, 0);
////        dp[0] = nums[0];
////        for (int i = 1; i < nums.size(); i++)
////        {
////            if (nums[i] + dp[i - 1] < nums[i])
////                dp[i] = nums[i];
////            else
////                dp[i] = dp[i - 1] + nums[i];
////            // for(int j=0;j<i;j++)
////            // {
////
////            // }
////        }
////        return dp[nums.size() - 1];
////    }
////};
////
////int main()
////{
////    vector<int> nums{ -2,1,-3,4,-1,2,1,-5,4 };
////    Solution s;
////    s.maxSubArray(nums);
////    return 0;
//////}
////
////#include <vector>
////#include <iostream>
////using namespace std;
////#include <string>
////int main()
////{
////	int N;
////	cin >> N;
////	vector<int> result;
////	//vector<char> s(20);
////	string alp = "ABCDEF";
////	//for (int i = 10, j = 0; i < 16; i++)
////	//{
////	//	s[i] = alp[j];
////	//	j++;
////	//}
////	while (N != 0)
////	{
////		int tmp = N % 16;
////		N /= 16;
////		result.emplace_back(tmp);
////	}
////	for (int i = result.size() - 1; i >= 0; i--)
////	{
////		if (result[i] >= 10)
////			cout << alp[result[i]-10] << " ";
////		else
////			cout << result[i] << " ";
////	}
////}
//
////#include <iostream>
////using namespace std;
////#include <string>
////int main()
////{
////    string s1, s2;
////    getline(cin, s1);
////    getline(cin, s2);
////    int hash[200] = { 0 };
////    int slow = 0;
////    for (int i = 0; i < s2.size(); i++)
////        hash[s2[i] - 'A']++;
////    int fast = slow;
////    for (; fast < s1.size(); fast++)
////    {
////        if (!isalpha(s1[fast]) || hash[s1[fast] - 'A'] == 0)
////            s1[slow++] = s1[fast];
////    }
////    cout << s1.substr(0,slow+1) << endl;
////    return 0;
////}
//
////#include <iostream>
////using namespace std;
////#include <string>
////int main()
////{
////    string s1, s2;
////    getline(cin, s1);
////    getline(cin, s2);
////    int hash[200] = { 0 };
////    int slow = 0;
////    for (int i = 0; i < s2.size(); i++)
////        hash[s2[i] ]++;
////    int fast = slow;
////    for (; fast < s1.size(); fast++)
////    {
////        if ( hash[s1[fast]] == 0)
////            s1[slow++] = s1[fast];
////    }
////    cout << s1.substr(0, slow + 1) << endl;
////    return 0;
////}
//
////#include <iostream>
////using namespace std;
////#include <cstdio>
////int main()
////{
////	int N;
////	char ch;
////	cin >> N >> ch;
////	if (N == 1)
////	{
////		cout << ch << endl;
////		return 0;
////	}
////	if (N < 7)
////	{
////		printf("%c\n%d", ch, N - 1);
////		return 0;
////	}
////
////	//    int height = 2;
////	//    int tmp = N - 1;
////	//    for (int i = 2;; i++)
////	//    {
////	//        tmp -= ((2 * height) - 1) * 2;
////	//        cout << height << tmp << endl;
////	//        if (tmp <= 0)
////	//            break;
////	//        height++;
////	//    }
////	//    height -= 1;
////	//    //cout<<height<<endl; 
////	//    for (int i = height; i > 0; i--)
////	//    {
////	//        for (int j = height - i; j > 0; j--)
////	//            cout << " ";
////	//        for (int j = 2 * i - 1; j > 0; j--)
////	//            cout << ch;
////	//        cout << endl;
////	//    }
////	//    for (int i = 2; i <= height; i++)
////	//    {
////	//        for (int j = height; j > i; j--)
////	//            cout << " ";
////	//        for (int j = 0; j < 2 * i - 1; j++)
////	//            cout << ch;
////	//        cout << endl;
////	//    }
////	//    int ret = tmp + (2 * (height + 1) - 1)*2;
////	//    if (ret != 0)
////	//        cout << ret << endl;
////	int tmp = N - 1;
////	int pile = 1;
////	for (int i = 2;; i++)
////	{
////		tmp -= ((2 * i) - 1) * 2;
////		if (tmp < 0)
////			break;
////		pile = i;
////	}
////	//打印上层
////	for (int i = pile; i > 0; i--)
////	{
////		for (int j = pile; j > i; j--)
////			cout << " ";
////		for (int j = 0; j < 2 * i - 1; j++)
////			cout << ch;
////		cout << endl;
////	}
////	//cout<<"pile = "<<pile<<endl;
////	//打印下层
////	for (int i = 2; i <= pile; i++)
////	{
////		for (int j = i; j < pile; j++)
////			cout << " ";
////		for (int j = 0; j < 2 * i - 1; j++)
////			cout << ch;
////		cout << endl;
////	}
////	if (tmp < 0 && tmp + ((pile + 1) * 2 - 1) * 2 != 0)
////		cout << tmp + ((pile + 1) * 2 - 1) * 2;
////	//	else if(tmp>0)
////	//		cout<<tmp;
////	return 0;
////}
//
////#include <iostream>
////using namespace std;
////#include <numeric>
////#include <cstdio>
////#include <algorithm>
////long long gcd(long long a, long long b) {
////	return b == 0 ? a : gcd(b, a % b);
////}
////
////long long lcm(long long a, long long b)
////{
////	return a * b / gcd(a, b);
////}
////
////int main()
////{
////	int input = 0;
////	scanf("%d", &input);
////	long long arr[10][2];
////	long long  tmp1, tmp2;
////	for (int i = 0; i < input; i++)
////	{
////		if (scanf("%lld/%lld", &tmp1, &tmp2))
////		{
////			arr[i][0] = tmp1;
////			arr[i][1] = tmp2;
////		}
////	}
////	if (input == 1)
////	{
////		arr[0][0]<0?
////	}
////	long long lcm_result = arr[0][1];
////	for (int i = 1; i < input; i++)
////		if (arr[i][1] != 0 && lcm_result > 0)
////			lcm_result = lcm(lcm_result, arr[i][1]);
////	for (int i = 0; i < input; i++)
////		if (arr[i][1] != 0 && lcm_result>=arr[i][1])
////			arr[i][0] *= (lcm_result / arr[i][1]);
////		else if(arr[i][1]==0)
////			arr[i][0] *= lcm_result;
////	int upper = 0;
////	for (int i = 0; i < input; i++)
////		upper += arr[i][0];
////	long long  temp = 0;
////	upper < 0 ? temp = -upper : temp = upper;
////	long long  gcd_result = gcd(temp, lcm_result);
////	upper /= gcd_result;
////	lcm_result /= gcd_result;
////	long  inte = upper / lcm_result;
////	long  ret = upper - inte * lcm_result;
////	if (inte != 0 && ret != 0)
////		cout << inte << " " << ret << "/" << lcm_result;
////	else if (inte != 0 && ret == 0)
////		cout << inte << endl;
////	else
////		cout << ret << "/" << lcm_result;
////	//long long int max=0,sum=0;
//////	//求出分母最大的数 
//////	for(int i=0;i<input;i++)
//////	{
//////		if(max<arr[i][1])
//////			max=arr[i][1];
//////	}
//////	int signal = 1;
//////	for (int i = max; i > 0; i++)
//////	{
//////		//寻找最小公倍数 
//////		for (int j = 0; j < input; j++)
//////		{
//////			signal = i % arr[j][1];
//////			if (signal != 0)
//////				break;
//////		}
//////		if (signal == 0)
//////		{
//////			max = i;
//////			break;
//////		}
//////	}
//////	for(int i=0;i<)
//////	//同分母，相加减 
//////	for(int i=0;i<input;i++)
//////	{
//////		arr[i][0]*=(max/arr[i][1]);
//////		if(arr[i][2]==0)
//////			sum+=arr[i][0];
//////		else
//////			sum-=arr[i][0];
//////			
//////	}
//////	long long int temp1=sum,temp2=max;
//////	while(temp2)
//////	{
//////		long long int tmp=temp1%temp2;
//////		temp1=temp2;
//////		temp2=tmp;
//////	 } 
//////
//////	sum/=temp1;
//////	max/=temp1;
//////	long long int ret1=sum/max,ret2=sum%max;
//////	if(ret2==0)
//////		printf("%d",ret1);
//////	else if(ret1==0)
//////		printf("%d/%d",sum,max);
//////	else
//////		printf("%d %d/%d",ret1,ret2,ret1);
////	return 0;
////}
//
////#include<iostream>
////using namespace std;
////#include <string>
////int main()
////{
////	string s1, s2, s3;
////	getline(cin, s3);
////	for (int i = 0; i < s3.size(); i++)
////	{
////		if (s3[i] == ' ')
////		{
////			s1 = s3.substr(0, i);
////			s2 = s3.substr(i + 1, s3.size() - i - 1);
////			break;
////		}
////	}
////	int flag1 = 0, flag2 = 0;
////	for (int i = 0; i < s1.size(); i++)
////		if (!isdigit(s1[i]))
////		{
////			flag1 = 1;
////			break;
////		}
////
////	for (int i = 0; i < s2.size(); i++)
////		if (!isdigit(s2[i]))
////		{
////			flag2 = 1;
////			break;
////		}
////
////	int nums1 = 0, nums2 = 0;
////	//判断是否超过正数位 
////	s1.size() > 4 ? flag1 = 1 : 1;
////	s2.size() > 4 ? flag2 = 1 : 1;
////	//将字符转换为数字 
////	flag1 == 0 ? nums1 = stoi(s1) : 1;
////	flag2 == 0 ? nums2 = stoi(s2) : 1;
////	//上面保证小于4位，这里保证在1000以内 
////	nums1 > 1000 || nums1 <= 0 ? flag1 = 1 : 1;
////	nums2 > 1000 || nums2 <= 0 ? flag2 = 1 : 1;
////	//cout<<flag1<<flag2<<endl;
////	//cout<<nums1<<nums2<<endl;
////	if (flag1 == 1 && flag2 == 1)
////		cout << "? + ? = ?" << endl;
////	else if (flag1 == 1)
////		cout << "? + " << nums2 << " = ?" << endl;
////	else if (flag2 == 1)
////		cout << nums1 << " + ? = ?" << endl;
////	else
////		cout << nums1 << " + " << nums2 << " = " << nums1 + nums2 << endl;
////	return 0;
////}
////
////#include <iostream>
////using namespace std;
////#include <cmath>
////#include <cstdio>
////#include <algorithm>
////long long gcd(long long a, long long b) {
////	//if (a % b == 0) return b;
////	return b == 0 ? a : gcd(b, a % b);
////}
////
////long long lcm(long long a, long long b)
////{
////	if (a == 0)
////		return b;
////	else if (b == 0)
////		return a;
////	return a * b / gcd(a, b);
////}
////
////int main()
////{
////	int input = 0;
////	scanf("%d", &input);
////	long long arr[10][2];
////	long long  tmp1, tmp2;
////	for (int i = 0; i < input; i++)
////	{
////		if (scanf("%lld/%lld", &tmp1, &tmp2))
////		{
////			arr[i][0] = tmp1;
////			arr[i][1] = tmp2;
////		}
////	}
////	//if (input == 1)
////	//{
////	//	int tmp = gcd(arr[0][0], arr[0][1]);
////	//	
////	//	arr[0][0] /= abs(tmp);
////	//	arr[0][1] /= abs(tmp);
////	//	if (arr[0][0] / arr[0][1] != 0)
////	//		cout << arr[0][0] / arr[0][1] << " "<<arr[0][0] % arr[0][1] <<"/"  <<arr[0][1]<<endl;
////	//	else
////	//		cout << arr[0][0] % arr[0][1] << "/" << arr[0][1] << endl;
////	//	return 0;
////	//}
////	long long lcm_result = arr[0][1];
////	if (arr[0][1] == 0)
////		arr[0][0] = 0;
////	for (int i = 1; i < input; i++)
////	{
////		if (arr[i][1] == 0)
////			arr[i][0] = arr[i][1] = 0;
////
////		lcm_result = lcm(lcm_result, arr[i][1]);
////	}
////			
////	long long sum = 0;
////	if (lcm_result == 0)
////	{
////		cout << 0 << endl;
////		return 0;
////	}
////	for (int i = 0; i < input; i++)
////	{
////		if (arr[i][1] != 0)
////			arr[i][0] *= (lcm_result / arr[i][1]);
////		else
////			arr[i][0] *= lcm_result;
////		sum += arr[i][0];
////	}
////	int flag = 0;
////	sum < 0 ? flag = 1 : 1;
////	if (sum == 0)
////	{
////		cout << 0 << endl;
////		return 0;
////	}
////	long long val = gcd(abs(sum), lcm_result);//最后结果的最大公约数 
////	sum /= val;
////	lcm_result /= val;
////	if (sum / lcm_result != 0)
////	{
////		if ((sum % lcm_result) == 0)
////			cout << sum / lcm_result << endl;
////		else
////			cout << sum / lcm_result << " " << (sum % lcm_result) << "/" << lcm_result << endl;
////	}
////		 
////	else
////		cout << (sum % lcm_result) << "/" << lcm_result << endl;
////
////	//	int upper=0;
////	//	for(int i=0;i<input;i++)
////	//		upper+=arr[i][0];
////	//	long long  temp=0;
////	//	upper<0?temp=-upper:temp=upper;
////	//	long long  gcd_result=gcd(temp,lcm_result);
////	//	upper/=gcd_result;
////	//	lcm_result/=gcd_result;
////	//	long  inte=upper/lcm_result;
////	//	long  ret=upper-inte*lcm_result;
////	//	if(inte!=0 && ret!=0)
////	//		cout<<inte<<" "<<ret<<"/"<<lcm_result;
////	//	else if(inte !=0 && ret==0)
////	//		cout<<inte<<endl;
////	//	else
////	//		cout<<ret<<"/"<<lcm_result;
////		//long long int max=0,sum=0;
////	//	//求出分母最大的数 
////	//	for(int i=0;i<input;i++)
////	//	{
////	//		if(max<arr[i][1])
////	//			max=arr[i][1];
////	//	}
////	//	int signal = 1;
////	//	for (int i = max; i > 0; i++)
////	//	{
////	//		//寻找最小公倍数 
////	//		for (int j = 0; j < input; j++)
////	//		{
////	//			signal = i % arr[j][1];
////	//			if (signal != 0)
////	//				break;
////	//		}
////	//		if (signal == 0)
////	//		{
////	//			max = i;
////	//			break;
////	//		}
////	//	}
////	//	for(int i=0;i<)
////	//	//同分母，相加减 
////	//	for(int i=0;i<input;i++)
////	//	{
////	//		arr[i][0]*=(max/arr[i][1]);
////	//		if(arr[i][2]==0)
////	//			sum+=arr[i][0];
////	//		else
////	//			sum-=arr[i][0];
////	//			
////	//	}
////	//	long long int temp1=sum,temp2=max;
////	//	while(temp2)
////	//	{
////	//		long long int tmp=temp1%temp2;
////	//		temp1=temp2;
////	//		temp2=tmp;
////	//	 } 
////	//
////	//	sum/=temp1;
////	//	max/=temp1;
////	//	long long int ret1=sum/max,ret2=sum%max;
////	//	if(ret2==0)
////	//		printf("%d",ret1);
////	//	else if(ret1==0)
////	//		printf("%d/%d",sum,max);
////	//	else
////	//		printf("%d %d/%d",ret1,ret2,ret1);
////	return 0;
////}
//
////#include <iostream>
////using namespace std;
////#include <string>
////#include <vector>
////
////int main()
////{
////	int row = 0;
////	cin >> row;
////	getchar();
////	string str;
////	getline(cin, str);
////	//cout << str.size() << endl;
////	char arr[101][101] = { 0 };
////	int column = str.size() / row;
////	if (str.size() % row > 0)
////		column++;
////	int count = 0;
////	for (int j = column - 1; j >= 0; j--)
////	{
////		for (int i = 0; i < row; i++)
////		{
////			arr[i][j] = str[count++];
////		}
////	}
////
////	for (int i = 0; i < row; i++)
////	{
////		for (int j = 0; j < column; j++)
////		{
////
////			cout << arr[i][j];
////		}
////		cout << endl;
////	}
////	return 0;
////}
//
////#include <iostream>
////using namespace std;
////#include <cstdio>
////#include <unordered_map>
////#include <vector>
////#include <algorithm>
////int main()
////{
////    int n;
////    cin >> n;
////
////    for (int i = 0; i < n; i++)
////    {
////        unordered_map<int, char> m1;
////        int count = 0, sum = 0;
////        unordered_map<int, vector<int>> m2;
////        while (1)
////        {
////            int a, b, c;
////            char ch;
////            scanf("%d %c %d:%d", &a, &ch, &b, &c);
////            if (a == 0)
////                break;
////            auto it = m1.find(a);
////            cout << "a:" << a << endl;
////            if (it == m1.end() && ch == 'S')
////            {
////                m1.insert({ a,ch });
////                m2.insert({ a,vector<int>{b,c} });
////            }
////            else if (it != m1.end() && ch == 'S')
////            {
////                m2.erase(it->first);
////                m2.insert({ a,vector<int>{b,c} });
////            }
////            else if (it != m1.end() && ch == 'E')
////            {
////                auto it2 = m2.find(a);
////                int h = it2->second[0], m = it2->second[1];
////                cout << "h:" << h << " m:" << m << " b:" << b << " c:" << c << endl;
////                if (c > m)
////                    sum += (b - h) * 60 + c - m;
////                else
////                    sum += (b - h - 1) * 60 + c - m + 60;
////                cout << "it->first:" << it->first << " " << a << endl;
////                m1.erase(it->first);
////                m2.erase(it->first);
////                if (m2.find(a) != m2.end())
////                    cout << "YES" << endl;
////                count++;
////                cout << count << " " << sum << endl;
////            }
////
////
////
////        }
////        if (count == 0)
////        {
////            cout << 0 << " " << 0 << endl;
////            continue;
////        }
////        int add = sum % count > 0 ? 1 : 0;
////        cout << count << " " << sum / count + add << endl;
////    }
////    return 0;
////}
////class Compare{
////public:
////	bool operator()(const vector<int> &a,const vector<int> &b)
////	{
////		return a[0]<b[0];
////	}
////};
////int main()
////{
////    int n;
////    cin>>n;
////    for(int k=0;k<n;k++)
////    {
////        vector<vector<int>> vv;
////        // map<int,vector<int>> m;
////        //vector<int> v;
////        while(1)
////        {
////            int a,b,c;
////            char ch;
////            scanf("%d %c %d:%d",&a,&ch,&b,&c);
////            vv.emplace_back(vector<int>{a,b,c});
////            if(a==0)
////                break;
////            //m.insert;
////            
////        }
////        if(vv.size()==1)
////        {
////        	cout<<0<<" "<<0<<endl;
////        	continue;
////		}
////        //if(vv[k].size()==1)
////        	sort(vv.begin(),vv.end(),Compare());
//////        for(int i=0;i<vv.size();i++)
//////        	cout<<vv[i][0];
////        int count=0,sum=0;
////        for(int i=1,j=2;i<vv.size()&&j<vv.size();i++)
////        {
////            if(vv[i][0]!=vv[j][0])
////            {
////            	j++;
////            	continue;
////			}
////                
////            if(vv[j][2]-vv[i][2]>=0)
////                sum+=(vv[j][1]-vv[i][1])*60+(vv[j][2]-vv[i][2]);
////            else
////                sum+=(vv[j][1]-vv[i][1]-1)*60+(vv[j][2]-vv[i][2])+60;
////            //cout<<"sum = "<<sum<<endl;
////            count++;
////            j+=2;
////			i++;
////            if(j>vv.size()-1)
////            	break;
////            
////        }
////		if(count==0)
////        {
////            cout<<0<<" "<<0<<endl;
////            continue;
////        }
////        int add=sum%count>0?1:0;
////        cout<<count<<" "<<sum/count+add<<endl;
////    }
////    return 0;
////}
//
////#include <iostream>
////
////using namespace std;
////
////int main()
////{
////    int n;//除数
////    cin >> n;
////    int s = 1;//被除数，即全为1
////    int num = 1;//被除数位数
////    while (s < n)//使得被除数大于除数
////    {
////        s = s * 10 + 1;
////        num++;
////    }
////    cout << "S:" << s << endl;
////    while (1)
////    {
////        cout << s / n;//输出商
////        s = s % n;//取模，得到余数
////        if (s == 0)//余数为0，停止
////            break;
////        else
////        {
////            s = s * 10 + 1;//余数乘10+1
////            num++;//位数也+1
////        }
////    }
////    cout << ' ' << num;
////    return 0;
////}
////
////#include <iostream>
////using namespace std;
////#include <string>
////
////int main()
////{
////	string s = "hello";
////	s.erase(s.begin(),s.begin()+1);
////	cout << s << endl;
////	return 0;
////}
//
////#include <iostream>
////using namespace std;
////#include <string>
////void Erase(string& s)
////{
////	//删除行首的空格
////	int count = 0;
////	while (s[count++] == ' ');
////	s.erase(0, count - 1);
////	//cout<<s<<endl;
////	//删除行中间的空格 
////	int slow = 0, fast = 0;
////	while (fast < s.size())
////	{
////		if (s[fast] != ' ' || (fast > 0 && s[fast - 1] != ' '))
////			s[slow++] = s[fast];
////		fast++;
////	}
////	//cout<<s<<endl;
////	//删除行尾的空格
////	s.erase(s.begin() + slow, s.end());
////	int pos = s.size() - 2;
////	if (!isalpha(s[s.size() - 1]) && !isdigit(s[s.size() - 1]))
////	{
////		while (s[pos--] == ' ')
////			s.erase(s.begin() + pos + 1, s.end() - 1);
////	}
////}
////void Tolower(string& s)
////{	
////	for(int i=0;i<s.size();i++)
////		if(s[i]>='A' && s[i]<='Z')
////			s[i] = tolower(s[i]);
////}
////void Replace(string& s)
////{
////	//符号
////	int pos = -2;
////	while (pos != -1)
////	{
////		pos = s.find("me");
////		if (pos != -1 && pos > 0 && pos <= s.size())
////		{
////			if (!isalpha(s[pos - 1]))
////			{
////				s.erase(pos, 2);
////				s.insert(pos, "you");
////			}
////
////		}
////		pos = s.find("I");
////		if (pos != -1 && pos>=0 && pos<=s.size())
////		{
////				
////			if (pos ==0 || !isalpha(s[pos - 1]))
////			{
////				s.erase(pos, 1);
////				s.insert(pos,"you");
////			}
////			
////		}
////		
////			//s.replace(pos, 3, "you");
////	}
////	pos = -2;
////	while (pos != -1)
////	{
////		
////		pos = s.find("can you");
////		if (pos != -1 && pos >= 0 && pos <= s.size())
////		{
////			if (pos==0 || !isalpha(s[pos - 1]))
////			{
////				s.erase(pos, 7);
////				s.insert(pos, "I can");
////			}
////			
////		}
////			
////		pos = s.find("could you");
////		if (pos != -1 && pos >= 0 && pos <= s.size())
////		{
////			if (pos==0 ||!isalpha(s[pos - 1]))
////			{
////				s.erase(pos, 9);
////				s.insert(pos, "I could");
////			}
////			
////		}
////			
////	}
////}
////int main()
////{
////	int N;
////	cin >> N;
////	getchar();
////	for (int i = 0; i < N; i++)
////	{
////		string s;
////		getline(cin, s);
////		Tolower(s);
////		Erase(s);
////		Replace(s);
////		cout << s << endl;
////	}
////	return 0;
////}
////
////#include<iostream>
////using namespace std;
////#include <vector>
////#include <unordered_map>
////#include <map>
////#include <algorithm>
////int N, M, S, D;
////vector<int>aid_num(500);
////int max_aid = 0;
////int length_num = 0;
////int path_sum = 0;
////map<int, int> m;
////int size = 0;
////vector<vector<int>> result;
////vector<int> rp;
//////int flag = 0;
////
////void dfs(const vector<vector<int>>& path, int startindex,int endpos,int flag)
////{
////    if (endpos == D)
////    {
////        rp.emplace_back(endpos);
////        path_sum += path[startindex-1][2];
////        rp.emplace_back(path_sum);
////        length_num++;
////        //path_sum+=path[]
////        //max_aid += aid_num[path[startindex][1]];
////        //rp.emplace_back(length_sum);
////        rp.emplace_back(max_aid);
////        result.emplace_back(rp);
////        rp.pop_back();
////        rp.pop_back();
////        //rp.clear());
////        return;
////    }
////    if (startindex >= path.size())
////        return;
////   /* if (path[startindex][0] != startpos)
////        return;*/
////    
////    for (int i = startindex; i < path.size(); i++)
////    {
////       
////        if (path[i][0] == endpos)
////
////        {
////            if (flag == 1)
////                rp.clear();
////            rp.emplace_back(path[i][0]);
////            //rp.emplace_back(path[i][1]);
////            //length_num+=path[i][2];
////            path_sum += path[startindex][2];
////            max_aid += aid_num[path[i][1]];
////            dfs(path, i + 1, path[i][1],0);
////            //length_num-=path[i][2];
////            max_aid -= aid_num[path[i][1]];
////            path_sum -= path[startindex][2];
////            rp.pop_back();
////            //rp.pop_back();
////
////
////        }
////    }
////}
////
////class Compare1 {
////public:
////    bool operator()(vector<int>& a, vector<int>& b)
////    {
////        if (a[0] == b[0])
////            return a[1] < b[1];
////        return a[0] < b[0];
////    }
////};
////class Find
////{
////public:
////    bool operator()(vector<int>& a)
////    {
////        if (a[0] == S)
////            return true;
////    }
////};
////class Compare2 {
////public:
////    bool operator()(vector<int>& a, vector<int>& b)
////    {
////        return a[a.size()-1] > b[b.size()-1];
////    }
////};
////int main()
////{
////
////    cin >> N >> M >> S >> D;
////
////    for (int i = 0; i < N; i++)
////        cin >> aid_num[i];
////    vector<vector<int>> path;
////    for (int i = 0; i < M; i++)
////    {
////        int a, b, c;
////        cin >> a >> b >> c;
////        path.emplace_back(vector<int>{a, b, c});
////    }
////    max_aid = aid_num[S];
////    sort(path.begin(), path.end(), Compare1());
////    auto it = find_if(path.begin(), path.end(), Find());
////    dfs(path, it - path.begin(), S,1);
////    sort(result.begin(), result.end(), Compare2());
////    cout << length_num << result[0][3] << endl;
////    cout << result[0][0] << " "<<result[0][1] << " "<<result[0][2] << endl;
////    return 0;
////}
//
//#define _CRT_SECURE_NO_WARNINGS
////using namespace std;
////#include <unordered_map>
////#include <utility>
////#include <string>
//////我的想法是dfs首先可以找出里面所有的岛屿
//////其次，dfs过程中我们还要判断岛屿是否存在成环的情况
//////最后，我们再根据题目给的判断条件进行判断是否存在子岛屿情况 
////int T, M, N;
////vector<string>arr(12);
////unordered_map<int, unordered_map<int, int> > m;
////int flag = 0;
////void dfs(int i, int j)
////{
////	if (i >= M || i<0 || j>=N || j < 0 || arr[i][j]=='0')
////		return;
////	m[i][j]++;
////	arr[i][j] = '0';
////	if (m[i][j] > 1)
////		flag = 1;
////	dfs(i + 1, j);
////	dfs(i - 1, j);
////	dfs(i, j + 1);
////	dfs(i, j - 1);
////
////
////}
////int main()
////{
////	cin >> T;
////	for (int k = 0; k < T; k++)
////	{
////		cin >> M >> N;
////		for (int i = 0; i < M; i++)
////				cin >> arr[i];
////
////		int count = 0;
////		for (int i = 0; i < M; i++)
////		{
////			for (int j = 0; j < N; j++)
////			{
////				flag = 0;
////				if (arr[i][j] != '0')
////				{
////					dfs(i, j);
////					if (flag == 1)
////					{
////
////					}
////				}
////			}
////		}
////		cout << "count : " << count << endl;
////	}
////	return 0;
////}
//
////#include <iostream>
////using namespace std;
////#include <string>
////
////void InitString(string& s)
////{
////	s.insert(0, 1, '^');
////	s += "!";
////	for (int i = 0; i < s.size(); i++)
////		if (s[i++] != '#')
////			s.insert(i, 1, '#');
////
////}
////
////
////int main()
////{
////	string s;
////	cin >> s;
////	//首先，将我们得到的字符串初始化，主要目的就是为了防止字符串长度为偶数的情况
////	//我们初始化的方法就是，将头尾之间插入不同的字符，作为哨兵字符
////	//然后，我们再将每两个字符之间插入相同的分隔符
////	//我们的操作并不影响我们的回文子串
////	InitString(s);
////	for (auto& it : s)
////		cout << it << " ";
////	int ans = 0;
////	//对每一个字符进行回文遍历
////	for (int i = 1; i < s.size(); i++)
////	{
////		int len = 0;//我们这里利用len起始值为零
////		//我们这里还有一个值得注意的是，因为我们添加了字符。
////		//所以，我们len的长度就是我们回文子串的长度
////		while (s[i + len + 1] == s[i - len - 1])//分别向两侧进行对比
////			len++;
////		if (len > ans)
////			ans = len;
////	}
////	cout << endl << "length = " <<ans << endl;
////	return 0;
////}
////
////#include <iostream>
////using namespace std;
////#include<vector>
////#include<string>
////class Solution {
////public:
////    vector<string> result;
////    // bool valid(string& s, int start, int num)
////    // {
////    //     string str = s.substr(start,  num);
////    //     long long tmp = stoi(str);
////    //     if (tmp >= 0 && tmp <= 255 && s[start] != '0')
////    //         return true;
////    //     return false;
////    // }
////    bool isValid(const string& s, int start, int num) {
////        if (start > start + num) {
////            return false;
////        }
////        if (s[start] == '0' && start != start + num) { // 0开头的数字不合法
////            return false;
////        }
////        int nu = 0;
////        for (int i = start; i <= start + num; i++) {
////            if (s[i] > '9' || s[i] < '0') { // 遇到非数字字符不合法
////                return false;
////            }
////            nu = nu * 10 + (s[i] - '0');
////            if (nu > 255) { // 如果大于255了不合法
////                return false;
////            }
////        }
////        return true;
////    }
////    void backtracking(string& s, int index, int interval, int potnum)
////    {
////        if (potnum == 3)
////        {
////            if (isValid(s, index, s.size() - index))
////                result.emplace_back(s);
////            return;
////        }
////        for (int i = index; i < s.size(); i++)
////        {
////            if (isValid(s, index, i - index + 1))
////            {
////                s.insert(i + 1, 1, '.');
////                backtracking(s, i + 2, interval, potnum + 1);
////                s.erase(i + 1, 1);
////            }
////            else
////                break;
////
////
////        }
////        return;
////    }
////    vector<string> restoreIpAddresses(string s)
////    {
////        backtracking(s, 0, s.size() / 4, 0);
////        return result;
////    }
////};
////
//// int main()
//// {
////     string s;
////     cin >> s;
////     Solution solution;
////     solution.restoreIpAddresses(s);
////     for (int i = 0; i < solution.result.size(); i++)
////         cout << solution.result[i] << endl;
////     return 0;
//// }
//
//
////using namespace std;
////#include <iostream>
////#include <unordered_map>
////#include<vector>
////#include<string>
////class Solution {
////public:
////    vector<vector<int>> result;
////    vector<int> path;
////    unordered_map<int, int> m;
////    void backtracking(vector<int>& nums, int index)
////    {
////        if (path.size() >= 2)
////            result.emplace_back(path);
////
////        for (int i = index; i < nums.size(); i++)
////        {
////            if ((i > 0 && nums[i] < nums[i - 1]))
////                continue;
////            if (i > index && m[nums[i]]==1)
////                continue;
////            path.emplace_back(nums[i]);
////            m[nums[i]] = 1;
////            backtracking(nums, i + 1);
////            m[nums[i]] = 0;
////            path.pop_back();
////        }
////        return;
////    }
////    vector<vector<int>> findSubsequences(vector<int>& nums) {
////
////        backtracking(nums, 0);
////        return result;
////    }
////};
////
////int main()
////{
////    Solution s;
////    vector<int> nums{ 4,6,7,7 };
////    s.findSubsequences(nums);
////    for (auto& it : s.result)
////    {
////        for (auto& i : it)
////            cout << i << " ";
////    cout << endl;
////
////    }
////    return 0;
////}
////#include <iostream>
////#include <vector>
////#include <string>
////#include<set>
////using namespace std;
////class Solution {
////public:
////    class Compare 
////    {
////    public:
////        bool operator()(const vector<string>& v1, const vector<string>& v2) const 
////        {
////            for (int i = 0; i < v1.size() && i < v2.size(); i++)
////                if (v1[i] != v2[i])
////                    return v1[i] < v2[i];
////
////        }
////    };
////
////    set<vector<string>, Compare> scheme;
////    vector<string> result;
////    bool hash[301];
////    int count = 0;
////    void backtracking(vector<vector<string>>& tickets, string s) {
////        if (count== tickets.size()) {
////            scheme.insert(result);
////            return;
////        }
////        for (int i = 0; i < tickets.size(); i++) {
////            if (tickets[i][0] != s || hash[i] == true) {
////                continue;
////            }
////            result.emplace_back(s);
////            hash[i] = true;
////            count++;
////            backtracking(tickets, tickets[i][1]);
////            hash[i] = false;
////            count--;
////            result.pop_back();
////        }
////    }
////    vector<string> findItinerary(vector<vector<string>>& tickets) {
////        backtracking(tickets, "JFK");
////        return *(scheme.begin());
////    }
////};
////
////
////// 读取函数，用于读取 tickets 输入
////vector<vector<string>> readTickets() {
////    vector<vector<string>> tickets;
////    int n;
////    cout << "请输入航线数目：";
////    cin >> n;
////    cout << "请按照格式输入航线：" << endl;
////    for (int i = 0; i < n; ++i) {
////        string from, to;
////        cout << "航线 " << i + 1 << ": ";
////        cin >> from >> to;
////        tickets.push_back({ from, to });
////    }
////    return tickets;
////}
////
////int main() {
////    // 读取 tickets 输入
////    vector<vector<string>> tickets = readTickets();
////
////    // 打印读取结果
////    cout << "读入的航线信息为：" << endl;
////    for (const auto& ticket : tickets) {
////        cout << "[" << ticket[0] << ", " << ticket[1] << "]" << endl;
////    }
////    Solution so;
////    vector<string> result=so.findItinerary(tickets);
////    for (auto& it : result)
////        cout << it << " ";
////    cout << endl;
////    return 0;
////}
//
////#include <iostream>
////#include<string>	
////#include <list>
////#include<cstring>
////using namespace std;
////
////int flag1 = 0, flag2 = 0;
////void My_Print(const string& s, int i, int j, int dis1, int dis2)
////{
////	cout << s[i] << " " << s[j] << "   dis1= " << dis1 << " dis2= " << dis2 << endl;
////}
////int diff(const string& s1, const string& s2, int val)
////{
////	char ch1 = s1[val];
////	char ch2 = s2[val];
////	string s = "012345678901234567890123456789";
////	int dis1 = 1, dis2 = 1, i = 0, j = 0;
////	for (i = ch1 - '0' + 9, j = ch1 - '0' + 11; j < s.size() && i >= 0;)
////	{
////		//My_Print(s,i,j,dis1,dis2);
////		if (ch2 != s[i])
////		{
////			dis1++;
////			i--;
////		}
////		if (ch2 != s[j])
////		{
////			dis2++;
////			j++;
////		}
////		if (ch2 == s[j] && ch2 == s[i])
////		{
////			//My_Print(s,i,j,dis1,dis2);
////			break;
////		}
////
////	}
////	if (j > 19)
////		flag2 = 1;
////	if (i <= 9)
////		flag1 = 1;
////	//cout<<"dis1= "<<dis1<<" dis2= "<<dis2;
////	return dis1 > dis2 ? dis2 : dis1;
////}
////int main()
////{
////	int n = 0;
////	cin >> n;
////	string s1, s2;
////	cin >> s1 >> s2;
////	int dp[n], v[n];
////	memset(dp, 0, sizeof(dp));
////	memset(v, 0, sizeof(v));
////	dp[n - 1] = v[n - 1] = diff(s1, s2, n - 1);
////	//cout<<dp[n-1]<<endl;
////	for (int i = n - 2; i >= 0; i--)
////	{
////		v[i] = diff(s1, s2, i);
////		if (flag1 == 1)
////		{
////			for (int j = i - 1; j >= 0; j++)
////			{
////				if (s1[j] == '0' && j > 0)
////				{
////					s1[j] = '9';
////					s1[j - 1] -= '1';
////				}
////				else if (s1[j] == '0' && j == 0)
////					s1[j] = '9';
////				s1[j] -= '1';
////			}
////		}
////		if (flag2 == 1)
////		{
////			for (int j = i - 1; j >= 0; j++)
////			{
////				if (s1[j] == '9' && j > 0)
////				{
////					s1[j] = '0';
////					s1[j - 1] += '1';
////				}
////				else if (s1[j] == '9' && j == 0)
////					s1[j] = '9';
////				s1[j] += '1';
////			}
////		}
////		dp[i] += dp[i + 1] + v[i];
////	}
////	cout << "result : " << dp[0] << endl;
////	return 0;
////}
//
////#include <iostream>
////#include<vector>
////#include <initializer_list>
////using namespace std;
////class Solution {
////public:
////    int jump(vector<int>& nums) {
////        if (nums.size() == 1)
////            return 0;
////        if (nums[0] >= nums.size() - 1)
////            return 1;
////        // vector<int> dp_count(nums.size());
////        // vector<int> dp_val(nums.size());
////        // dp_val[0]=nums[0];
////        // dp_count[0]=1;
////        vector<int> dp(nums.size());
////        dp[0] = 0;
////        for (int i = 0; i < nums.size(); i++)
////        {
////            // dp_val[i]=max(dp_val[i-1],nums[i]+i);
////            // if(dp_val[i]>=i) dp_count[i]=dp_count[i-1];
////            // int j=i;
////            // if(i!=0)
////            //     j=nums[i-1]+i-1;
////            for (int j = i+1; j <= nums[i] + i && j < nums.size(); j++)
////            {
////                if (dp[j] == 0)    dp[j] = dp[i] + 1;
////                else    dp[j] = dp[i];
////            }
////            if (dp[nums.size() - 1] != 0)
////                break;
////            // if(nums[i]+i)
////
////        }
////        return dp[nums.size() - 1];
////    }
////};
////
////int main()
////{   
////    vector<int> temp({ 2, 3, 1, 1, 4 });
////    Solution so;
////    int ret=so.jump(temp);
////    cout << ret << endl;
////    return 0;
////}
//
//
////#include <vector>
////#include<iostream>
////using namespace std;
////#include<algorithm>
////#include<numeric>
////class Solution {
////public:
////    int candy(vector<int>& ratings) {
////        // vector<int> dp(ratings.size());
////        // dp[0]=1;
////        // ratings[1]>ratings[0]?dp[1]=2:dp[1]=1;
////        // for(int i=2;i<ratings.size();i++)
////        // {
////        //     if(ratings[i]>ratings[i-1])   dp[i]=2*dp[i-1]-dp[i-2]+1;
////        //     else dp[i]=2*dp[i-1]-dp[i-2];
////
////        // }
////        // return dp[ratings.size()-1];
////        // if(ratings.size()==1)
////        //     return 1;
////        // int min_num=1;
////        // vector<int> account(ratings.size(),1);
////        // for(int i=0;i<ratings.size()-1;i++)
////        // {
////        //     if(ratings[i]<ratings[i+1])
////        //     {
////        //         min_num+=account[i]+1;
////        //         account[i+1]=account[i]+1;
////        //     }
////        //     else if(ratings[i]>ratings[i+1])
////        //     {   if(account[i]>1)
////        //             min_num+=account[i]-1;
////        //         else
////        //         {
////        //             min_num+=account[i]+1+1;
////        //             account[i]+=1;
////
////        //         }
////        //     }
////        //     else
////        //     {
////        //         min_num+=account[i+1];
////        //     }
////
////        // }
////        // vector<int> dp(ratings.size());
////        // dp[0]=1;
////        // for(int i=1;i<ratings.size();i++)
////        // {
////        //     if(ratings[i]>ratings[i-1])
////        //         dp[i]+=dp[i-1]+2;
////        //     else
////        // }
////        // return min_num;
////        vector<int> account(ratings.size(), 1);
////        for (int i = 1; i < ratings.size(); i++)
////        {
////            if (ratings[i] > ratings[i - 1])
////                account[i] = account[i - 1] + 1;
////            else if(ratings[i] < ratings[i- 1])
////            {
////                int j = i;
////                if (account[j - 1] == 1)
////                {
////                    // 1,2,3,1,0
////                    //[1,2,87,87,87,2,1]
////                    while (j >= 1 && ratings[j] < ratings[j - 1]&& account[j]>=account[j-1])//1,3,2,2,1
////                    {
////                        account[j - 1] += 1;
////                        j--;
////                    }
////                    account[i] = account[i - 1] - 1;
////                }
////
////            }
////           
////        }
////        return accumulate(account.begin(), account.end(), 0);
////    }
////};
//
//
////
////
////class Solution {
////public:
////    static bool compare(const vector<int>& val1, const vector<int>& val2)
////    {
////        if (val1[0] == val2[0])
////            return val1[1] < val2[1];
////        return val1[0] < val2[0];
////    }
////    void Myprint(const vector<vector<int>>& s)
////    {
////        for (int i = 0; i <s.size(); i++)
////        {
////            cout << s[i][0] << " " << s[i][1] << endl;
////        }
////    }
////    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
////        if (intervals.size() == 1)
////            return 0;
////        sort(intervals.begin(), intervals.end(), compare);
////        Myprint(intervals);
////        int result = 0;
////        for (int cur = 1; cur < intervals.size();)
////        {
////            if (intervals[cur][0] < intervals[cur - 1][1])
////            {
////                result++;
////                intervals.erase(intervals.begin() + cur);
////            }
////            else
////                cur++;
////        }
////        return result;
////    }
////};
////
////
////int main() {
////    std::vector<std::vector<int>> points = {
////        {-52, 31},
////        {-73, -26},
////        {82, 97},
////        {-65, -11},
////        {-62, -49},
////        {95, 99},
////        {58, 95},
////        {-31, 49},
////        {66, 98},
////        {-63, 2},
////        {30, 47},
////        {-40, -26}
////    };
////    Solution s;
////    s.eraseOverlapIntervals(points);
////    return 0;
////}
//
////class Solution {
////public:
////    int candy(vector<int>& ratings) {
////        vector<int> account(ratings.size(), 1);
////        for (int i = 1; i < ratings.size(); i++)
////            if (i > 0 && ratings[i - 1] < ratings[i])
////                account[i] += account[i - 1];
////        int result = 0;
////        for (int i = ratings.size() - 2; i >= 0; i--)
////        {
////            if (ratings[i] > ratings[i + 1] && account[i] <= account[i + 1])
////                account[i] = account[i + 1] + 1;
////            result += account[i];
////        }
////        return result + account[ratings.size() - 1];
////
////    }
////};
////int main()
////{
////    Solution s;
////    vector<int> temp{ 1,2,87,87,87,2,1 };
////
////    int ret=s.candy(temp);
////    cout << ret << endl;
////    return 0;
////}
//
//
////class Solution {
////public:
////    static bool compare(const vector<int>& val1, const vector<int>& val2)
////    {
////        if (val1[0] == val2[0])
////            return val1[1] < val2[1];
////        return val1[0] < val2[0];
////    }
////    vector<vector<int>> merge(vector<vector<int>>& intervals) {
////        if (intervals.size() == 1)
////            return intervals;
////        sort(intervals.begin(), intervals.end(), compare);
////        vector<vector<int>> result;
////        int left = intervals[0][0], right = 0;
////        for (int i = 1; i < intervals.size(); i++)
////        {
////            if (intervals[i - 1][1] >= intervals[i][0])
////            {
////                right = max(right, intervals[i][1]);
////            }
////            else
////            {
////                result.emplace_back(vector<int>{left, right});
////                left = intervals[i][0];
////            }
////
////        }
////        return result;
////    }
////};
////int main()
////{
////    Solution s;
////    vector<vector<int>> tmp{ {1,4 },{4,5} };
////    s.merge(tmp);
////    return 0;
////}
//
//
//
////#include <vector>
////#include<iostream>
////using namespace std;
////#include<algorithm>
////#include<numeric>
////class Solution {
////public:
////    int m1, n1;
////    int result = 0;
////    void dfs(int i, int j)
////    {
////        if (i == m1 - 1 && j == n1 - 1)
////        {
////            result++;
////            return;
////        }
////        else if (i >= m1 || j > n1)
////            return;
////        dfs(i, j + 1);
////        dfs(i + 1, j);
////    }
////    int uniquePaths(int m, int n) {
////        m1 = m; n1 = n;
////        dfs(0, 0);
////        return result;
////    }
////};
////int main()
////{
////    Solution s;
////    cout << "result :" << s.uniquePaths(23, 12) << endl;
////    return 0;
////}
//
////#include <iostream>
////using namespace std;
////#include <vector>
////#include <string>
////#include <stack>
////#include <set>
////
////int result;
////stack<pair<int, int> > sp;
////void Change(vector<string>& s, int x, int y)
////{
////    for (int i = 0; i < 4; i++)
////    {
////        if (s[x][i] == '-')
////            s[x][i] = '+';
////        else
////            s[x][i] = '-';
////    }
////    for (int i = 0; i <4; i++)
////    {
////        if (s[i][y] == '-')
////            s[i][y] = '+';
////        else
////            s[i][y] = '-';
////    }
////    if (s[x][y] == '+')
////        s[x][y] = '-';
////    else
////        s[x][y] = '+';
////}
////void dfs(vector<string>& s, int result)
////{
////    for (int i = 0; i < 4; i++)
////    {
////        for (int j = 0; j < 4; j++)
////        {
////            if (s[i][j] == '+')
////            {
////                Change(s, i, j);
////                sp.push(make_pair(i, j));
////                dfs(s, result + 1);
////                sp.pop();
////            }
////        }
////    }
////    return;
////}
////int main()
////{
////    vector<string> input(4);
////    for (int i = 0; i < 4; i++)
////        cin >> input[i];
////    dfs(input, 0);
////    cout << result << endl;
////    while (!sp.empty()) {
////        std::cout << sp.top().first << " " << sp.top().second << std::endl;
////        sp.pop();
////    }
////
////    return 0;
////}
////
////#include <iostream>
////using namespace std;
////#include <vector> 
////
////class Solution
////{
////public:
////    int ClimbStairs(int n, int m)
////    {
////        vector<int> dp(n + 1, 0);
////        dp[0] = 1;
////        for (int j = 1; j <= n; j++)
////        {
////            for (int i = 1; i <= m; i++)
////            {
////                if (j >= i) dp[j] += dp[j - i];
////            }
////        }
////        return dp[n];
////    }
////
////};
////int main()
////{
////    int n, m;
////    cin >> n >> m;
////    Solution solution;
////    cout << solution.ClimbStairs(n,m) << endl;
////    return 0;
////}
//
//#include <vector>
//using namespace std;
//#include <string>
//#include <algorithm>
////class Solution {
////public:
////    bool wordBreak(string s, vector<string>& wordDict) {
////        vector<bool> dp(s.size() + 1, false);
////        dp[0] = true;
////        for (int j = 0; j < s.size(); j++)
////        {
////            for (int i = 0; i <= j; i++)
////            {
////                string word = s.substr(i, j - i + 1);
////                if (find(wordDict.begin(), wordDict.end(), word) != wordDict.end() && i > 0 && dp[i - 1] == true)
////                {
////                    dp[j] = true;
////                }
////            }
////        }
////        return dp[s.size() - 1];
//////    }
//////};
////class Solution {
////public:
////    int lengthOfLIS(vector<int>& nums) {
////        vector<int> dp(nums.size() + 1, 1);
////        int result = 0;
////        for (int i = 1; i < nums.size(); i++)
////        {
////            for (int j = 0; j < i; j++)
////            {
////                if (nums[i] > nums[j]) dp[i] = max(dp[i], dp[j] + 1);
////            }
////            result < dp[i] ? result = dp[i] : 1;
////        }
////        return result;
////    }
////};
//
////class Solution {
////public:
////    int maxSubArray(vector<int>& nums) {
////        //dp[i]表示0~i的所有连续子数组的集合
////        //MAX       
////        vector<int> dp(nums.size() + 1, 0);
////        dp[0] = nums[0];
////        for (int i = 1; i < nums.size(); i++)
////        {
////            if (nums[i] + dp[i - 1] < nums[i])
////                dp[i] = nums[i];
////            else
////                dp[i] = dp[i - 1] + nums[i];
////            // for(int j=0;j<i;j++)
////            // {
////
////            // }
////        }
////        return dp[nums.size() - 1];
////    }
////};
////
////int main()
////{
////    vector<int> nums{ -2,1,-3,4,-1,2,1,-5,4 };
////    Solution s;
////    s.maxSubArray(nums);
////    return 0;
//////}
////
////#include <vector>
////#include <iostream>
////using namespace std;
////#include <string>
////int main()
////{
////	int N;
////	cin >> N;
////	vector<int> result;
////	//vector<char> s(20);
////	string alp = "ABCDEF";
////	//for (int i = 10, j = 0; i < 16; i++)
////	//{
////	//	s[i] = alp[j];
////	//	j++;
////	//}
////	while (N != 0)
////	{
////		int tmp = N % 16;
////		N /= 16;
////		result.emplace_back(tmp);
////	}
////	for (int i = result.size() - 1; i >= 0; i--)
////	{
////		if (result[i] >= 10)
////			cout << alp[result[i]-10] << " ";
////		else
////			cout << result[i] << " ";
////	}
////}
//
////#include <iostream>
////using namespace std;
////#include <string>
////int main()
////{
////    string s1, s2;
////    getline(cin, s1);
////    getline(cin, s2);
////    int hash[200] = { 0 };
////    int slow = 0;
////    for (int i = 0; i < s2.size(); i++)
////        hash[s2[i] - 'A']++;
////    int fast = slow;
////    for (; fast < s1.size(); fast++)
////    {
////        if (!isalpha(s1[fast]) || hash[s1[fast] - 'A'] == 0)
////            s1[slow++] = s1[fast];
////    }
////    cout << s1.substr(0,slow+1) << endl;
////    return 0;
////}
//
////#include <iostream>
////using namespace std;
////#include <string>
////int main()
////{
////    string s1, s2;
////    getline(cin, s1);
////    getline(cin, s2);
////    int hash[200] = { 0 };
////    int slow = 0;
////    for (int i = 0; i < s2.size(); i++)
////        hash[s2[i] ]++;
////    int fast = slow;
////    for (; fast < s1.size(); fast++)
////    {
////        if ( hash[s1[fast]] == 0)
////            s1[slow++] = s1[fast];
////    }
////    cout << s1.substr(0, slow + 1) << endl;
////    return 0;
////}
//
////#include <iostream>
////using namespace std;
////#include <cstdio>
////int main()
////{
////	int N;
////	char ch;
////	cin >> N >> ch;
////	if (N == 1)
////	{
////		cout << ch << endl;
////		return 0;
////	}
////	if (N < 7)
////	{
////		printf("%c\n%d", ch, N - 1);
////		return 0;
////	}
////
////	//    int height = 2;
////	//    int tmp = N - 1;
////	//    for (int i = 2;; i++)
////	//    {
////	//        tmp -= ((2 * height) - 1) * 2;
////	//        cout << height << tmp << endl;
////	//        if (tmp <= 0)
////	//            break;
////	//        height++;
////	//    }
////	//    height -= 1;
////	//    //cout<<height<<endl; 
////	//    for (int i = height; i > 0; i--)
////	//    {
////	//        for (int j = height - i; j > 0; j--)
////	//            cout << " ";
////	//        for (int j = 2 * i - 1; j > 0; j--)
////	//            cout << ch;
////	//        cout << endl;
////	//    }
////	//    for (int i = 2; i <= height; i++)
////	//    {
////	//        for (int j = height; j > i; j--)
////	//            cout << " ";
////	//        for (int j = 0; j < 2 * i - 1; j++)
////	//            cout << ch;
////	//        cout << endl;
////	//    }
////	//    int ret = tmp + (2 * (height + 1) - 1)*2;
////	//    if (ret != 0)
////	//        cout << ret << endl;
////	int tmp = N - 1;
////	int pile = 1;
////	for (int i = 2;; i++)
////	{
////		tmp -= ((2 * i) - 1) * 2;
////		if (tmp < 0)
////			break;
////		pile = i;
////	}
////	//打印上层
////	for (int i = pile; i > 0; i--)
////	{
////		for (int j = pile; j > i; j--)
////			cout << " ";
////		for (int j = 0; j < 2 * i - 1; j++)
////			cout << ch;
////		cout << endl;
////	}
////	//cout<<"pile = "<<pile<<endl;
////	//打印下层
////	for (int i = 2; i <= pile; i++)
////	{
////		for (int j = i; j < pile; j++)
////			cout << " ";
////		for (int j = 0; j < 2 * i - 1; j++)
////			cout << ch;
////		cout << endl;
////	}
////	if (tmp < 0 && tmp + ((pile + 1) * 2 - 1) * 2 != 0)
////		cout << tmp + ((pile + 1) * 2 - 1) * 2;
////	//	else if(tmp>0)
////	//		cout<<tmp;
////	return 0;
////}
//
////#include <iostream>
////using namespace std;
////#include <numeric>
////#include <cstdio>
////#include <algorithm>
////long long gcd(long long a, long long b) {
////	return b == 0 ? a : gcd(b, a % b);
////}
////
////long long lcm(long long a, long long b)
////{
////	return a * b / gcd(a, b);
////}
////
////int main()
////{
////	int input = 0;
////	scanf("%d", &input);
////	long long arr[10][2];
////	long long  tmp1, tmp2;
////	for (int i = 0; i < input; i++)
////	{
////		if (scanf("%lld/%lld", &tmp1, &tmp2))
////		{
////			arr[i][0] = tmp1;
////			arr[i][1] = tmp2;
////		}
////	}
////	if (input == 1)
////	{
////		arr[0][0]<0?
////	}
////	long long lcm_result = arr[0][1];
////	for (int i = 1; i < input; i++)
////		if (arr[i][1] != 0 && lcm_result > 0)
////			lcm_result = lcm(lcm_result, arr[i][1]);
////	for (int i = 0; i < input; i++)
////		if (arr[i][1] != 0 && lcm_result>=arr[i][1])
////			arr[i][0] *= (lcm_result / arr[i][1]);
////		else if(arr[i][1]==0)
////			arr[i][0] *= lcm_result;
////	int upper = 0;
////	for (int i = 0; i < input; i++)
////		upper += arr[i][0];
////	long long  temp = 0;
////	upper < 0 ? temp = -upper : temp = upper;
////	long long  gcd_result = gcd(temp, lcm_result);
////	upper /= gcd_result;
////	lcm_result /= gcd_result;
////	long  inte = upper / lcm_result;
////	long  ret = upper - inte * lcm_result;
////	if (inte != 0 && ret != 0)
////		cout << inte << " " << ret << "/" << lcm_result;
////	else if (inte != 0 && ret == 0)
////		cout << inte << endl;
////	else
////		cout << ret << "/" << lcm_result;
////	//long long int max=0,sum=0;
//////	//求出分母最大的数 
//////	for(int i=0;i<input;i++)
//////	{
//////		if(max<arr[i][1])
//////			max=arr[i][1];
//////	}
//////	int signal = 1;
//////	for (int i = max; i > 0; i++)
//////	{
//////		//寻找最小公倍数 
//////		for (int j = 0; j < input; j++)
//////		{
//////			signal = i % arr[j][1];
//////			if (signal != 0)
//////				break;
//////		}
//////		if (signal == 0)
//////		{
//////			max = i;
//////			break;
//////		}
//////	}
//////	for(int i=0;i<)
//////	//同分母，相加减 
//////	for(int i=0;i<input;i++)
//////	{
//////		arr[i][0]*=(max/arr[i][1]);
//////		if(arr[i][2]==0)
//////			sum+=arr[i][0];
//////		else
//////			sum-=arr[i][0];
//////			
//////	}
//////	long long int temp1=sum,temp2=max;
//////	while(temp2)
//////	{
//////		long long int tmp=temp1%temp2;
//////		temp1=temp2;
//////		temp2=tmp;
//////	 } 
//////
//////	sum/=temp1;
//////	max/=temp1;
//////	long long int ret1=sum/max,ret2=sum%max;
//////	if(ret2==0)
//////		printf("%d",ret1);
//////	else if(ret1==0)
//////		printf("%d/%d",sum,max);
//////	else
//////		printf("%d %d/%d",ret1,ret2,ret1);
////	return 0;
////}
//
////#include<iostream>
////using namespace std;
////#include <string>
////int main()
////{
////	string s1, s2, s3;
////	getline(cin, s3);
////	for (int i = 0; i < s3.size(); i++)
////	{
////		if (s3[i] == ' ')
////		{
////			s1 = s3.substr(0, i);
////			s2 = s3.substr(i + 1, s3.size() - i - 1);
////			break;
////		}
////	}
////	int flag1 = 0, flag2 = 0;
////	for (int i = 0; i < s1.size(); i++)
////		if (!isdigit(s1[i]))
////		{
////			flag1 = 1;
////			break;
////		}
////
////	for (int i = 0; i < s2.size(); i++)
////		if (!isdigit(s2[i]))
////		{
////			flag2 = 1;
////			break;
////		}
////
////	int nums1 = 0, nums2 = 0;
////	//判断是否超过正数位 
////	s1.size() > 4 ? flag1 = 1 : 1;
////	s2.size() > 4 ? flag2 = 1 : 1;
////	//将字符转换为数字 
////	flag1 == 0 ? nums1 = stoi(s1) : 1;
////	flag2 == 0 ? nums2 = stoi(s2) : 1;
////	//上面保证小于4位，这里保证在1000以内 
////	nums1 > 1000 || nums1 <= 0 ? flag1 = 1 : 1;
////	nums2 > 1000 || nums2 <= 0 ? flag2 = 1 : 1;
////	//cout<<flag1<<flag2<<endl;
////	//cout<<nums1<<nums2<<endl;
////	if (flag1 == 1 && flag2 == 1)
////		cout << "? + ? = ?" << endl;
////	else if (flag1 == 1)
////		cout << "? + " << nums2 << " = ?" << endl;
////	else if (flag2 == 1)
////		cout << nums1 << " + ? = ?" << endl;
////	else
////		cout << nums1 << " + " << nums2 << " = " << nums1 + nums2 << endl;
////	return 0;
////}
////
////#include <iostream>
////using namespace std;
////#include <cmath>
////#include <cstdio>
////#include <algorithm>
////long long gcd(long long a, long long b) {
////	//if (a % b == 0) return b;
////	return b == 0 ? a : gcd(b, a % b);
////}
////
////long long lcm(long long a, long long b)
////{
////	if (a == 0)
////		return b;
////	else if (b == 0)
////		return a;
////	return a * b / gcd(a, b);
////}
////
////int main()
////{
////	int input = 0;
////	scanf("%d", &input);
////	long long arr[10][2];
////	long long  tmp1, tmp2;
////	for (int i = 0; i < input; i++)
////	{
////		if (scanf("%lld/%lld", &tmp1, &tmp2))
////		{
////			arr[i][0] = tmp1;
////			arr[i][1] = tmp2;
////		}
////	}
////	//if (input == 1)
////	//{
////	//	int tmp = gcd(arr[0][0], arr[0][1]);
////	//	
////	//	arr[0][0] /= abs(tmp);
////	//	arr[0][1] /= abs(tmp);
////	//	if (arr[0][0] / arr[0][1] != 0)
////	//		cout << arr[0][0] / arr[0][1] << " "<<arr[0][0] % arr[0][1] <<"/"  <<arr[0][1]<<endl;
////	//	else
////	//		cout << arr[0][0] % arr[0][1] << "/" << arr[0][1] << endl;
////	//	return 0;
////	//}
////	long long lcm_result = arr[0][1];
////	if (arr[0][1] == 0)
////		arr[0][0] = 0;
////	for (int i = 1; i < input; i++)
////	{
////		if (arr[i][1] == 0)
////			arr[i][0] = arr[i][1] = 0;
////
////		lcm_result = lcm(lcm_result, arr[i][1]);
////	}
////			
////	long long sum = 0;
////	if (lcm_result == 0)
////	{
////		cout << 0 << endl;
////		return 0;
////	}
////	for (int i = 0; i < input; i++)
////	{
////		if (arr[i][1] != 0)
////			arr[i][0] *= (lcm_result / arr[i][1]);
////		else
////			arr[i][0] *= lcm_result;
////		sum += arr[i][0];
////	}
////	int flag = 0;
////	sum < 0 ? flag = 1 : 1;
////	if (sum == 0)
////	{
////		cout << 0 << endl;
////		return 0;
////	}
////	long long val = gcd(abs(sum), lcm_result);//最后结果的最大公约数 
////	sum /= val;
////	lcm_result /= val;
////	if (sum / lcm_result != 0)
////	{
////		if ((sum % lcm_result) == 0)
////			cout << sum / lcm_result << endl;
////		else
////			cout << sum / lcm_result << " " << (sum % lcm_result) << "/" << lcm_result << endl;
////	}
////		 
////	else
////		cout << (sum % lcm_result) << "/" << lcm_result << endl;
////
////	//	int upper=0;
////	//	for(int i=0;i<input;i++)
////	//		upper+=arr[i][0];
////	//	long long  temp=0;
////	//	upper<0?temp=-upper:temp=upper;
////	//	long long  gcd_result=gcd(temp,lcm_result);
////	//	upper/=gcd_result;
////	//	lcm_result/=gcd_result;
////	//	long  inte=upper/lcm_result;
////	//	long  ret=upper-inte*lcm_result;
////	//	if(inte!=0 && ret!=0)
////	//		cout<<inte<<" "<<ret<<"/"<<lcm_result;
////	//	else if(inte !=0 && ret==0)
////	//		cout<<inte<<endl;
////	//	else
////	//		cout<<ret<<"/"<<lcm_result;
////		//long long int max=0,sum=0;
////	//	//求出分母最大的数 
////	//	for(int i=0;i<input;i++)
////	//	{
////	//		if(max<arr[i][1])
////	//			max=arr[i][1];
////	//	}
////	//	int signal = 1;
////	//	for (int i = max; i > 0; i++)
////	//	{
////	//		//寻找最小公倍数 
////	//		for (int j = 0; j < input; j++)
////	//		{
////	//			signal = i % arr[j][1];
////	//			if (signal != 0)
////	//				break;
////	//		}
////	//		if (signal == 0)
////	//		{
////	//			max = i;
////	//			break;
////	//		}
////	//	}
////	//	for(int i=0;i<)
////	//	//同分母，相加减 
////	//	for(int i=0;i<input;i++)
////	//	{
////	//		arr[i][0]*=(max/arr[i][1]);
////	//		if(arr[i][2]==0)
////	//			sum+=arr[i][0];
////	//		else
////	//			sum-=arr[i][0];
////	//			
////	//	}
////	//	long long int temp1=sum,temp2=max;
////	//	while(temp2)
////	//	{
////	//		long long int tmp=temp1%temp2;
////	//		temp1=temp2;
////	//		temp2=tmp;
////	//	 } 
////	//
////	//	sum/=temp1;
////	//	max/=temp1;
////	//	long long int ret1=sum/max,ret2=sum%max;
////	//	if(ret2==0)
////	//		printf("%d",ret1);
////	//	else if(ret1==0)
////	//		printf("%d/%d",sum,max);
////	//	else
////	//		printf("%d %d/%d",ret1,ret2,ret1);
////	return 0;
////}
//
////#include <iostream>
////using namespace std;
////#include <string>
////#include <vector>
////
////int main()
////{
////	int row = 0;
////	cin >> row;
////	getchar();
////	string str;
////	getline(cin, str);
////	//cout << str.size() << endl;
////	char arr[101][101] = { 0 };
////	int column = str.size() / row;
////	if (str.size() % row > 0)
////		column++;
////	int count = 0;
////	for (int j = column - 1; j >= 0; j--)
////	{
////		for (int i = 0; i < row; i++)
////		{
////			arr[i][j] = str[count++];
////		}
////	}
////
////	for (int i = 0; i < row; i++)
////	{
////		for (int j = 0; j < column; j++)
////		{
////
////			cout << arr[i][j];
////		}
////		cout << endl;
////	}
////	return 0;
////}
//
////#include <iostream>
////using namespace std;
////#include <cstdio>
////#include <unordered_map>
////#include <vector>
////#include <algorithm>
////int main()
////{
////    int n;
////    cin >> n;
////
////    for (int i = 0; i < n; i++)
////    {
////        unordered_map<int, char> m1;
////        int count = 0, sum = 0;
////        unordered_map<int, vector<int>> m2;
////        while (1)
////        {
////            int a, b, c;
////            char ch;
////            scanf("%d %c %d:%d", &a, &ch, &b, &c);
////            if (a == 0)
////                break;
////            auto it = m1.find(a);
////            cout << "a:" << a << endl;
////            if (it == m1.end() && ch == 'S')
////            {
////                m1.insert({ a,ch });
////                m2.insert({ a,vector<int>{b,c} });
////            }
////            else if (it != m1.end() && ch == 'S')
////            {
////                m2.erase(it->first);
////                m2.insert({ a,vector<int>{b,c} });
////            }
////            else if (it != m1.end() && ch == 'E')
////            {
////                auto it2 = m2.find(a);
////                int h = it2->second[0], m = it2->second[1];
////                cout << "h:" << h << " m:" << m << " b:" << b << " c:" << c << endl;
////                if (c > m)
////                    sum += (b - h) * 60 + c - m;
////                else
////                    sum += (b - h - 1) * 60 + c - m + 60;
////                cout << "it->first:" << it->first << " " << a << endl;
////                m1.erase(it->first);
////                m2.erase(it->first);
////                if (m2.find(a) != m2.end())
////                    cout << "YES" << endl;
////                count++;
////                cout << count << " " << sum << endl;
////            }
////
////
////
////        }
////        if (count == 0)
////        {
////            cout << 0 << " " << 0 << endl;
////            continue;
////        }
////        int add = sum % count > 0 ? 1 : 0;
////        cout << count << " " << sum / count + add << endl;
////    }
////    return 0;
////}
////class Compare{
////public:
////	bool operator()(const vector<int> &a,const vector<int> &b)
////	{
////		return a[0]<b[0];
////	}
////};
////int main()
////{
////    int n;
////    cin>>n;
////    for(int k=0;k<n;k++)
////    {
////        vector<vector<int>> vv;
////        // map<int,vector<int>> m;
////        //vector<int> v;
////        while(1)
////        {
////            int a,b,c;
////            char ch;
////            scanf("%d %c %d:%d",&a,&ch,&b,&c);
////            vv.emplace_back(vector<int>{a,b,c});
////            if(a==0)
////                break;
////            //m.insert;
////            
////        }
////        if(vv.size()==1)
////        {
////        	cout<<0<<" "<<0<<endl;
////        	continue;
////		}
////        //if(vv[k].size()==1)
////        	sort(vv.begin(),vv.end(),Compare());
//////        for(int i=0;i<vv.size();i++)
//////        	cout<<vv[i][0];
////        int count=0,sum=0;
////        for(int i=1,j=2;i<vv.size()&&j<vv.size();i++)
////        {
////            if(vv[i][0]!=vv[j][0])
////            {
////            	j++;
////            	continue;
////			}
////                
////            if(vv[j][2]-vv[i][2]>=0)
////                sum+=(vv[j][1]-vv[i][1])*60+(vv[j][2]-vv[i][2]);
////            else
////                sum+=(vv[j][1]-vv[i][1]-1)*60+(vv[j][2]-vv[i][2])+60;
////            //cout<<"sum = "<<sum<<endl;
////            count++;
////            j+=2;
////			i++;
////            if(j>vv.size()-1)
////            	break;
////            
////        }
////		if(count==0)
////        {
////            cout<<0<<" "<<0<<endl;
////            continue;
////        }
////        int add=sum%count>0?1:0;
////        cout<<count<<" "<<sum/count+add<<endl;
////    }
////    return 0;
////}
//
////#include <iostream>
////
////using namespace std;
////
////int main()
////{
////    int n;//除数
////    cin >> n;
////    int s = 1;//被除数，即全为1
////    int num = 1;//被除数位数
////    while (s < n)//使得被除数大于除数
////    {
////        s = s * 10 + 1;
////        num++;
////    }
////    cout << "S:" << s << endl;
////    while (1)
////    {
////        cout << s / n;//输出商
////        s = s % n;//取模，得到余数
////        if (s == 0)//余数为0，停止
////            break;
////        else
////        {
////            s = s * 10 + 1;//余数乘10+1
////            num++;//位数也+1
////        }
////    }
////    cout << ' ' << num;
////    return 0;
////}
////
////#include <iostream>
////using namespace std;
////#include <string>
////
////int main()
////{
////	string s = "hello";
////	s.erase(s.begin(),s.begin()+1);
////	cout << s << endl;
////	return 0;
////}
//
////#include <iostream>
////using namespace std;
////#include <string>
////void Erase(string& s)
////{
////	//删除行首的空格
////	int count = 0;
////	while (s[count++] == ' ');
////	s.erase(0, count - 1);
////	//cout<<s<<endl;
////	//删除行中间的空格 
////	int slow = 0, fast = 0;
////	while (fast < s.size())
////	{
////		if (s[fast] != ' ' || (fast > 0 && s[fast - 1] != ' '))
////			s[slow++] = s[fast];
////		fast++;
////	}
////	//cout<<s<<endl;
////	//删除行尾的空格
////	s.erase(s.begin() + slow, s.end());
////	int pos = s.size() - 2;
////	if (!isalpha(s[s.size() - 1]) && !isdigit(s[s.size() - 1]))
////	{
////		while (s[pos--] == ' ')
////			s.erase(s.begin() + pos + 1, s.end() - 1);
////	}
////}
////void Tolower(string& s)
////{	
////	for(int i=0;i<s.size();i++)
////		if(s[i]>='A' && s[i]<='Z')
////			s[i] = tolower(s[i]);
////}
////void Replace(string& s)
////{
////	//符号
////	int pos = -2;
////	while (pos != -1)
////	{
////		pos = s.find("me");
////		if (pos != -1 && pos > 0 && pos <= s.size())
////		{
////			if (!isalpha(s[pos - 1]))
////			{
////				s.erase(pos, 2);
////				s.insert(pos, "you");
////			}
////
////		}
////		pos = s.find("I");
////		if (pos != -1 && pos>=0 && pos<=s.size())
////		{
////				
////			if (pos ==0 || !isalpha(s[pos - 1]))
////			{
////				s.erase(pos, 1);
////				s.insert(pos,"you");
////			}
////			
////		}
////		
////			//s.replace(pos, 3, "you");
////	}
////	pos = -2;
////	while (pos != -1)
////	{
////		
////		pos = s.find("can you");
////		if (pos != -1 && pos >= 0 && pos <= s.size())
////		{
////			if (pos==0 || !isalpha(s[pos - 1]))
////			{
////				s.erase(pos, 7);
////				s.insert(pos, "I can");
////			}
////			
////		}
////			
////		pos = s.find("could you");
////		if (pos != -1 && pos >= 0 && pos <= s.size())
////		{
////			if (pos==0 ||!isalpha(s[pos - 1]))
////			{
////				s.erase(pos, 9);
////				s.insert(pos, "I could");
////			}
////			
////		}
////			
////	}
////}
////int main()
////{
////	int N;
////	cin >> N;
////	getchar();
////	for (int i = 0; i < N; i++)
////	{
////		string s;
////		getline(cin, s);
////		Tolower(s);
////		Erase(s);
////		Replace(s);
////		cout << s << endl;
////	}
////	return 0;
////}
////
////#include<iostream>
////using namespace std;
////#include <vector>
////#include <unordered_map>
////#include <map>
////#include <algorithm>
////int N, M, S, D;
////vector<int>aid_num(500);
////int max_aid = 0;
////int length_num = 0;
////int path_sum = 0;
////map<int, int> m;
////int size = 0;
////vector<vector<int>> result;
////vector<int> rp;
//////int flag = 0;
////
////void dfs(const vector<vector<int>>& path, int startindex,int endpos,int flag)
////{
////    if (endpos == D)
////    {
////        rp.emplace_back(endpos);
////        path_sum += path[startindex-1][2];
////        rp.emplace_back(path_sum);
////        length_num++;
////        //path_sum+=path[]
////        //max_aid += aid_num[path[startindex][1]];
////        //rp.emplace_back(length_sum);
////        rp.emplace_back(max_aid);
////        result.emplace_back(rp);
////        rp.pop_back();
////        rp.pop_back();
////        //rp.clear());
////        return;
////    }
////    if (startindex >= path.size())
////        return;
////   /* if (path[startindex][0] != startpos)
////        return;*/
////    
////    for (int i = startindex; i < path.size(); i++)
////    {
////       
////        if (path[i][0] == endpos)
////
////        {
////            if (flag == 1)
////                rp.clear();
////            rp.emplace_back(path[i][0]);
////            //rp.emplace_back(path[i][1]);
////            //length_num+=path[i][2];
////            path_sum += path[startindex][2];
////            max_aid += aid_num[path[i][1]];
////            dfs(path, i + 1, path[i][1],0);
////            //length_num-=path[i][2];
////            max_aid -= aid_num[path[i][1]];
////            path_sum -= path[startindex][2];
////            rp.pop_back();
////            //rp.pop_back();
////
////
////        }
////    }
////}
////
////class Compare1 {
////public:
////    bool operator()(vector<int>& a, vector<int>& b)
////    {
////        if (a[0] == b[0])
////            return a[1] < b[1];
////        return a[0] < b[0];
////    }
////};
////class Find
////{
////public:
////    bool operator()(vector<int>& a)
////    {
////        if (a[0] == S)
////            return true;
////    }
////};
////class Compare2 {
////public:
////    bool operator()(vector<int>& a, vector<int>& b)
////    {
////        return a[a.size()-1] > b[b.size()-1];
////    }
////};
////int main()
////{
////
////    cin >> N >> M >> S >> D;
////
////    for (int i = 0; i < N; i++)
////        cin >> aid_num[i];
////    vector<vector<int>> path;
////    for (int i = 0; i < M; i++)
////    {
////        int a, b, c;
////        cin >> a >> b >> c;
////        path.emplace_back(vector<int>{a, b, c});
////    }
////    max_aid = aid_num[S];
////    sort(path.begin(), path.end(), Compare1());
////    auto it = find_if(path.begin(), path.end(), Find());
////    dfs(path, it - path.begin(), S,1);
////    sort(result.begin(), result.end(), Compare2());
////    cout << length_num << result[0][3] << endl;
////    cout << result[0][0] << " "<<result[0][1] << " "<<result[0][2] << endl;
////    return 0;
////}
////#include <iostream>
////using namespace std;
////#include <vector>
////#include <unordered_map>
////#include <list>
////int main()
////{
////    //map<string 
////    string head;
////    cin >> head;
////    int n;
////    cin >> n;
////    vector<vector<string>> vvs;
////    unordered_map<string, int> value;
////    unordered_map<string, string> address;
////    for (int i = 0; i < n; i++)
////    {
////        string s1, s2; cin >> s1;
////        int val = 0; cin >> val;
////        cin >> s2;
////        value[s1] = val;
////        address[s1] = s2;
////        vvs.emplace_back(vector<string>{s1, s2});
////    }
////    //list<int> l;
////    unordered_map<int, int> rep;
////    vector<string> vs;
////    //l.emplace_back(value[head]);
////    cout << head << " " << value[head] << " " << address[head] << endl;
////   // string f = address[head];
////    for (int i = 1; i < n; i++)
////    {
////         head = address[f];
////         f = address[head];
////        
////        rep[abs(value[head])]++;
////        if (rep[abs(value[head])] > 1 || f == "-1")
////        {
////            vs.emplace_back(head);
////            continue;
////        }
////        
////        cout << head << " " << value[head] << " " << address[head] << endl;
////        //l.emplace_back(value[f]);
////    }
////    for (int i = 0; i < vs.size(); i++)
////    {
////        cout << vs[i] << " " << value[vs[i]] << " " << address[vs[i]] << endl;
////    }
////    //    for (auto it : l)
////    //        cout << it << endl;
////
////    return 0;
////}
////#include <iostream>
////#include <map>
////#include <string>
////#include <vector>
////#include <set>
////using namespace std;
////
////class compare {
////public:
////    bool operator()(const pair<int, string>& a, const pair<int, string>& b) const {
////        if (a.first == b.first) {
////            return a.second > b.second; // 当键相等时，根据值进行排序
////        }
////        return a.first < b.first; // 否则，按照键进行排序
////    }
////};
////
////int main() {
////    set<pair<int,string>,compare>m;
////    m.insert(make_pair(1, "21000" ));
////    m.insert(make_pair( 1, "20000" ));
////    m.insert(make_pair( 2, "12000" ));
////    m.insert(make_pair( 3, "13000" ));
////    //sort(m.begin(), m.end(), compare());
////    for (auto it : m)
////        cout << it.first << " " << it.second << endl;
////
////    return 0;
////}
//
////#include <queue>
////#include <iostream>
////#include <vector>
////using namespace std;
//////struct compare {
//////	bool operator()(int& a, int& b)
//////	{
//////		return a > b;
//////	}
//////};
////bool Compare(int& a, int& b)
////{
////	return a > b;
////}
////
////int main()
////{
////	
////
////	//另一种构建大顶堆的方法
////	priority_queue<int, vector<int>, Compare > big_heap2;
////	big_heap2.push(2);
////	big_heap2.push(5);
////	big_heap2.push(1);
////	big_heap2.push(24);
////	big_heap2.push(4);
////	vector<int>v({ 2,5,1,24,4 });
////	sort(v.begin(), v.end(), Compare);
////	for (auto& it : v)
////		cout << it << " ";
////	cout << endl;
////	while (!big_heap2.empty())
////	{
////		cout << big_heap2.top() << " ";
////		big_heap2.pop();
////	}
////		
////
////
////	return 0;
////}
////
////#include <iostream>
////#include <string>
////#include <algorithm>
////#include <queue>
////#include <unordered_map>
////using namespace std;
////string aim = "chatgpt";
////int get_cnt(string s)
////{
////	string tmp = s;
////	int cnt = 0;
////	int index = 0;
////	int n = s.size();
////	while (index != -1)
////	{
////		index = tmp.find(aim);
////		if (index != -1)
////		{
////			cnt++;
////			tmp = tmp.substr(index + 1);
////		}
////	}
////	return cnt;
////}
////struct cmp
////{
////	bool operator()(const pair<string, int>& p1, const pair<string, int>& p2)
////	{
////		if (p1.second == p2.second) return p1.first < p2.first;
////		return p1.second > p2.second;
////	}
////};
////int main()
////{
////	int n = 5;
////	cin >> n;
////	unordered_map<string, int> hash;
////	priority_queue<pair<string, int>, vector<pair<string, int>>, cmp> q;
////	while (n--)
////	{
////		string tmp1;
////		cin >> tmp1; // Id
////		string tmp2;
////		// getchar();
////		cin.ignore();
////		getline(cin, tmp2);
////		transform(tmp2.begin(), tmp2.end(), tmp2.begin(), ::tolower); // 全部变小写
////		int cnt = get_cnt(tmp2);
////		hash[tmp1] += cnt;
////	} // 全部存在哈希表里了
////	for (auto& e : hash)
////	{
////		q.push(e);
////		if (q.size() > 3) q.pop();
////	}
////	// 此时剩下的就是最大的三个 
////	vector<pair<string, int>> vp;
////	while (q.size() > 0)
////	{
////		pair<string, int> tmp = q.top();
////		q.pop();
////		vp.push_back(tmp);
////	}
////	while (vp.size() > 0)
////	{
////		if (vp.back().second > 0)
////			cout << vp.back().first << " " << vp.back().second << endl;
////		vp.pop_back();
////	}
////	return 0;
////}
//
////#include <iostream>
////using namespace std;
////#include <string>
////#include <vector>
////#include <unordered_map>
////#include <algorithm> 
////#include <utility>
////bool compare(const pair<string, int>& a, const pair<string, int>& b)
////{
////	if (a.second == b.second)
////		return a.first < b.first;
////	return a.second > b.second;
////}
////a.first<b.first
//// first_string : 88888  second_int： 2
//// first_string : 10000  second_int： 2
//// first_string : 23333  second_int： 2
//// first_string : 66666  second_int： 1
//// first_string : 55555  second_int： 1
//// first_string : 22222  second_int： 1
//// first_string : 44444  second_int： 1
//// first_string : 33333  second_int： 0
//// first_string : 12345  second_int： 0
//// first_string : 11111  second_int： 0
//
////2
////11111 22222
////33333 44444
////5
////44444 55555 33333 22222 11111
////4
////11111 22222
////33333 44444
////99999 00000
////88888 66666
////10
////11111 22222 33333 99999 66666 88888 12345 77777 55555 00000
////int main()
////{
////	int N;
////	cin >> N;
////	vector<vector<string>> lover(N, vector<string>(2));//每一对恋人 
////
////	for (int i = 0; i < N; i++)
////	{
////		cin >> lover[i][0] >> lover[i][1];
////
////		//		Pos[lover[i][1]]=-1;
////		//		Pos[lover[i][0]]=-1;
////	}
////
////	int M;
////	cin >> M;
////	//getchar();
////	unordered_map<string, int>Find;//撒狗粮的次数
////	unordered_map<string, int > Pos; //先将每一位恋人的位置调成-1
////	vector<string>visitor(M + 1);//宾客 
////	for (int i = 1; i <= M; i++)
////	{
////		string S;
////		cin >> S;
////		Find[S] = 0;//出现的每一位宾客首先默认初始化撒狗粮的次数为0 
////		Pos[S] = i;
////		visitor[i] = S;
////	}
////	//	for(auto it:visitor)
////	//		cout<<it<<endl;
////	for (int i = 0; i < N; i++)
////	{
////		int startpos = Pos[lover[i][0]];//visitor.find(lover[i][0]);
////		int endpos = Pos[lover[i][1]];//visitor.find(lover[i][1]);
////		//	cout<<"交换前： startpos : "<<startpos<<"endpos : "<<endpos<<endl;
////			//int tmp=endpos;
////		if (startpos > endpos)
////			swap(startpos, endpos);
////		//cout<<"交换后： startpos : "<<startpos<<"endpos : "<<endpos<<endl;
////		int signal = 0;
////		if (startpos == 0 || endpos == 0)
////			continue;
////
////		else if (startpos + 1 == endpos)
////		{
////			//cout<<"visitor.size: "<<visitor.size()<<endl;
////			if (startpos > 2)
////				Find[visitor[startpos - 1]]++;
////			if (endpos < visitor.size() - 1)
////			{
////				//signal=1;
////				Find[visitor[endpos + 1]]++;
////			}
////			//cout<<signal<<endl;	
////			//cout<< Find[visitor[startpos-1]]<<" "<<Find[visitor[endpos+1]]<<endl;
////		}
////		else
////		{
////			for (int k = startpos + 1; k < endpos; k++)
////			{
////				//cout<<visitor[k]<<endl;
////				Find[visitor[k]]++;
////				//cout<<"Find[visitor[k]]: "<<visitor[k]<<" "<<Find[visitor[k]]<<endl;
////			}
////		}
////	}
////	vector<pair<string, int>> result(Find.begin(), Find.end());
////	sort(result.begin(), result.end(), compare);
////
////
////	//	multimap<int,string,greater<int>> result;
////	//	for(auto it:Find)
////	//	{
////	//		result.insert({it.second,it.first});
////	//		//cout<<" first : "<<it.first<<"second ： "<<it.second<<endl; 
////	//	}
////	//	for(auto it:result)
////	//	{
////	//		cout<<" first_string : "<<it.first<<"  second_int： "<<it.second<<endl; 
////	//	}
////	//	map<string,int> m;
////	//	m.insert({result.begin())->second,result.begin()->first});
////	int max = result[0].second;
////	cout << result[0].first;
////	int flag = 0;
////	for (auto it : result)
////	{
////		if (flag == 1)
////		{
////			if (max == it.second)
////				cout << " " << it.first;
////			else
////				break;
////		}
////		else
////			flag = 1;
////
////	}
////
////	return 0;
////}
//
//

//#include <iostream>
//using namespace std;
//#include <vector> 
//#include <string>
//int count1 = 0, treasure = 0;
//int N, M;
//int flag = 0;
//void dfs(vector<string>& map, int row, int col)
//{
//	if (row < 0 || row >= N || col < 0 || col >= M)
//		return;
//	if (map[row][col] == '0')
//		return;
//
//	if (map[row][col] !='0' && map[row][col]!='1')
//		flag = 1;
//	map[row][col] = '0';
//	/*if (map[row][col + 1] == '0'
//		&& map[row][col - 1] == '0'
//		&& map[row - 1][col] == '0'
//		&& map[row + 1][col] == '0'
//		)
//	{
//		count1++;
//		if (flag == 1)
//		{
//			treasure++;
//			flag = 0;
//		}
//
//		return;
//	}*/
//	dfs(map, row + 1, col);
//	dfs(map, row - 1, col);
//	dfs(map, row,col + 1);
//	dfs(map, row,col - 1);
//}
//int main()
//{
//
//	cin >> N >> M;
//	vector<string > map(N + 1);
//	getchar();
//	string s;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> s;
//		map[i]=s;
//	}
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			if (map[i][j] != '0')
//			{
//				count1++;
//				dfs(map, i, j);
//				if (flag == 1)
//					treasure++;
//				flag = 0;
//			}
//
//		}
//	}
//	//dfs(map, 0, 0);
//	cout << count1 << " " << treasure << endl;
//	return 0;
//}

//
//#include <iostream>
//using namespace std;
//#include <vector>
//#include <unordered_map>
//#include <list>
//int main()
//{
//    //map<string 
//    string head;
//    cin >> head;
//    int n;
//    cin >> n;
//    vector<vector<string>> vvs;
//    unordered_map<string, int> value;
//    unordered_map<string, string> address;
//    for (int i = 0; i < n; i++)
//    {
//        string s1, s2; cin >> s1;
//        int val = 0; cin >> val;
//        cin >> s2;
//        value[s1] = val;
//        address[s1] = s2;
//        vvs.emplace_back(vector<string>{s1, s2});
//    }
//    //list<int> l;
//    unordered_map<int, int> rep;
//    vector<string> vs;
//    //l.emplace_back(value[head]);
//    cout << head << " " << value[head] << " " << address[head] << endl;
//    string f = address[head];
//    for (int i = 1; i < n; i++)
//    {
//
//        head = f;
//        f = address[head];
//        rep[abs(value[head])]++;
//        if (rep[abs(value[head])] > 1)// || f=="-1")
//        {
//            vs.emplace_back(head);
//            continue;
//        }
//
//        cout << head << " " << value[head] << " " << address[head] << endl;
//        //l.emplace_back(value[f]);
//    }
//    //cout << "vs.size: " << vs.size() << endl;
//    if (vs.size() > 1)
//    {
//        for (int i = 0; i < vs.size() - 1; i++)
//            cout << vs[i] << " " << value[vs[i]] << " " << vs[i + 1] << endl;
//        cout << vs[vs.size() - 1] << " " << value[vs[vs.size() - 1]] << " " << address[vs[vs.size() - 1]] << endl;
//        //    for (auto it : l)
//        //        cout << it << endl;
//    }
//    else
//        cout << vs[0] << " " << value[vs[0]] << " " << address[vs[0]] << endl;
//
//   
//
//    return 0;
//}
// 
 

//#include <iostream>
//using namespace std;
//#include <vector>
//#include <utility>
//#include <string>
//#include <algorithm>
//
//int N, G, K;
//bool Compare(pair<string, int>& a, pair<string, int>& b)
//{
//	if (a.second == b.second)
//		return a.first < b.first;
//	return a.second > b.second;
//}
//bool Count1(pair<string, int>& a)
//{
//	return a.second < G && a.second >= 60;
//}
//bool Count2(pair<string, int>& a)
//{
//	return a.second >= G;
//}
//int main()
//{
//
//	cin >> N >> G >> K;
//	vector<pair<string, int> >v;
//	for (int i = 0; i < N; i++)
//	{
//		string s; cin >> s;
//		int a; cin >> a;
//		v.emplace_back(make_pair(s, a));
//	}
//	int sum = 0;
//	sort(v.begin(), v.end(), Compare);
//	sum += 20 * count_if(v.begin(), v.end(), Count1) + 50 * count_if(v.begin(), v.end(), Count2);
//	cout << sum << endl;
//	int rating = 1, count = 0;
//	for (int i = 0; i < N; i++)
//	{
//
//		if (i > 0 && v[i].second == v[i - 1].second)
//		{
//			rating--;
//			cout << rating << " " << v[i].first << " " << v[i].second << endl;
//			count++;
//
//		}
//		else
//		{
//			if (count > 0)
//			{
//				rating += count;
//				count = 0;
//			}
//			if (rating >= K + 1)
//				break;
//			cout << rating << " " << v[i].first << " " << v[i].second << endl;
//		}
//		if (rating >= K + 1)
//			break;
//
//		rating++;
//	}
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//struct Treenode
//{
//	int val;
//	Treenode* left;
//	Treenode* right;
//	Treenode(int x) :val(x), left(nullptr), right(nullptr) {}
//
//};
//void Pre(Treenode* root)
//{
//	if (root == nullptr)	return;
//	cout << root->val << " ";
//	Pre(root->left);
//	Pre(root->right);
//}
//int main()
//{
//	Treenode * root= new Treenode(1);
//	root->left = new Treenode(2);
//	root->right = new Treenode(3);
//	root->right->left = new Treenode(4);
//	root->right->right = new Treenode(5);
//	root->left->left = new Treenode(6);
//	root->left->right = new Treenode(7);
//	Pre(root);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <stack>
//int main()
//{
//    stack<int> s1;
//    stack<char> s2;
//    int N;
//    cin >> N;
//    for (int i = 0; i < N; i++)
//    {
//        int a;
//        cin >> a;
//        s1.push(a);
//        cout << s1.top() << endl;
//    }
//    for (int i = 0; i < N; i++)
//    {
//        char ch;
//        cin >> ch;
//        s2.push(ch);
//        cout << s2.top() << endl;
//    }
//
//    int result = 0;
//    while (!s2.empty() || s1.size() > 1)
//    {
//        int a = s1.top();
//        s1.pop();
//        int b = s1.top();
//        s1.pop();
//
//        char op = '0';
//        //cout<<b<<" "<<op<<" "<<a<<endl;
//
//        if (!s2.empty()) {
//            op = s2.top();
//            s2.pop();
//        }
//
//        if (a == 0)
//        {
//            cout << "ERROR: X/0" << endl;
//            return 0;
//        }
//        int ret = 0;
//        if (op == '/')    ret = b / a;
//        else if (op == '*')    ret = b * a;
//        else if (op == '-')    ret = b - a;
//        else if (op == '+')    ret = b + a;
//        result += ret;
//        s1.push(ret);
//    }
//    cout << result << endl;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//#include <unordered_map>
//#include <vector>
//#include <algorithm>
//#include <cmath> 
//int Start, End;
//unordered_map<int, bool> independ;
//int count_num = 0;
//int  circle(int n)
//{
//    int tmp = 0;
//    while (n)
//    {
//        tmp += (n % 10) * (n % 10);
//        n /= 10;
//    }
//    return tmp;
//}
//bool Happy(int n,vector<int>& num)
//{
//    unordered_map<int, bool> m;//用来判断是否出现重复元素
//    //cout<<"n :"<<n<<" ";
//    int a = n;
//    while (1)
//    {
//        int ret = circle(a);
//        a = ret;
//        if (m[ret] == true)
//            return false;
//        m[ret] = true;
//        count_num++;
//        independ[ret] = true;
//        //num[ret] = 1;
//        //cout<<ret<<" ";
//        if (ret == 1)
//        {
//            //cout<<endl;
//            return true;
//        }
//
//    }
//}
//bool compare(pair<int, int>& a, pair<int, int>& b)
//{
//    return a.second > b.second;
//}
//bool condition(int a)
//{
//    return a;
//}
//
//bool Prime(int n)
//{
//    if (n <= 1)
//        return false;
//    for (int i = 2; i <= sqrt(n); i++)
//        if (n % i == 0)
//            return false;
//    return true;
//}
//int main()
//{
//    cin >> Start >> End;
//    vector<pair<int, int>> result;
//    for (int i = Start; i <= End; i++)
//    {
//        vector<int> num(10005, 0);//计算区间内的幸福数个数
//
//        cout << i << endl;
//       /* if (Happy(i,num))
//            cout << i << " : true" << endl;
//        else
//            cout << i << " : false" << endl;*/
//        count_num = 0;
//        if (Happy(i,num))
//        {
//            //cout<<i<<endl;
//            int Count = count_num; //count_if(num.begin() + Start, num.begin() + End + 1, condition);
//
//            /*if (Start > 1)
//                Count++;*/
//            int tmp = Count;
//            if (i == 31)
//                cout << "tmp:" << tmp << endl;
//            if (Prime(Count-1))
//                tmp *= 2;
//            //independ[i]=true;
//            if (independ[i] == false)
//            {
//                result.emplace_back(pair<int, int>(i, tmp));
//                independ[i] = true;
//            }
//
//        }
//       // num.clear();
//    }
//    sort(result.begin(), result.end(), compare);
//    if (result.size() == 0)
//        cout << "SAD" << endl;
//    else
//    {
//        for (auto& it : result)
//            cout << it.first << " " << it.second << endl;
//    }
//    return 0;
//}