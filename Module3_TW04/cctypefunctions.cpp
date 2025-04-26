#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main(){
    char str[] = "#1 - FEU Institute of Technology @ Sampaloc";
    cout << "Original string: " << str << endl;
    
    // Get the lenght of the string using strlen()
    int length = strlen(str);
    cout << "Length of the string: " << length << endl;

    // Using toupper() and tolower()
    cout << "UPPERCASE: ";
    for(int i = 0; i < length; i++){
        cout << (char)toupper(str[i]);
    }
    cout << endl;
    cout << "lowercase: ";
    for(int i = 0; i < length; i++){
        cout << (char)tolower(str[i]);
    }
    cout << endl;

    // Using other cctype functions
    int upper, lower, alpha, digit, space, punct, print, graph;
    upper = lower = alpha = digit = space = punct = print = graph = 0;
    for(int i = 0; i < length; i++){
        if(isupper(str[i])){
            upper++; // Count uppercase letters
        }

        if(islower(str[i])){
            lower++; // Count lowercase letters
        }

        if(isalpha(str[i])){
            alpha++; // Count alphabet characters
        }

        if(isdigit(str[i])){
            digit++; // Count numeric characters
        }

        if(isspace(str[i])){
            space++; // Count space/whitespace characters
        }

        if(ispunct(str[i])){
            punct++; // Count punctuation/special characters
        }

        if(isprint(str[i])){
            print++; // Count printing characters
        }

        if(isgraph(str[i])){
            graph++; // Count graphed characters
        }
    }

    // Show counts
    cout << "Uppercase letters: " << upper << endl;
    cout << "Lowercase letters: " << lower << endl;
    cout << "Alphabet characters: " << alpha << endl;
    cout << "Numerical characters: " << digit << endl;
    cout << "Spaces: " << space << endl;
    cout << "Punctuations: " << punct << endl;
    cout << "Printing characters: " << print << endl;
    cout << "Graphed characters: " << graph << endl;
}