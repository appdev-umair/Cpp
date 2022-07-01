#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
bool check(char str[], char comp[]){
    int i, count = 0, l = 0, len;
    l = strlen(comp);
    len = strlen(str);
    for(i = 0; i < l; i++){
        if(comp[i]==str[i]){
            continue;
        }
        else {
            break;
        }
    }
    if(i == l && l == len){
        return true;
    }
    return false;
}

int compare(char c[], int l, char t[]){
    int count = 0;
    for(int i = 0; i < l; i++){
        char str[1000] = ""; 
        while(t[i] != ' '){
            int p;
            for(p=0; str[p] != '\0'; p++);//pointing to the index of the last character of x
            str[p]=t[i];  
            p++;
            str[p]='\0';
            i++;
            if(t[i] == ' '){
                if(check(c, str)){
                    count++;
                }
                break;
            }
        }
    }
    return count;
}
bool already(char word[100], char t[1000], int index){

    int count = 0;
    for(int i = 0; i < index; i++){
        char str[1000] = ""; 
        while(t[i] != ' '){
            int p;
            for(p=0; str[p] != '\0'; p++);//pointing to the index of the last character of x
            str[p]=t[i];  
            p++;
            str[p]='\0';
            i++;

            if(t[i] == ' '){
                if(check(str, word)){
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
    char txt[100] = "", str[100] = "  ";
    int num;
    ifstream fin("File.txt");
    fin.getline(txt, 100);
    int len = strlen(txt);
    strcat(txt, str);
     
     

    ofstream fout;
    fout.open("Result.txt", std::ios_base::app);
    for(int i = 0; i < len; i++){
        char comp[1000] = "";
        while((txt[i] != ' ') && ((txt[i] >= 65) && (txt[i] <= 90)) || ((txt[i] >= 97) && (txt[i] <= 122))){
                int p;
                for(p=0; comp[p] != '\0'; p++);//pointing to the index of the last character of x
                    comp[p]=txt[i];
                    p++;
                    comp[p]='\0';
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