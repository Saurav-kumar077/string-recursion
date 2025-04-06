#include<iostream>
using namespace std;
void solve (string str,string output,int index){
    //base function
    if(index>=str.length()){
        cout<< output <<endl;
        return;
    }
    //exclude function 
    solve(str,output,index+1);
    //include funtion
    output += str[index];
    solve(str,output,index+1);

}
int main(){
    string str = "abc";
    string output;
    int index =0;
    solve(str,output,index);

    return 0;
}