#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <iomanip>
#include <string>
#include <set>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define el "\n"
#define all(arr) arr.begin(), arr.end()
#define allr(arr) arr.rbegin(), arr.rend()
#define in freopen("input.in", "r", stdin);
#define out freopen("output.out", "w", stdout);
#define pi 3.141592653589793230
using namespace std;
const int sz = 1e6 + 10;
bool composite[sz];
vector<ll>primes;
void sieve() {
	composite[0] = composite[1] = true;
	for (int i = 2; i * i <= sz; i++)
	{
		if (!composite[i])
		{
			for (int j = i * i; j <= sz; j += i)
			{
				composite[j] = true;
			}
		}
	}
}
void linearSieve(int n) {
	composite[0] = composite[1] = true;
	for (int i = 2; i <= n; i++)
	{
		if (!composite[i])
		{
			primes.push_back(i);
		}
		for (int j = 0; j < primes.size(); j++)
		{
			if (i * primes[j] > n)
			{
				break;
			}
			composite[i * primes[j]] = true;
			if (i % primes[j] == 0)
			{
				break;
			}
		}
	}
}
int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
bool isPrime(int n) {
	if (n <= 1)
		return false;

	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;

	return true;
}
int lcm(int a, int b) {
	return a / gcd(a, b) * b;
}
bool lucky(string x) {
	for (int i = 0; i < x.size(); i++)
		if (x[i] != '4' && x[i] != '7')
			return false;

	return true;
}
bool isPalindrome(string s) {
	string p = s;
	reverse(all(p));
	if (s == p)
		return true;
	else
		return false;
}
vector<int> getDivisors(int num) {
	vector<int> divisors;
	for (int i = 1; i * i <= num; i++) {
		if (num % i == 0) {
			divisors.push_back(i);
			if (i != num / i) {
				divisors.push_back(num / i);
			}
		}
	}
	sort(all(divisors));
	return divisors;
}
int binarySearch(vector<int>arr, int low, int high, int x) {
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] < x)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return -1;
}
int lowerBound(vector<int>arr, int low, int high, int x) {
	int res = -1;
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (arr[mid] >= x) {
			res = arr[mid];
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}
	return res;
}
int upperBound(vector<int>arr, int low, int high, int x) {
	int res = -1;
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (arr[mid] > x) {
			res = arr[mid];
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}
	return res;
}
void printBinary(int x) {
	if (x <= 1)
	{
		cout << x;
		return;
	}
	printBinary(x >> 1);
	cout << (x & 1);
}
int countBits1(int x) {
	int cnt = 0;
	while (x)
	{
		cnt++;
		x &= (x - 1);
	}
	return cnt;
}
int countBits0(int x) {
	int cnt = 0;
	int bits = sizeof(x) * 8;
	while (x)
	{
		cnt++;
		x &= (x - 1);
	}
	return bits - cnt;
}
int getBit(int x, int idx) {
	return (x >> idx) & 1;
}
int setBit1(int x, int idx) {
	return x | (1 << idx);
}
int setBit0(int x, int idx) {
	return x & ~(1 << idx);
}
int flipBit(int x, int idx) {
	return x ^ (1 << idx);
}
bool powerOf2(int x) {
	return !(x & (x - 1));
}
int lastBitValue(int x) {
	return x & ~(x - 1);
}
int setBitsTo1Until0(int n) {
	if (n == 0)
		return -1;
	int idx = 0;
	while ((n & (1 << idx)) == 0)
	{
		n = setBit1(n, idx);
		idx++;
	}
	return n;
}
int setBitsTo0Until1(int n) {
	int idx = 0;
	while ((n & (1 << idx)) != 0)
	{
		n = setBit0(n, idx);
		idx++;
	}
	return n;
}
int findFirstBit0(int n) {
	int idx = 0;
	while (getBit(n, idx) != 0)
	{
		idx++;
	}
	return idx;
}
int findFirstBit1(int n) {
	int idx = 0;
	while (getBit(n, idx) == 0)
	{
		idx++;
	}
	return idx;
}
int countBitsInRange(int x, int l, int r) {
	int count = 0;
	for (int i = l; i <= r; ++i) {
		if (getBit(x, i)) {
			count++;
		}
	}
	return count;
}
int numBits(int x) {
	if (x == 0) return 1;
	int bits = 0;
	while (x) {
		x >>= 1;
		bits++;
	}
	return bits;
}
unsigned int reverseBits(unsigned int num) {
	unsigned int reverse = 0;
	while (num) {
		reverse <<= 1;
		if (num & 1) reverse ^= 1;
		num >>= 1;
	}
	return reverse;
}
unsigned int nextPowerOfTwo(unsigned int x) {
	if (x == 0) return 1;
	--x;
	x |= x >> 1;
	x |= x >> 2;
	x |= x >> 4;
	x |= x >> 8;
	x |= x >> 16;
	return x + 1;
}
int clz(unsigned int x) {
	if (x == 0)
		return 32;

	int n = 0;
	unsigned int mask = 1 << 31;

	while ((x & mask) == 0) {
		n++;
		mask >>= 1;
	}

	return n;
}

