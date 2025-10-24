    #include<bits/stdc++.h>
    using namespace std;
    #define loop(v) for(int i:(v)){cout<<i<<' ';}cout<<endl;
    #define loop2d(v) for(auto i:(v)){for(int j:i){cout<<j<<' ';}cout<<endl;}
    #define mod (int)1e9+7;
        
    int check(string s, int ind){
        return (s[ind] == 'W' && s[ind+1] == 'U' && s[ind+2] == 'B');
    }    


    int main(){
        string s, ans="", temp="";
        getline(cin, s);
        int n = s.size();
        
        for(int i=0; i<n; i++){
            if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
                if(temp.size() > 0){
                    ans += temp+' ';
                    temp = "";
                }
                i+=2;
            }    
            else{
                temp += s[i];
            }
        }
        if(temp.size() > 0) ans += temp;
        cout<<ans;
    }




    // int main(){
    //     string s;
    //     getline(cin, s);
    //     int n = s.size();
    //     string ans="", temp="";
    //     for(int i=0; i<n; i++){
    //         if(i + 2 < n && s[i] == 'W' && check(s, i)){
    //             if(temp.size() > 0) {
    //                 ans += temp+' ';
    //                 temp = "";
    //             }
    //             i+=2;
    //         } 
    //         else{
    //             temp +=s[i];
    //         }
    //     }
    //     if (!temp.empty()) ans+=temp;
    //     cout<<ans;
    //     return 0;
    // }