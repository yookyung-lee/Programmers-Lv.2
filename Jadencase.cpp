#include <string>
#include <vector>
#include <cctype>
using namespace std;

string solution(string s) {
    string answer = "";
    for (int i=0; i<s.length(); i++){
        if (i==0 ) s[i]=toupper(s[i]); //if it is the first letter
        if (isspace(s[i])!=0) s[i+1]=toupper(s[i+1]); //if the letter is ' '                  
        else s[i+1]=tolower(s[i+1]); //if the letter is not ' '
        
    }
    answer=s; //put s to the answer string
    return answer;
}