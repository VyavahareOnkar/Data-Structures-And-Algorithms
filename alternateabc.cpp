#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    string word="";
    string finalWord="";
    int wordCount=0;
    // int n=s.size();
     for(int i = 0; i < s.size(); i++){
            if((s[i]) != '.'){
                word += s[i];
            }
            else{

                if(wordCount % 2 == 0){
                    finalWord += word+".";
                    word = "";
                }
                else{
                    finalWord += "abc";
                    finalWord+=".";
                    word ="";
                }
                wordCount++;
            }
        }
        if(word != ""){
            if(wordCount % 2 == 0){
                finalWord += word;
            }
            else {
                finalWord += "abc";
            }
        }
        cout<<finalWord<<endl;
   
    return 0;
}


