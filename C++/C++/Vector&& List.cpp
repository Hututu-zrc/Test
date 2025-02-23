//#include <iostream>
//using namespace std;
//#include <algorithm>
//#include <vector>
////int main()
////{
////
////	vector<int> v1(3,6);
////	//这个是初始化v1为3个6
////	vector<int> v2(3);
////	//这个是初始化v2为3个0
////
////	//下面三种初始化结果一样，初始化为2,5,6;
////	vector<int> v3={ 2,5,6 };
////	vector<int> v4({ 2,5,6 });
////	vector<int> v5{ 2,5,6 };
////	
////	return 0;
////}
//
////
////#include <iostream>
////using namespace std;
////
////
////int n, m;
////int diff[2005][2005];
////
////
////int main() {
////
////    cin >> n >> m;
////    int x1, y1, x2, y2;
////    while (m--)
////    {
////        cin >> x1 >> y1 >> x2 >> y2;
////        diff[x1][y1] += 1;
////        diff[x2 + 1][y1] -= 1;
////        diff[x1][y2 + 1] -= 1;
////        diff[x2 + 1][y2 + 1] += 1;
////    }
////    for (int i = 1; i < n + 1; i++)
////    {
////        for (int j = 1; j < n + 1; j++)
////            diff[i][j] = diff[i][j - 1] + diff[i - 1][j] - diff[i - 1][j - 1] + diff[i][j];
////    }
////    for (int i = 1; i < n; i++)
////    {
////        for (int j = 1; j < n; j++)
////        {
////            cout << diff[i][j] % 2 << " ";
////        }
////        cout << diff[i][n] % 2 << endl;
////    }
////    for (int j = 1; j < n; j++)
////        cout << diff[n][j] % 2 << " ";
////    cout << diff[n][n] % 2 << endl;
////    return 0;
////}
//
//#include <iostream>
//using namespace std;
//#include <vector>
//
//class Solution {
//public:
//	bool Compare(TreeNode* left, TreeNode* right)
//	{
//		if (left && !right)  return false;
//		if (!left && right) return false;
//		if (!left && !right) return true;
//		if (left->val != right->val)  return false;
//		bool ret1 = Compare(left->left, right->right);//外侧
//		bool ret2 = Compare(left->right, right->left);//内侧
//		return ret1 && ret2;
//
//	}
//	bool isSymmetric(TreeNode* root)
//		return Compare(root->left, root->right);
//};
//int main()
//{
//	int N;
//	cin >> N;
//	vector<vector<long long> > vv;
//	int row = 0;
//	int signal = 0;
//	for (int i = 0; i < N; i++)
//	{
//		long long input;
//		cin >> input;
//		if (i == 0)
//		{
//			vector<long long>v;
//			v.push_back(input);
//			vv.push_back(v);
//
//		}
//		else
//		{
//			int sz = vv[row].size() - 1;
//			long long tmp = input;
//			while (tmp > 10)
//				tmp /= 10;
//			if (vv[row][sz] % 10 == tmp)
//				vv[row].push_back(input);
//			else
//			{
//				vector<long long>v;
//				v.push_back(input);
//				vv.push_back(v);
//				row++;
//			}
//		}
//	}
//	vector<int> v;
//	for (int i = 0; i < vv.size(); i++)
//	{
//		v.push_back(vv[i].size());
//	}
//	sort(v.begin(), v.end());
//	int max1 = v.back();
//	int max2 = *(v.end()-2);
//	int count = 0;
//	for (int i = 0; i < vv.size(); i++)
//	{
//		if (vv[i].size() != max1 && vv[i].size() != max2)
//		{
//			count += vv[i].size();
//			vv.erase(vv.begin() + i);
//			i--;
//		}
//	}
//	cout << count << endl;
//	return 0;
//}