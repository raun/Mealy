#include <iostream>
#include <fstream>
#include <string>
// Define some constant. N represent the number of inputs. M represent number of states.
# define N 3
# define M 2
using namespace std;
int main(){
    ifstream fin("file.txt");
    int state=0,DFA[M+1][N],i=0,output[M+1][N];
    string str;
    // Reading from the file
    while(fin){
    	for(int j=0;j<N;++j){
        	fin>>DFA[i][j]>>output[i][j];
        }
        i++;
    }
    i=0;
    cout<<"\nEnter the input string:";
    cin>>str;
    while(str[i]!='\0'){
    		if(DFA[state][str[i]-'a']==-1)
    			break;
    		cout<<output[state][str[i]-'a'];
    		state = DFA[state][str[i]-'a'];
    		i++;
    }
    if(str[i]!='\0')
    	cout<<"\nNot Acceptible";
    cout<<endl;
    return 0;
}