unsigned int prevPowerOfTwo(unsigned int x) {
	if (x == 0) return 0;
	return 1 << (31 - clz(x));
}
int addBits(int a, int b) {
	while (b != 0) {
		int carry = a & b;
		a = a ^ b;
		b = carry << 1;
	}
	return a;
}
int subtractBits(int a, int b) {
	while (b != 0) {
		int borrow = (~a) & b;
		a = a ^ b;
		b = borrow << 1;
	}
	return a;
}
void generateCombinations(int n, int k) {
	int mask = (1 << k) - 1;
	while (mask < (1 << n)) {
		// Process current combination
		for (int i = 0; i < n; ++i) {
			if (mask & (1 << i)) cout << i << " ";
		}
		cout << endl;
		// Get next combination
		int x = mask & -mask;
		int y = mask + x;
		mask = (((mask & ~y) / x) >> 1) | y;
	}
}
bool findPairWithSum(vector<int>& arr, int target) {
	int left = 0, right = arr.size() - 1;
	while (left < right) {
		int sum = arr[left] + arr[right];
		if (sum == target) return true;
		if (sum < target) left++;
		else right--;
	}
	return false;
}
void reverseSubarray(vector<int>& arr, int start, int end) {
	while (start < end) {
		swap(arr[start], arr[end]);
		start++;
		end--;
	}
}
int removeDuplicates(vector<int>& nums) {
	if (nums.empty()) return 0;
	int uniqueIndex = 0;
	for (int i = 1; i < nums.size(); ++i) {
		if (nums[i] != nums[uniqueIndex]) {
			uniqueIndex++;
			nums[uniqueIndex] = nums[i];
		}
	}
	return uniqueIndex + 1;
}
int longestUniqueSubstring(string s) {
	unordered_set<char> charSet;
	int left = 0, maxLength = 0;
	for (int right = 0; right < s.size(); ++right) {
		while (charSet.find(s[right]) != charSet.end()) {
			charSet.erase(s[left]);
			left++;
		}
		charSet.insert(s[right]);
		maxLength = max(maxLength, right - left + 1);
	}
	return maxLength;
}
string minWindowSubstring(string s, string t) {
	unordered_map<char, int> charCount;
	for (char c : t) charCount[c]++;
	int required = charCount.size();
	int left = 0, right = 0, formed = 0;
	unordered_map<char, int> windowCounts;
	int minLength = INT_MAX, minLeft = 0;

	while (right < s.size()) {
		char c = s[right];
		windowCounts[c]++;
		if (charCount.find(c) != charCount.end() && windowCounts[c] == charCount[c]) {
			formed++;
		}
		while (left <= right && formed == required) {
			if (right - left + 1 < minLength) {
				minLength = right - left + 1;
				minLeft = left;
			}
			windowCounts[s[left]]--;
			if (charCount.find(s[left]) != charCount.end() && windowCounts[s[left]] < charCount[s[left]]) {
				formed--;
			}
			left++;
		}
		right++;
	}
	return minLength == INT_MAX ? "" : s.substr(minLeft, minLength);
}
vector<vector<int>> threeSum(vector<int>& nums) {
	vector<vector<int>> result;
	sort(nums.begin(), nums.end());
	for (int i = 0; i < nums.size() - 2; ++i) {
		if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates
		int left = i + 1, right = nums.size() - 1;
		while (left < right) {
			int sum = nums[i] + nums[left] + nums[right];
			if (sum == 0) {
				result.push_back({ nums[i], nums[left], nums[right] });
				while (left < right && nums[left] == nums[left + 1]) left++;
				while (left < right && nums[right] == nums[right - 1]) right--;
				left++;
				right--;
			}
			else if (sum < 0) {
				left++;
			}
			else {
				right--;
			}
		}
	}
	return result;
}
bool comparePairs(const pair<int, int>& a, const pair<int, int>& b) {
	if (a.first == b.first)
		return a.second < b.second;
	return a.first < b.first;
}
int maxArea(vector<int>& height) {
	int left = 0, right = height.size() - 1;
	int maxArea = 0;
	while (left < right) {
		int width = right - left;
		int minHeight = min(height[left], height[right]);
		maxArea = max(maxArea, width * minHeight);
		if (height[left] < height[right]) left++;
		else right--;
	}
	return maxArea;
}
int main()
{
	speedup;
	int n, k;
	cin >> n >> k;
	vector<int>arr(n);
	if (n == 1 || k == n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << i + 1 << " ";
		}
	}
	else
	{
		int i = 0, j = 1;
		while (j != n + 1)
		{
			if (arr[i])
			{
				i++;
			}
			arr[i] = j;
			j++;
			i = (i + k) % n;
		}
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
	}
}
/*
	sum from 1 to n = (n*(n+1))/2
	sum from n to m = ((n + m) / 2) * num of numbers
	odd sum from 1 to n = (1/2(n + 1))pow 2
*/