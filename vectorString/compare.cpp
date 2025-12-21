#include <iostream>
#include <vector>
#include <string>
using namespace std;


int countSuffixMatches(vector<string>& w, string suff) {
    int count = 0;
    for(int i = 0 ; i <  w.size() ; ++i ){
        if(w[i].size() < suff.size()) continue;
        cout<<w[i]<<endl;
        cout<<w[i].size() <<"" <<suff.size()<<w[i].size() - suff.size();
        if(w[i].compare(w[i].size() - suff.size() ,stuff.size()-1  , suff) == 0){
            count++;
        }
    }
   

    return count;
}

int main() {
    vector<string> words = {
        "testing",
        "ending",
        "coding",
        "king",
        "ring",
        "test"
    };

    string suff = "ing";

    int result = countSuffixMatches(words, suff);
    cout << "Suffix match count: " << result << endl;

    return 0;
}
