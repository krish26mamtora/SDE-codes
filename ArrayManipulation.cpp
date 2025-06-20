#include <bits/stdc++.h>

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

long arrayManipulation(int n, vector<vector<int>> queries)
{
    vector<long int> v(n, 0);
    long ans = 0;
    for (auto q : queries)
    {
        int st = q[0] - 1;
        int end = q[1] - 1;
        int k = q[2];
        v[st] += k;
        // v[end+1]-=k;
        if (end < n - 1)
        {
            v[end + 1] -= k;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        v[i + 1] += v[i];
        ans = max(ans, v[i + 1]);
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int m = stoi(first_multiple_input[1]);

    vector<vector<int>> queries(m);

    for (int i = 0; i < m; i++)
    {
        queries[i].resize(3);

        string queries_row_temp_temp;
        getline(cin, queries_row_temp_temp);

        vector<string> queries_row_temp = split(rtrim(queries_row_temp_temp));

        for (int j = 0; j < 3; j++)
        {
            int queries_row_item = stoi(queries_row_temp[j]);

            queries[i][j] = queries_row_item;
        }
    }

    long result = arrayManipulation(n, queries);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}

vector<string> split(const string &str)
{
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos)
    {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
