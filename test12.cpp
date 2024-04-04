#include<iostream>
#include<string>

using namespace std;

string solution(string inputString);

int main(){
    string input;
    solution("foo(bar)baz");
    cout<<solution("foo(bar)baz");
    return 0;
}

string solution(string inputString){
    for(int i=0;i<int(inputString.size());i++){
        if(inputString[i] == '('){
            for(int j=i+1;j<int(inputString.size());j++){
                if(inputString[j] == '('){
                    for(int k=j+1;k<int(inputString.size());k++){
                        if(inputString[k]==')'){
                            // char temp=' ';

                            while(j+1<k){
                                char temp=inputString[j+1];
                                inputString[j+1]=inputString[k-1];
                                inputString[k-1]=temp;

                                j++;
                                k--;
                            }
                            break;
                        }
                    }
                    break;
                }
            }
            break;
        }
    }

    return inputString;
}
