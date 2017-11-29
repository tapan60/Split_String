#include<bits/stdc++.h>
using namespace std;
int main()
{

    int k=0;

    std::string s = "This is a Program";
    std::vector<std::string> result;
    std::istringstream iss(s);
    for(std::string s; iss >> s; ){
        result.push_back(s);
        ++k;
    }

    for(int i=0;i<k;++i){
        cout<<result[i]<<endl;
    }

}
