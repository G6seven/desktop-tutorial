#include <iostream>
#include <string>

using namespace std;

char scrtValue = 69;
int maxTries = 3;
int tries = 0; 
bool fuckup = false;


/* string InputCatcher () {
    string Input;
    cout << "write a number:";
    cin >> numberInput;
    tries++;
    return Input; 
} */

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

    while (!fuckup)
    {
        while (numberInput != scrtValue && tries != maxTries)
        {
            string numberInput;
            cout << "write a number:";
            cin >> numberInput;
            bool checkInput = checkInteger(numberInput);

            if (checkInput){
                int NumberInput = stoi(numberInput);
            }

            tries++;
            if (numberInput != scrtValue)
            {
                cout << "wrong\n";
            }
        } 
        if (numberInput != scrtValue)
        {
            cout <<"monkey" <<endl;
            
        } else 
        {
            cout << "wp" << endl;
            return 0;
        }
        return 0;  
        
    }

    return 0;
}


/* //check if number or string
bool check_number(string numberInput) {
   for (int i = 0; i < numberInput.length(); i++)
   if (isdigit(numberInput[i]) == false)
      return false;
      return true;

}
 */