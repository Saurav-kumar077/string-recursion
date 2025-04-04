#include<iostream>
using namespace std;
void getreverse(string &str, int i,int j){
    if(i>j){
        return;
        
    }
    swap(str[i],str[j]);
        i++;
        j--;

        getreverse(str,i,j);
    

}
int main(){
    string name = "abcde";
    getreverse(name,0,name.length()-1);
    cout<<name <<endl;


    return 0;
}