#include <bits/stdc++.h>

int n;
std::string a, b;
std::vector<int> ans(26,0);

int main() {
    std::cin >> n;
    for(int i=0; i< n; i++){
        std::cin >> a >> b;
        std::vector<int> set1(26,0), set2(26,0);
        for(int j=0; j<a.size(); j++){
            set1[a[j]-'a']++;
        }
        for(int j=0; j<b.size(); j++){
            set2[b[j]-'a']++;
        }
        for(int j=0; j<26; j++){
            ans[j] += std::max(set1[j], set2[j]);
        }

    }
    for(int i=0; i<26; i++){
        std::cout << ans[i] << std::endl;
    }
}
