#include <bits/stdc++.h>
using namespace std;

void powerSet(vector<int> mainSet,  vector<int> output, size_t index, vector<vector <int> >& ans){

    //base case
    if(index >= mainSet.size()){
        if(output.size() > 0)
            ans.push_back(output);
        return ;
    }

    //exclude case
    powerSet(mainSet, output, index+1, ans);

    //include part
    int elecment = mainSet[index];
    output.push_back(elecment);
    powerSet(mainSet, output, index+1, ans);
}

void displayData(vector<vector <int> > ans){
    for(auto e: ans){
        for(auto f: e){
            cout << f <<" ";
        }
        cout << endl;
    }
}

int main(){
    int n = 3;
    int s = 0;

    vector<int> mainSet{1, 2, 3};
    vector<int> output;
    vector<vector <int> > ans;
    size_t index=0;

    powerSet(mainSet, output, index, ans);

    cout << "The Power set." << endl;
    displayData(ans);

    cout << "Total element 2^" << mainSet.size() << ": " << ans.size()+1 << endl;
}
