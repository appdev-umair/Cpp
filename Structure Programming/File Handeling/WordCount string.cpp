#include <iostream>
#include <fstream>
using namespace std;
int compare(string c, int l, string t){
    int count = 0;
    for(int i = 0; i < l; i++){
        string str = ""; 
        while(t[i] != ' '){
            str += t[i];
            i++;
            if(t[i] == ' '){
                if(c == str){
                    count++;
                }
                break;
            }
        }
    }
    return count;
}
bool already(string word, string t, int index){
    int count = 0;
    for(int i = 0; i < index; i++){
        string str = ""; 
        while(t[i] != ' '){
            str += t[i];
            i++;
            if(t[i] == ' '){
                if(word == str){
                    count++;
                }
                break;
            }
        }
    }
    if(count == 1){
        return true;
    }
    return false;
}
int main(){
    string txt;
    int num;
    ifstream fin("File.txt");
    getline(fin, txt);
    txt = txt + " ";
    ofstream fout;
    fout.open("Result.txt", std::ios_base::app);
    int len = txt.length();

    cout << len;
    for(int i = 0; i < len; i++){
        string comp = "";

        while((txt[i] != ' ') && ((txt[i] >= 95) && (txt[i] <= 90)) || ((txt[i] >= 97) && (txt[i] <= 122))){
            comp += txt[i];

            i++;
            if(txt[i] == ' '){
            
                if(already(comp, txt, i)){
                    num = compare(comp, len, txt);
                    fout << comp << " " << num << endl;
                }
                break;
            }
        }
    }
    fin.close();
    fout.close();
    return 0;
}