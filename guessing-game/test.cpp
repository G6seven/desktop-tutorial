#include <iostream>
using namespace std;
 
bool checkInteger(string input)
{
    bool isNeg=false;
    int itr=0;
    if(input.size()==0)
        return false;
    if(input[0]=='-')
    {
        isNeg=true;
        itr=1;
    }
 
    for(int i=itr;i<input.size();i++)
    {
        if(!isdigit(input[i]))
            return false;
    }
    return true;
}
 
int main()
{
    string input;
    cout<<"Enter the input\n";
    cin>>input;
    bool isInt = checkInteger(input);
    cout<<"Is the input an integer? ";
    if(isInt){
        int result = 0;
        cout << result << endl;
        
    }
        
    else {
        int result = 1;
        cout << result << endl;
    
    }
    return 0;
}