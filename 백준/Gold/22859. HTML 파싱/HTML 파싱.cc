#include <bits/stdc++.h>
using namespace std;

string s;
vector<string> titles;
vector<vector<string>> paras;

vector<pair<string, int>> para;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	getline(cin , s);

int n = s.size();
    int curDiv = -1;

    for (int i = 0; i < n; ) {

        // <div title="...">
        if (s.compare(i, 12, "<div title=\"") == 0) {
            i += 12;
            string t;
            while (s[i] != '"') t += s[i++];
            titles.push_back(t);
            paras.push_back({});
            curDiv++;
            i++; // " → skip
        }

        // <p>
        else if (s.compare(i, 3, "<p>") == 0) {
            i += 3;
            string p;
            bool space = false;

            while (true) {
                // </p>
                if (s.compare(i, 4, "</p>") == 0) {
                    i += 4;
                    break;
                }

                // p 안의 tag → skip
                if (s[i] == '<') {
                    while (s[i] != '>') i++;
                    i++;
                    continue;
                }

                // 공백
                if (s[i] == ' ') {
                    if (!space) p += ' ';
                    space = true;
                } else {
                    p += s[i];
                    space = false;
                }
                i++;
            }

            paras[curDiv].push_back(p);
        }

        else {
            i++;
        }
    }

    for (int i = 0; i < titles.size(); i++) {
        cout << "title : " << titles[i] << "\n";
        for (auto &p : paras[i]) {
            cout << p << "\n";
        }
    }
}
