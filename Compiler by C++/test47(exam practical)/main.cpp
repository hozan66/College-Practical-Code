#include <iostream>

using namespace std;

int main()
{
    string input;
    cout << "Enter stupiddddd string: ";

    cin >> input;
    int n = input.length();
    cout << endl;
    int flag = 0;

    if(input == "abb"){
        flag = 1;
    } else if (input[n - 1] == 'b'){
        flag=2;
        for(int i = 0; i < n - 1; i++){
                if(input[i] == 'a')
                    flag = 2;
                else{
                    flag = 0; break;
                }

            }

        } else if (input[0] == 'a' ) {
                for(int i = 0; i < n; i++) {
                    if(input[i] == 'a'){
                        flag = 3;
                    }
                    else{
                    flag = 0; break;
                }
                }
            }

    if(flag == 0)
        cout << "not recognized" << endl;
    else if (flag == 1)
        cout << "abb" << endl;
    else if (flag == 2)
        cout << "a*b" << endl;
    else if (flag == 3)
        cout << "a+" << endl;

    return 0;
}
