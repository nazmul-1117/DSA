#include <bits/stdc++.h>
using namespace std;

void subsequence(string str,  string output,vector<string>& ans, size_t index){

    //base case
    if(index >= str.size()){
        if(output.size() > 0)
            ans.push_back(output);
        return ;
    }

    //exclude case
    subsequence(str, output, ans, index+1);

    //include part
    char c = str[index];
    output.push_back(c);
    subsequence(str, output, ans, index+1);
}

void displayData(vector<string>& ans){
    for(auto e: ans){
        for(auto f: e){
            cout << f <<"";
        }
        cout << endl;
    }
}

int main(){
    int n = 3;
    int s = 0;

    string str = "abc";
    string output = "";
    vector<string> ans;
    size_t index=0;

    subsequence(str, output, ans, index);

    cout << "The Power set." << endl;
    displayData(ans);
    cout << "Total element 2^" << str.length() << ": " << ans.size()+1 << endl;
}
